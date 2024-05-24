#pragma once

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	int Retnumerator_();
	int Retdenominator_();
	bool operator == ( Fraction& ob);
	bool operator != (Fraction& ob);
	bool operator < (Fraction& ob);
	bool operator > (Fraction& ob);
	bool operator >= (Fraction& ob);
	bool operator <= (Fraction& ob);
	Fraction operator + (Fraction& ob);
	Fraction operator - (Fraction& ob);
	Fraction operator * (Fraction& ob);
	Fraction operator / (Fraction& ob);
	Fraction operator -();
	void Es();
	int gcd(int, int);
	
	Fraction &operator --();
	Fraction& operator ++();
	Fraction& operator ++(int);
	Fraction& operator --(int);
};