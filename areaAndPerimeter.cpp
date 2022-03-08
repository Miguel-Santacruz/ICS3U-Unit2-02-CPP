// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program calculates area and perimeter of a rectangle
//    with length and width imputed by the user

#include <iostream>
#include <cmath>

int main() {
    // This function calculates area and perimeter
    int length;
    int width;
    int areaOfRectangle;
    int perimeterOfRectangle;

    // Input
    std::cout << "Enter length of rectangle (cm): " << std::endl;
    std::cin >> length;
    std::cout << "Enter width of rectangle (cm): " << std::endl;
    std::cin >> width;

    // Process
    areaOfRectangle = length * width;
    perimeterOfRectangle = 2 * (length + width);

    // Output

    std::cout << "Area is " << areaOfRectangle << " cm²." << std::endl;
    std::cout << "Perimeter is " << perimeterOfRectangle << " cm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
