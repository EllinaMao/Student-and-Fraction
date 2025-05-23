#include "Fraction.h"
using namespace std;

Fraction::Fraction(int num, int denom) : mNumerator(num), mDenominator(denom)
{
	if (mDenominator == 0) {
		throw std::invalid_argument("Denominator cannot be zero.");
	}
	simplify();
}

void Fraction::simplify()
{
	int gcd = findGCD(mNumerator, mDenominator);
	mNumerator /= gcd;
	mDenominator /= gcd;
	if (mDenominator < 0) { 
		mNumerator = -mNumerator;
		mDenominator = -mDenominator;
	}
}

int Fraction::findGCD(int a, int b) const
{
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a < 0 ? -a : a; 
}

void Fraction::print() const
{
	cout << "Numerator: " << mNumerator << "/ Denominator: " << mDenominator << endl;
}
