
#include <iostream>
#include <valarray>

int main()
{
    double num1, num2, result;
    char sign;
    std::cout<<"Write first number: ";
    std::cin >> num1;
    std::cout<<"Write arithmetic operation: ";
    std::cin >> sign;
    std::cout<<"Write second number: ";
    std::cin >> num2;
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
                std::cout<<"The second number must not be equal to zero\n";
                break;
            }
        default:
            std::cout<<"Wrong action\n";
    }
    std::cout<<"Answer: "<<result;
}