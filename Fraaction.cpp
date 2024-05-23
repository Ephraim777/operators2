#include "Fraction.h"
Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}
bool Fraction::operator == (Fraction& ob) {
	if (this->numerator_/this->denominator_ == ob.numerator_/ob.denominator_  ) {
		return true;
	}
	return false;
}
bool Fraction::operator != (Fraction& ob) {
	if (this->numerator_ / this->denominator_ != ob.numerator_ / ob.denominator_) {
		return true;
	}
	return false;
}
bool Fraction::operator < (Fraction& ob) {
	if (this->numerator_ / this->denominator_ < ob.numerator_ / ob.denominator_) {
		return true;
	}
	return false;
}
bool Fraction::operator > (Fraction& ob) {
	if (this->numerator_ / this->denominator_ > ob.numerator_ / ob.denominator_) {
		return true;
	}
	return false;
}
bool Fraction::operator >= (Fraction& ob) {
	if (this->numerator_ / this->denominator_ >= ob.numerator_ / ob.denominator_) {
		return true;
	}
	return false;
}
bool Fraction::operator <= (Fraction& ob) {
	if (this->numerator_ / this->denominator_ <= ob.numerator_ / ob.denominator_) {
		return true;
	}
	return false;
}