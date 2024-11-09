//
//  double.cpp
//  double converter
//
//  Created by maya nachiappan on 11/8/24.
//

#include "double.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

// Function definition
std::string doubleToString(double value, int precision)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << value;
    return stream.str();
}
