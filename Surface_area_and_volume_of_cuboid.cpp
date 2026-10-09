// Copyright (c) 2008 Frederic All rights reserved
// .
// Created by: Your Name
// Date: Month 18 2008
// Write Calculates area and circumference of a circle
#include<iostream>

int main() {
    int Length, width, height;
    std::cout <<"Hello";
    std::cout << "How are you doing ?\n";
    std::cout << "This code only takes in numbers\n"
                 "So please don't enter anything that is not a number\n"
                 "Or else it will crash\n"
                 "Thank you !!!\n";
    // Get he length
    std::cout << "Enter the length of the cuboid (m) \n";
    std::cin >> Length;

    // Get the width
    std::cout << "Enter the width of the cuboid (m) \n";
    std::cin >> width;

    // Get the height
    std::cout << "Enter the height of the cuboid (m) \n";
    std::cin >> height;

    // Calculate surface area
    int Surface_area = 2 * (Length * height + Length * width + width * height);

    // Calculate volume
    int Volume = Length * width * height;

    // Display surface area
    std::cout << "The Surface area of the cuboid is\t" << Surface_area << "m²";

    // Display volume
    std::cout << "\nThe volume of the cuboid is\t" << Volume <<"m³";}
