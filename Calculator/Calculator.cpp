
#include <iostream>

int do_arithmetics(const double& first_digit, const char& arithmetic_operation, const double& second_digit, double& result_digit) {
    switch (arithmetic_operation) {
        case('+'): {
            result_digit = first_digit + second_digit;
            break;
        };
        case('-'): {
            result_digit = first_digit - second_digit;
            break;
        };
        case('*'): {
            result_digit = first_digit * second_digit;
            break;
        };
        case('/'): {
            result_digit = first_digit / second_digit;
            break;
        };
        default:{
            std::cout << "I don't recognize the number or sign.";
            break;
        };
    }
    return 0;
}

int main()
{
    
    double first_digit{};
    double second_digit{};
    double result_digit{};
    char arithmetic_operation{};
    std::cin >> first_digit;
    std::cin >> arithmetic_operation;
    std::cin >> second_digit;

    do_arithmetics(first_digit, arithmetic_operation, second_digit, result_digit);


    std::cout <<"Result: " << result_digit << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}