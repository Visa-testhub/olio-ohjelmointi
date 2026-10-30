#include <iostream>
#include <cstdlib>

void tarkista(int num)
{
	if (num > 0)
	{
		std::cout << "positiivinen" << std::endl;
	}
	else if (num < 0)
	{
		std::cout << "negatiivinen" << std::endl;
	}
	else
	{
		std::cout << "nolla" << std::endl;
	}
}

void terveiset(int num)
{
	for (int i = 1; i <= num; i++)
	{
		std::cout << "Terve " << i << std::endl;
	}
}

void kertoma(int num) {
	//Laske num kertoma jos num on isompi kuin 0 ja pienempi kuin 10
	if (num < 1)
	{
		std::cout << "Ei voida laskea";
	}
	else if (num > 10)
	{
		std::cout << "Luku on liian iso";
	}
	else
	{
		long factorial = 1;
		for (long i = 1; i <= num; i++)
		{
			factorial *= i;
		}
		std::cout << factorial;
	}
}

void tarkista_jaollisuus(int jaettava, int jakaja)
{
	if (!(jaettava % jakaja))
	{
		std::cout << "jaollinen";
	}
	else
	{
		std::cout << "ei jaollinen";
	}
}

void sarja(int sluku)
{
	std::srand(sluku);
	for (int i = 0; i <= 5; i++)
	{
		int random = std::rand() % 20;
		std::cout << random << std::endl;
	}
}

int main()
{
	std::srand(15);

	/*
	int num;

	std::cin >> num;
	kertoma(num);
	tarkista_jaollisuus(num, 10);
	*/
	
	/*
	std::cout << "?";
	int num;
	std::cin >> num;
	num = num * 2;
	std::cout << num;

	int a = 4;
	int b = 5;

	int something = 1 + (2 * (a * b));

	std::cout << something;

	tarkista(1);
	tarkista(-1);
	tarkista(0);

	terveiset(3);
	*/
	return 0;
}