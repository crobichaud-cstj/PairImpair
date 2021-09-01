#include <iostream>

void main()
{
	int nb1;
	int nb2;
	int nb3;
	int nb4;
	int nb5;
	int x;

	std::cout << "Écrivez un nombre a 5 chiffres: ";

	std::cin >> x;

	nb1 = x / 10000 % 10;
	nb2 = x / 1000 % 10;
	nb3 = x / 100 % 10;
	nb4 = x / 10 % 10;
	nb5 = x % 10;

	if (x < 10000)
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres." << "\n";
	}
	else
	{
		std::cout << nb1 << "\n" << nb2 << "\n" << nb3 << "\n" << nb4 << "\n" << nb5 << "\n";
	}
}