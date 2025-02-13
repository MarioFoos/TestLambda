//============================================================================
// Name        : TestLambda.cpp
// Author      : Mario Foos
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void test1();
void test2();
void test3();
void test4();
void test5();

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5 ();

	return 0;
}

void test5()
{
	int sumatoria = 0;
    std::vector<int> numeros = {1, 2, 3, 4, 5};

	std::for_each(numeros.begin(), numeros.end(), [&sumatoria](int value) { return sumatoria += value; } );

    std::cout << "Suma de los elementos del vector: " << sumatoria << endl;
}

void test4()
{
	// Lambda con parámetros y captura por valor
	float factor = 0.4;
	auto poderar = [factor](float valor)
	{
		return valor*factor;
	};
	float val = 5;
	std::cout << "Ponderando " << val << " por factor " << factor << ": " << poderar (val) << std::endl;
}

void test3()
{
	// Lambda con captura por valor
	float base = 5;
	auto cuadrado = [base]()
	{
		return base*base;
	};
	cout << "Cuadrado de " << base << ": " << cuadrado() << endl;

	float l1 = 3, l2 = 4, l3 = 5;
	auto perimetro = [l1, l2, l3]()
	{
		return l1 + l2 + l3;
	};
	cout << "Perimetro del triangulo: : " << perimetro() << endl;
}

void test2()
{
	// Lambda sin parámetros y con retorno
	auto fecha = []()
	{
		time_t timestamp;
		time(&timestamp);

		return ctime(&timestamp);
	};
	cout << "Fecha: " << fecha() << endl;
}

void test1()
{
	// Lambda básica sin parámetros ni retorno
	auto saludar = []()
	{
		std::cout << "¡Hola, mundo!" << std::endl;
	};
	saludar (); // Llama a la lambda
}
