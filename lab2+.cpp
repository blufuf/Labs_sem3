//Криптография представляет собой совокупность методов преобразования данных.
/*
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, j;
	string text;
	string alfrus = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя. АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	string alf1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ<>:-!?)*|abcdefghijklmnopqrstuvwxyz/_(}{&@";
	string alf2 = "ZYXWVUTSRQPONMLKJIHGFEDCBA):><-!?|*zyxwvutsrqponmlkjihgfedcba({_/}@&";

	cout << "Введите текст, который хотите зашифровать:" << endl;
	getline(cin, text);
	cout << endl;

    //Шифрование

	for (i = 0; i < text.length(); i++) {
		for (j = 0; j < alfrus.length(); j++) {
			if ((i % 2 == 0) && (text[i] == alfrus[j])) {
			text[i] = alf1[j];
		    }
		}
	}

	for (i = 1; i < text.length(); i += 2) {
		for (j = 0; j < alfrus.length(); j++) {
			if (text[i] == alfrus[j]) {
				text[i] = alf2[j];
			}
		}
	}

	cout << "Зашифрованный текст:" << endl;
	cout << text << endl << endl;

	//Расшифрование

	for (i = 0; i < text.length(); i++) {
		for (j = 0; j < alf1.length(); j++) {
			if ((i % 2 == 0) && (text[i] == alf1[j])) {
				text[i] = alfrus[j];
			}
		}
	}

	for (i = 1; i < text.length(); i += 2) {
		for (j = 0; j < alf2.length(); j++) {
			if (text[i] == alf2[j]) {
				text[i] = alfrus[j];
			}
		}
	}

	cout << "Расшифрованный текст:" << endl;
	cout << text << endl << endl;

	return 0;
}
*/