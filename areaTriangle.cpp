// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: Nov 24 2022
// This program calculates the area of a triangle using functions

#include <iomanip>
#include <iostream>

// this function calculates the area of a triangle
void CalcArea(float base, float height) {
    // formula to calculate the area of a triangle
    float area = (base * height) / 2;

    // displays the area to the user
    std::cout << "The area of the triangle is " << std::fixed;
    std::cout << std::setprecision(2) << area << "cm²" << std::endl;
}


int main() {
    // declares variables
    std::string baseString, heightString;
    float baseFloat, heightFloat;

    // gets base and height from the user
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightString;
    std::cout << "Enter the base of a triangle (cm): ";
    std::cin >> baseString;
    std::cout << std::endl;

    // checks if the user has entered a valid number
    try {
        // convert the user's input to a float
        baseFloat = std::stof(baseString);
        heightFloat = std::stof(heightString);

        // checks if base & height are greater than 0
        if (baseFloat > 0 && heightFloat > 0) {
            CalcArea(baseFloat, heightFloat);
        } else {
            std::cout << "The base and height must be greater than 0.";
        }
        // determines if the input is valid
    } catch (std::invalid_argument) {
        // tells user if the input is not a number
        std::cout << "Only numbers can be accepted!\n";
    }
}
