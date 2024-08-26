/*
	Aula_01: If Statement
*/

#include <iostream>

//int main()
//{
//	int num{};
//	const int min{ 10 };
//	const int max{ 100 };
//
//
//	std::cout << "Enter an integer between " << min << " and " << max << ": ";
//	std::cin >> num;
//
//	if (num >= min)
//	{
//		std::cout << "\n=============== If Statement 1 ==============" << std::endl;
//		std::cout << num << " is greater than or equal to" << min << std::endl;
//
//		int diff{num - min};
//
//		std::cout << num << " is " << diff << " greater than " << min << std::endl;
//	}
//	
//	if (num <= max)
//	{
//		std::cout << "\n=============== If Statement 2 ==============" << std::endl;
//		std::cout << num << " is less than or equal to " << max << std::endl;
//
//		int diff{ max - num };
//
//		std::cout << num << " is " << diff << " less than " << max << std::endl;
//	}
//
//	if (num >= min && num <= max)
//	{
//		std::cout << "\n=============== If Statement 3 ==============" << std::endl;
//		std::cout << num << " is in range " << std::endl;
//		std::cout << "This means statements 1 and 2 must also display!" << std::endl;
//	}
//
//	if (num == min || num == max)
//	{
//		std::cout << "\n=============== If Statement 4 ==============" << std::endl;
//		std::cout << num << " is right on boundary " << std::endl;
//		std::cout << "This means all 4 statements display " << std::endl;
//	}
//
//	return 0;
//}