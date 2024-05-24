#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
	Es();
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
Fraction Fraction::operator + (Fraction& ob) {
	int num1 = this->numerator_ * ob.denominator_ + ob.numerator_ * this->denominator_;
	int num2 = this->denominator_ * ob.denominator_;
	return Fraction(num1, num2);
}
Fraction Fraction::operator - (Fraction& ob) {
	int num1 = this->numerator_ * ob.denominator_ - ob.numerator_ * this->denominator_;
	int num2 = this->denominator_ * ob.denominator_;
	return Fraction(num1, num2);
}
Fraction Fraction::operator * (Fraction& ob) {
	int num1 = this->numerator_ * ob.numerator_;
	int num2 = this->denominator_ * ob.denominator_;

	return Fraction(num1, num2);
}
Fraction Fraction::operator / (Fraction& ob) {
	int num1 = this->numerator_ * ob.denominator_ ;
	int num2 = this->denominator_ * ob.numerator_;
	return Fraction(num1, num2);
}
Fraction Fraction::operator - () {
	int num1 = this->numerator_ * ( - 1);
	int num2 = this->denominator_* (-1);
	return Fraction(num1, num2);

}
Fraction& Fraction::operator ++() {
	this->denominator_ += 1;
	this->numerator_ += 1;
	return *this;
}
Fraction& Fraction::operator --() {
	this->denominator_ -= 1;
	this->numerator_ -= 1;
	return *this;
}
Fraction& Fraction::operator ++(int) {
	this->denominator_ += 1;
	this->numerator_ += 1;
	return *this;
}
Fraction& Fraction::operator --(int) {
	this->denominator_ -= 1;
	this->numerator_ -= 1;
	return *this;
}
int Fraction::Retnumerator_() {
	return this->numerator_;
}
int Fraction::Retdenominator_() {
	return this->denominator_;
}
int Fraction::gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void Fraction::Es() {
	int gcd = this->gcd(numerator_, denominator_);
	numerator_ /= gcd;
	denominator_ /= gcd;
}