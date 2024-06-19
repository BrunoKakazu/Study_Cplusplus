/*
	Nesta aula veremos a declaracao de vetores
*/

#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//	// A verdadeira declaracao do vetor e "std::vector <char> vowels"
//	//vector <char> vowels;			// Inicializacao vazia do vetor
//	//vector <char> vowels(5);		// Tamanho do vetor e 5 e todos os elementos sao inicializados com 0
//	vector <char> vowels{ 'a', 'i', 'u', 'e', 'o' };
//
//	cout << vowels[0] << endl;
//	cout << vowels[4] << endl;
//
//	//vector <int> test_score(3);			// Tamanho do vetor e 3 com todos os elementos setados como 0
//	//vector <int> test_score(3, 100);		// Tamanho do vetor e 3 com todos os elementos setados com 100
//	vector <int> test_score{ 100, 99, 98 };
//
//	cout << "\nTest scores using array syntax:" << endl;
//	cout << test_score[0] << endl;
//	cout << test_score[1] << endl;
//	cout << test_score[2] << endl;
//
//	cout << "\nTest scores using vector syntax:" << endl;
//	cout << test_score.at(0) << endl;
//	cout << test_score.at(1) << endl;
//	cout << test_score.at(2) << endl;
//	cout << "\nThere are " << test_score.size() << " score in the vector" << endl;			// Nesta parte, o .size() ira me devolver o tamanho atual do vetor
//
//	// Nesta parte eu estou atualizando os valores nas posicoes 1, 2 e 3 do vetor
//	cout << "\nEnter 3 test scores: ";
//	cin >> test_score.at(0);
//	cin >> test_score.at(1);
//	cin >> test_score.at(2);
//
//	// Nesta parte estou querendo mostrar os novos valeres atribuidos a cada posicao do vetor
//	cout << "\nUpdated test scores: " << endl;
//
//	cout << test_score.at(0) << endl;
//	cout << test_score.at(1) << endl;
//	cout << test_score.at(2) << endl;
//
//
//	/* =========================================================================================== */
//	// Nesta parte iremos entrar na parte dinamica do vetor
//
//	cout << "\nEnter a test score to add to the vector: ";
//
//	int score_to_add{ 0 };
//	cin >> score_to_add;			// Nesta parte estou pedindo para ser colocado um valor
//	
//	test_score.push_back(score_to_add);			// Nesta parte sera colocado no final do vetor o numero colocado anteriormente
//
//	cout << "\nEnter one more test score to add to the vector: ";
//
//	cin >> score_to_add;
//
//	test_score.push_back(score_to_add);
//	
//	// Aqui iremos mostrar os valores atuais dentro do vetor
//	cout << "\nTest scores are now: " << endl;
//
//	// Aqui esta sendo vistas 5 elementos, pois anteriormente colocamos mais dois elementos dentro do vetor
//	cout << test_score.at(0) << endl;
//	cout << test_score.at(1) << endl;
//	cout << test_score.at(2) << endl;
//	cout << test_score.at(3) << endl;
//	cout << test_score.at(4) << endl;
//	
//	cout << "\nThere are now " << test_score.size() << " scores in the vector" << endl;
//
//	//cout << "This should cause an exception!!" << test_score.at(10) << endl;
//
//	/* ==================================================================================================== */
//	// Exemplo de um vetor 2D
//
//	vector <vector<int>> movie_ratings
//	{
//		{1, 2, 3, 4},
//		{1, 2, 4, 4},
//		{1, 3, 4, 5}
//	};
//
//	cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
//	cout << movie_ratings[0][0] << endl;
//	cout << movie_ratings[0][1] << endl;
//	cout << movie_ratings[0][2] << endl;
//	cout << movie_ratings[0][3] << endl;
//
//	cout << "\nHere are the movie rating for reviewer #2 using vector syntax: " << endl;
//	cout << movie_ratings.at(0).at(0) << endl;
//	cout << movie_ratings.at(0).at(1) << endl;
//	cout << movie_ratings.at(0).at(2) << endl;
//	cout << movie_ratings.at(0).at(3) << endl;
//
//	cout << endl;
//
//	
//	return 0;
//}