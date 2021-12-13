// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Dec 2021
// This program is for adding positive numbers

#include <iostream>

int main() {
    // function for creating for loop program
    // define variables
    int total_nums;
    int temp_num;
    int total_sum = 0;

    // Input
    std::cout << "How many numbers would you like to add: ";
    std::cin >> total_nums;

    // Process & Output
    for (int i = 0; i < total_nums; i++) {
        std::cout << "Enter a number to add: ";
        std::cin >> temp_num;
        if (temp_num <= 0) {
            continue;
        }
        total_sum += temp_num;
    }

    std::cout << "Sum of positive numbers is = " << total_sum << std::endl;

    // Output 
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}