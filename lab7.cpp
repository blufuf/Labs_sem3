
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text;
	char gamma[100];
	char alph[73] = { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�',' ','-', '.', ',','!','?',':' };

	cout << "������� �����, ������� ������ �����������: " << endl;
	getline(cin, text);
	cout << endl;

	cout << "������� �����: " << endl;
	cin.getline(gamma, 100);
	cout << endl;

	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < strlen(gamma); j++) {

			text[i] = text[i] ^ gamma[j];
		}
	}

	cout << "������������� �����: " << endl;
	cout << text << endl << endl;

	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < strlen(gamma); j++) {

			text[i] = text[i] ^ gamma[j];
		}
	}

	cout << "�������������� �����: " << endl;
	cout << text << endl << endl;

	return 0;
}


//���������� ������������ ����� ����� ������ ������ ����� �� ������������������ ��������.