#include <iostream>
// Title:Projects for scientific programming in C++
// Author: Victor Eijkhout
// Date: 2020
//Chapter_1: Prime numbers
/*
Prime numbers(numbers only divisible by 1 and itself)
*/

int main() {
    //1.Creates variables for number and divisor
    int number, divisor;
    //2.Testing initialization of number and divisor
    number = 9;
    divisor = 3;
    //3.Checks if number is divisible by divisor
    bool is_a_divisor;
    if (number % divisor == 0) {
        is_a_divisor = true;
        std::cout << "Indded, " << divisor << "is a divisor of" << number << "\n";
    }
    else {
        is_a_divisor = false;
        std::cout << "No, " << divisor << "is not a divisor of" << number << '\n';
    }
}