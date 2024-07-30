/*
	Aula 06: Nesta aula iremos aprender sobre conversoes de tipos
*/

#include <iostream>

//int main()
//{
//	int total{};
//	int num1{}, num2{}, num3{};
//	const int count{ 3 };
//
//	std::cout << "Enter 3 integer separated by spaces: ";
//	std::cin >> num1 >> num2 >> num3;
//
//	total = num1 + num2 + num3;
//
//	double average{ 0.0 };
//	
//	// Aqui teremos um erro, pois o average nao esta mostrando valores de double
//	//average = total / count;
//
//	average = static_cast<double>(total) / count;
//
//	// Este formato e um formato antigo de C. Este tipo de cast e mais uma pressuposicao de que ele ira converter para double e nao faz a checagem
//	// O static_cast faz, alem de converter, verifica se e possivel fazer a conversao
//	//average = (double)total / count;
//
//	std::cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << std::endl;
//	std::cout << "The sum of the numbers is: " << total << std::endl;
//	std::cout << "The average of numbers is: " << average << std::endl;
//
//
//	std::cout << std::endl;
//	return 0;  
//}