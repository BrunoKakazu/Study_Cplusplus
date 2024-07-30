/*
	Aula 08: Nesta aula iremos verificar o uso de maior, menor ou igual
*/


#include <iostream>
#include <compare>


int main()
{
	int num1{}, num2{};

	std::cout << std::boolalpha;

	// Resultado para <, > ou =
	/*std::cout << "Enter 2 integers separated by a space: ";
	std::cin >> num1 >> num2;

	std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
	std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
	std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
	std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;*/


	// Resultado para <=>
	std::cout << "Enter 2 integers separated by a space: ";
	std::cin >> num1 >> num2;
	auto result{ num1 <=> num2 };
	
	if (result > 0)
		std::cout << num1 << " > " << num2;
	else if (result == 0)
		std::cout << num1 << " = " << num2;
	else if (result < 0)
		std::cout << num1 << " < " << num2;


	return 0;
}