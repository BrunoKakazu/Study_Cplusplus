/*
* Aula 6: Aplica��es de sizeof
*/

#include <iostream>
#include <climits> // Esta � uma biblioteca que serve para informar a precis�o e o tamanho da implementa��o C++

using namespace std;

int main()
{
	cout << "sizeof information" << endl;
	cout << "===============================" << endl;

	cout << "char: " << sizeof(char) << " bytes." << endl;
	cout << "int: " << sizeof(int) << " bytes." << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
	cout << "short: " << sizeof(short) << " bytes." << endl;
	cout << "long: " << sizeof(long) << " bytes." << endl;
	cout << "long long: " << sizeof(long long) << " bytes." << endl;


	cout << "===============================" << endl;

	cout << "float: " << sizeof(float) << " bytes." << endl;
	cout << "double: " << sizeof(double) << " bytes." << endl;
	cout << "long double: " << sizeof(long double) << " bytes." << endl;

	return 0;
}