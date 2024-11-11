
//При построении системы безопасности применяются политики защиты, основанные на требованиях, определяемых направлениями деятельности компании.
/*
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std; 

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text;
	string alf1 = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЁКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ., ";
	string alf2 = "RSTUVWXYZABCDEFGHIJKLMNOP><?#!/+@rstuvwxyzabcdefghijklmnop:$_^%}&~*-|";
	int i, j;

	cout << "Введите текст, который хотите зашифровать" << endl;

	getline(cin, text);
	cout << endl;

	//Шифрование
	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < alf1.length(); j++) {
			if (text[i] == alf1[j]) {
				text[i] = alf2[j];
			}
		}
	}

	cout << "Результат шифрования:" << endl;
	cout << text << endl << endl;

	//Расшифрование
	for (i = 0; i < text.length(); i++) {
		for (j = 0; j < alf2.length(); j++) {
			if (text[i] == alf2[j]) {
				text[i] = alf1[j];
			}
		}
	}

	cout << "Результат расшифровки:" << endl;
	cout << text << endl << endl;

	return 0;
}
*/


