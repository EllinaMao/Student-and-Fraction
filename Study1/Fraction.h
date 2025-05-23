#pragma once
#include <iostream>
#include <string>

class Fraction {
private:
	int mNumerator;
	int mDenominator;

public:

	Fraction(int num, int denom);
	void simplify();

	int findGCD(int a, int b) const;

	void print() const;
	int getNumerator() const { return mNumerator; }
	int getDenominator() const { return mDenominator; }

	void setNumerator(int num) { mNumerator = num; }
	void setDenominator(int denom) { mDenominator = denom; }
};