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

	char middle_initial{ 'J' }; // Para char é '' e para string é "".
	cout << "My middle initial is " << middle_initial << endl;

	/**************************************************
	* Integer Types
	* *************************************************/

	unsigned short int exam_score{ 55 }; // Se queremos que ele seja sem sinal, então é necessário que ele esteja declarado como unsigned. Se você colocar um sinal de -  você verá que irá dar erro na compilação
	cout << "My exam score was " << exam_score << endl;

	int countries_represented{ 65 }; // Como este int está declarado com sinal, significa que quando colocarmos um sinal de - ele irá passar com tranquilidade pelo compilador.
	cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

	long people_in_florida{ 20610000 };
	cout << "There are about " << people_in_florida << " people in Florida" << endl;

	// long people_in_earth = 7'600'000'000; -> Neste caso é apresentado uma coisa benéfica em realizar em inicialização em lista. Quando isto acontece, ao invés de dar erro, ele irá apresentar um número muito grande, porém negativo. Esse é uns dos erros típicos de overflow.
	long long people_in_earth{ 7'600'000'000 }; // No caso de utilizar um compilador de c++14, caso os números sejam muito grandes, para nã se perder, ele permite que durante a marcação de números você utiliza ' e ele irá comilar normalmente. Neste exemplo, este número não como entrar em um tipo long, então ele deverá ser do tipo long long.
	cout << "There are about " << people_in_earth << " people on earth" << endl;
	
	long long distance_to_alpha_centuri{ 9'461'000'000'000 };
	cout << "The distance to alpha centuri is " << distance_to_alpha_centuri << " kilometers" << endl;

	/**************************************************
	* Floating point types
	* *************************************************/


}