#include <iostream>

// we are also mentioning the library names as it helps us to find which header file belongs to which library
#include "math/addition.h"
#include "print_result/print_result.h"

// to compile the program, we need to include the other cpp files also in the g++ command
// g++ main.cpp printResult.cpp addition.cpp -o main

// For eg, 


int main(){
    float firstNum, secondNum;

    std::cout << "Enter first number: ";
    std::cin >> firstNum;

    std::cout << "Enter second number: ";
    std::cin >> secondNum;

    float addResult = addition(firstNum, secondNum);
    printResult("ADD", addResult);
}