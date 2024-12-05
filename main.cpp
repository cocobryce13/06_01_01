#include <iostream>
#include "math.h"


int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, x;
	

	std::cout << "Введите первое число : ";
	std::cin >> a;
	'\n';

	std::cout << "Введите второе число : ";
	std::cin >> b;
	'\n';

	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
	std::cin >> x;

	switch (x)
	{
	case 1:
		std::cout << "Число " << a << " + число " << b << " = "; 
		std:: cout << addition(a, b) << std::endl;
		break;
	case 2:
		std::cout << "Число " << a << " - число " << b << " = ";
		std::cout << subtraction(a, b) << std::endl;
		break;
	case 3:
		std::cout << "Число " << a << " * на число " << b << " = ";
		std::cout << multiplication(a, b);
		break;
	case 4:
		std::cout << "Число " << a << " / на число " << b << " = ";
		std::cout << division(a, b);
		break;
	case 5:
		std::cout << "Число " << a << " в степени " << b << " = ";
		std::cout << power(a, b);
		break;

	default:
		break;
	}

	return 0;
}

//Введите первое число : 20
//Введите второе число : 2
//Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : 5
//20 в степени 2 = 400