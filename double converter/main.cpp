//
//  main.cpp
//  double converter
//
//  Created by maya nachiappan on 11/6/24.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include "double.hpp"

int main() 
{
    double number;
    int precision;

    // Take user input for the double value and precision
    std::cout << "Enter a double value: ";
    std::cin >> number;

    std::cout << "Enter the number of decimal places (precision): ";
    std::cin >> precision;

    // Convert the double value to a string with the specified precision
    std::string result = doubleToString(number, precision);

    // Display the result
    std::cout << "Converted string: " << result << std::endl;

    return 0;
}
