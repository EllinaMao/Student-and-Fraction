#include "FractionFileManager.h"
using namespace std;

void FractionFileManagerJs::writeToFile(const std::string& filename, const Fraction& fraction)
{
	json j;
	j["numerator"] = fraction.getNumerator();
	j["denominator"] = fraction.getDenominator();
	ofstream file(filename);
	if (file.is_open()) {
		file << j.dump(4); 
		file.close();
	} else {
		std::cerr << "Could not open file for writing: " << filename << std::endl;
	}

}

bool FractionFileManagerJs::readFromFile(const std::string& filename, Fraction& fraction)
{
	ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Could not open file for reading: " << filename << std::endl;
		return false;
	}
	json j;
	file >> j;
	if (j.contains("numerator") && j.contains("denominator")) {
		fraction.setNumerator(j["numerator"].get<int>());
		fraction.setDenominator(j["denominator"].get<int>());
		return true;
	}
	return true;
}
