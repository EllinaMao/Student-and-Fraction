#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <fstream>
#include "Fraction.h"
using json = nlohmann::json;

class FractionFileManagerJs {
public:
    static void writeToFile(const std::string& filename, const Fraction& fraction);
    static bool readFromFile(const std::string& filename, Fraction& fraction);
};