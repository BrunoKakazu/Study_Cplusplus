/*
	Aula 08: Aqui iremos ver as questoes do and e or
*/

#include <iostream>

//int main()
//{
//	int num{};
//	const int lower{ 10 };
//	const int upper{ 20 };
//
//	std::cout << std::boolalpha;
//
//	// Determine if an entered integer is between two other integers
//	// assume lower < upper
//	/*std::cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//	std::cin >> num;
//
//	bool within_bounds{ false };
//	
//	within_bounds = (num > lower && num < upper);
//	std::cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << std::endl;*/
//
//	// Determine if an entered integer is outside two other integers
//	// Assume lower < upper
//
//	//std::cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
//	//std::cin >> num;
//
//	//bool outside_bounds{ false };
//	//outside_bounds = (num < lower || num > upper);
//	//std::cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << std::endl;
//
//
//	// Determine if an entered integere is exactly on the bounds
//	// Assume lower < upper
//
//	//std::cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
//	//std::cin >> num;
//
//	//bool on_bounds{ false };
//	//on_bounds = (num == lower || num == upper);
//	//std::cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << std::endl;
//
//	// Determine is you need to wear a coat based on temperature and wind speed
//
//	bool wear_coat{ false };
//	double temperature{};
//	int wind_speed{};
//
//	const int wind_speed_for_coat{ 25 };
//	const double temperature_for_coat{ 45 };
//
//	// Require a coat if either wind is too high OR  temperature is too low
//	std::cout << "\nEnter the current temperature in (F): ";
//	std::cin >> temperature;
//	std::cout << "Enter windspeed in (mph): ";
//	std::cin >> wind_speed;
//
//	wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
//	std::cout << "Do you need to wear a coat using OR? " << wear_coat << std::endl;
//
//	// Require a coat if BOTH the windspeed is too high AND temperature is too low
//	wear_coat = (temperature < temperature_for_coat && wind_speed < wind_speed_for_coat);
//	std::cout << "Do you need to wear a coat using AND? " << wear_coat << std::endl;
//
//	return 0;
//}