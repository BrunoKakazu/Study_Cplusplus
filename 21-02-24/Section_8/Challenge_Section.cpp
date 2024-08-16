/*
	Challenge Section
*/

/*
	Write a program that asks the user to enter the following:
	An integer representing the number of cents

	You may assume that the number of cents entered is greater than or equal to zero

	The program should then display how to provide that change to the user.

	In the US:
	1 dollar is 100 cents
	1 quarter is 25 cents
	1 dime is 10 cents
	1 nickel is 5 cents
	1 penny is 1 cent

	Sample run:

	Enter an amount in cents: 92
	Dollar: 0
	quarters: 3
	dimes: 1
	nickel : 1
	pennies: 2
*/

#include <iostream>

//int main()
//{
//	int cents{};
//	int amount{};
//
//	std::cout << "Enter an amount in cents: ";
//	std::cin >> cents;
//	
//	amount = cents / 100;
//	cents = cents - amount * 100;
//
//	std::cout << "Dollar = " << amount << std::endl;
//
//	amount = cents / 25;
//	cents = cents - amount * 25;
//
//	std::cout << "Quarters = " << amount << std::endl;
//
//	amount = cents / 10;
//	cents = cents - amount * 10;
//
//	std::cout << "Dimes = " << amount << std::endl;
//
//	amount = cents / 5;
//	cents = cents - amount * 5;
//
//	std::cout << "Nickels = " << amount << std::endl;
//
//	amount = cents / 1;
//	cents = cents - amount * 1;
//
//	std::cout << "Pennies = " << amount << std::endl;
//	return 0;
//}