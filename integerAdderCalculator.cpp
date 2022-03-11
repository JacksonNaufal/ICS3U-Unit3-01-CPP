// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a " Adder Integer Calculator" program with proper style"



#include <iostream>
#include <iomanip>

int main() {
    // this function calculates area and perimeter of a rectangle
    int int1;
    int int2;
    int answer;


    // input
    std::cout << "If your first number is: ";
    std::cin >> int1;
    std::cout << "If your second number is: ";
    std::cin >> int2;
    // process

    answer = int1 + int2;
    // output

    std::cout << "\nYour answer is: " << answer << std::endl;
    std::cout << "\nYour process is: " << int1 << " + " << int2 << " = "
    << answer << std::endl;
    std::cout << "\nDone." << std::endl;
}
