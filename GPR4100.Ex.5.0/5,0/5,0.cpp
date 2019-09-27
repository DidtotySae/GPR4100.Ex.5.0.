#include <iostream>
#include <time.h>

int main()
{
	std::cout << "Voici le jeux du pierre-feuille-ciseaux.\n 0 = pierre\n 1=feuille\n 2=ciseaux\n ";

	int PlayerChoice, RandomChooseComputer;
	srand(time(NULL));

	RandomChooseComputer = rand() % 3;

	std::cin >> PlayerChoice;
	

	if (PlayerChoice == 0)
	{
		if (RandomChooseComputer == 1)
		{
			std::cout << "pierre - pierre\n";
			std::cout << "   EGALITE\n";
		}

		if (RandomChooseComputer == 2)
		{
			std::cout << "pierre - feuille\n";
			std::cout << "   PERDU\n";
			
		}

		if (RandomChooseComputer == 3)
		{
			std::cout << "pierre - ciseaux\n";
			std::cout << "   GAGNE\n";
			
		}

		
	}

	if (PlayerChoice == 1)
	{
		if (RandomChooseComputer == 1)
		{
			std::cout << "feuille - pierre\n";
			std::cout << "   GAGNE\n";
			
		}

		if (RandomChooseComputer == 2)
		{
			std::cout << "feuille - feuille\n";
			std::cout << "   EGALITE\n";
		}

		if (RandomChooseComputer == 3)
		{
			std::cout << "feuille - ciseaux\n";
			std::cout << "   PERDU \n";
		}

	}

	if (PlayerChoice == 2)
	{
		if (RandomChooseComputer == 1)
		{
			std::cout << "ciseaux - pierre\n";
			std::cout << "   PERDU\n";
			
		}

		if (RandomChooseComputer == 2)
		{
			std::cout << "ciseaux - feuille\n";
			std::cout << "   GAGNE\n";
			
		}

		if (RandomChooseComputer == 3)
		{
			std::cout << "ciseaux - ciseaux\n";
			std::cout << "   EGALITE\n";
		}

		
	}

	system("PAUSE");
	return EXIT_SUCCESS;
}