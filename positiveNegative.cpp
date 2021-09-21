// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program check that the integer is positive, negative and zero

#include <iostream>

int main() {
  // This Program check that the integer is positive, negative and zero

  int integer;

  // input
  std::cout << "Enter an integer: ";
  std::cin >> integer;
  std::cout << "" << std::endl;

  // process
  if (integer > 0) {
    // output
    std::cout << integer << " is a positive number." << std::endl;
  } else if (integer < 0) {
    // output
    std::cout << integer << " is a negative number." << std::endl;
  } else {
    // output
    std::cout << integer << " is just zero." << std::endl;
  }

  std::cout << "\nDone" << std::endl;
}
