#include <iostream>
#include "math.h"


int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, x;
	

	std::cout << "������� ������ ����� : ";
	std::cin >> a;
	'\n';

	std::cout << "������� ������ ����� : ";
	std::cin >> b;
	'\n';

	std::cout << "�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : ";
	std::cin >> x;

	switch (x)
	{
	case 1:
		std::cout << "����� " << a << " + ����� " << b << " = "; 
		std:: cout << addition(a, b) << std::endl;
		break;
	case 2:
		std::cout << "����� " << a << " - ����� " << b << " = ";
		std::cout << subtraction(a, b) << std::endl;
		break;
	case 3:
		std::cout << "����� " << a << " * �� ����� " << b << " = ";
		std::cout << multiplication(a, b);
		break;
	case 4:
		std::cout << "����� " << a << " / �� ����� " << b << " = ";
		std::cout << division(a, b);
		break;
	case 5:
		std::cout << "����� " << a << " � ������� " << b << " = ";
		std::cout << power(a, b);
		break;

	default:
		break;
	}

	return 0;
}

//������� ������ ����� : 20
//������� ������ ����� : 2
//�������� ��������(1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : 5
//20 � ������� 2 = 400