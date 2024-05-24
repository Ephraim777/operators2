#include <iostream>
#include "Fraction.h"


int main()
{
	std::cout << "Введите числитель 1 дроби : \n";
	int num1;
	std::cin >> num1;
	std::cout << "Введите знаменатель 1 дроби : \n";
	int num2;
	std::cin >> num2;
	Fraction f1(num1, num2);

	std::cout << "Введите числитель 2 дроби : \n";
	int num3;
	std::cin >> num3;
	std::cout << "Введите знаменатель 2 дроби : \n";
	int num4;
	std::cin >> num4;
	
	Fraction f2(num3, num4);
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 - f2;
	Fraction f5 = f1 * f2;
	Fraction f6 = f1 / f2;
	

	std::cout << num1 << "/" << num2 << " + " << num3 << "/" << num4 << " = " << f3.Retnumerator_() << "/" << f3.Retdenominator_() << std::endl;
	std::cout << num1 << "/" << num2 << " - " << num3 << "/" << num4 << " = " << f4.Retnumerator_() << "/" << f4.Retdenominator_() << std::endl;
	std::cout << num1 << "/" << num2 << " * " << num3 << "/" << num4 << " = " << f5.Retnumerator_() << "/" << f5.Retdenominator_() << std::endl;
	
	std::cout << num1 << "/" << num2 << " / " << num3 << "/" << num4 << " = " << f6.Retnumerator_() << "/" << f6.Retdenominator_() << std::endl;
	
	
	
	return 0;
}