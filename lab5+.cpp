#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int const n = 7;
	int const m = 11;
	char setka[n][m];
	int k[11];
	string text;
	int a = 0;

	cout << "Введите сообщение, которое хотите зашифровать: " << endl;
	getline(cin, text);
	cout << endl;

	cout << "Введите ключ: ";
	for (int i = 0; i < 11; i++) {
		cin >> k[i];
	}

	cout << endl;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			setka[j][i] = text[a];
			a++;
		}
	}

	//Шифрование 
	cout << "Зашифрованное сообщение: " << endl;
	for (int b = 0; b < 11; b++) {
		int c = k[b] - 1;
		for (int j = 0; j < 7; j++) {

			cout << setka[j][c];
		}
		
	}

	cout << endl << endl;

	//Расшифровка
	cout << "Расшифрованное сообщение: " << endl;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			cout << setka[j][i];
		}
	}

	cout << endl << endl;


	return 0;
}
/*
1   2   3   4   5   6    7   8   9   10   11
А  у   д   и   т         с   и   с    т     е
м  ы        з   а  щ  и   т    ы           п
р   о  в    о  д   и    т   с   я            р
е   г   у    л  я    р   н   о          ч    е
р   е  з        н    е   б   о   л     ь    ш
и   е        п  р   о   м  е   ж    у     т
к   и         в  р   е   м  е   н     и     .
*/
