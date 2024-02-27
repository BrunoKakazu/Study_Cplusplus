/*
*  Aula sobre Tipos Primitivos
*/

#include <iostream>

using namespace std;

int main()
{
	/**************************************************
	* Charactere Type
	***************************************************/

	char middle_initial{ 'J' }; // Para char � '' e para string � "".
	cout << "My middle initial is " << middle_initial << endl;

	/**************************************************
	* Integer Types
	* *************************************************/

	unsigned short int exam_score{ 55 }; // Se queremos que ele seja sem sinal, ent�o � necess�rio que ele esteja declarado como unsigned. Se voc� colocar um sinal de -  voc� ver� que ir� dar erro na compila��o
	cout << "My exam score was " << exam_score << endl;

	int countries_represented{ 65 }; // Como este int est� declarado com sinal, significa que quando colocarmos um sinal de - ele ir� passar com tranquilidade pelo compilador.
	cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

	long people_in_florida{ 20610000 };
	cout << "There are about " << people_in_florida << " people in Florida" << endl;

	long long people_in_earth{ 7'600'000'000 }; // No caso de utilizar um compilador de c++14, caso os n�meros sejam muito grandes, para n� se perder, ele permite que durante a marca��o de n�meros voc� utiliza ' e ele ir� comilar normalmente. Neste exemplo, este n�mero n�o como entrar em um tipo long, ent�o ele dever� ser do tipo long long.
	cout << "There are about " << people_in_earth << " people on earth" << endl;
}