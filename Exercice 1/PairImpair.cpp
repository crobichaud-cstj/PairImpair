#include <iostream>

void main()
{
	int nb1;

	std::cout << "Veulliez entrer un nombre entier pour savoir s'il est pair ou impair:";
	std::cin >> nb1;

	if (nb1 % 2 == 0)
	{
		std::cout << nb1 << " est un nombre pair";
	}
	else
	{
		std::cout << nb1 << " est est un nombre impair";
	}

	//Plan de test : Le programme fonctionne
}