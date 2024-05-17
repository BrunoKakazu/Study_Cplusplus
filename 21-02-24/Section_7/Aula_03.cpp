/*
	Nesta aula estou vendo como é o funcionamento de arrays e sua declaração
*/

#include <iostream>

using namespace std;

int main()
{
	// Nesta parte eu estou declarando um array de vogais e estou imprimindo a primeira e a ultima vogal
	char vowels[]{ 'a', 'i', 'u', 'e', 'o' };				// Aqui nao declarei o tamanho, porem eu fiz a inicializacao de 5 vogais, logo o compilador ira criar um array de tamanho 5
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;

	//cin >> vowels[5];										// Nesta parte, como estou tentando acessar uma posicao invalida, ele ira dar erro na hora que for tentar acessar o local

	double hi_temps[]{ 90.1, 89.9, 77.5, 81.6 };
	cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

	hi_temps[0] = 100.7;									// Nesta parte eu estou substituindo o valor da primera posicao do array, ou seja, de 90.1 passa a ser 100.7

	cout << "The first temperature is: " << hi_temps[0] << endl;


	// Neste caso eu estou lendo um array sem inicializaça
	int test_score[5]{ 100, 90 };

	cout << "\nFirst score at index 0: " << test_score[0] << endl;
	cout << "Second score at index 1: " << test_score[1] << endl;
	cout << "Third score at index 2: " << test_score[2] << endl;
	cout << "Fourth score at index 3: " << test_score[3] << endl;
	cout << "Fifth score at index 4: " << test_score[4] << endl;


	// Neste caso eu estou pedindo para o jogador coloque 5 valores
	cout << "\nEnter 5 test score";
	cin >> test_score[0];
	cin >> test_score[1];
	cin >> test_score[2];
	cin >> test_score[3];
	cin >> test_score[4];

	cout << "\nThe update array is:" << test_score[0] << endl;
	cout << "First score at index 0:" << test_score[1] << endl;
	cout << "Second score at index 1:" << test_score[2] << endl;
	cout << "Third score at index 2:" << test_score[3] << endl;
	cout << "Fourth score at index 3:"<< test_score[4] << endl;
	

	cout << "\nNotice what the value of the array name is: " << test_score << endl;

	return 0;
}