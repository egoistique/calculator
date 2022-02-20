
#include <iostream>
#include <valarray>
using namespace std;

int main()
{
    double num1, num2, result;
    char sign;
    cout << "Write first number: \n";
    cin >> num1;
    cout << "Write arithmetic operation: \n";
    cin >> sign;
    cout << "Write second number: \n";
    cin >> num2;
    while(getchar() != '\n');
    switch(sign)
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0 ){
                result = num1 / num2;
                break;
            }
            else {
                cout << "The second number must not be equal to zero\n";
                break;
            }
        default:
            cout << "Wrong action\n";
    }
    cout << "Answer: " << result;
}