/*
	Esta � uma aula de inicializa��o e declara��o de vari�veis
*/

#include <iostream>

using namespace std;

int main()
{
	/*
	int age{21};

	cout << age << endl;
	*/

	// Nesta parte, estamos inicializando a vari�vel com 0.
	int room_width {0};
	int room_length {0};

	cout << "Enter the width of the room: ";
	cin >> room_width;

	cout << "Enter the length of the room: ";
	cin >> room_length;

	cout << "Area of the room is " << room_width * room_length << " square feet" << endl;

	return 0;
}
