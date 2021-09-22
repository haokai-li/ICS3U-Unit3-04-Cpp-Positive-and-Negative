// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program check that the integer is positive, negative and zero

#include <iostream>

int main() {
    // This Program check that the integer is positive, negative and zero

    int userNumber;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> userNumber;
    std::cout << "" << std::endl;

    // process
    if (userNumber > 0) {
        // output
        std::cout << userNumber << " is a positive number." << std::endl;
    } else if (userNumber < 0) {
        // output
        std::cout << userNumber << " is a negative number." << std::endl;
    } else {
        // output
        std::cout << userNumber << " is just zero." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
