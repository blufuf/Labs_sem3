
//��� ���������� ������� ������������ ����������� �������� ������, ���������� �� �����������, ������������ ������������� ������������ ��������.
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
	string alf1 = "�������������������������������������Ũ��Ȩ����������������������., ";
	string alf2 = "RSTUVWXYZABCDEFGHIJKLMNOP><?#!/+@rstuvwxyzabcdefghijklmnop:$_^%}&~*-|";
	int i, j;

	cout << "������� �����, ������� ������ �����������" << endl;

	getline(cin, text);
	cout << endl;

	//����������
	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < alf1.length(); j++) {
			if (text[i] == alf1[j]) {
				text[i] = alf2[j];
			}
		}
	}

	cout << "��������� ����������:" << endl;
	cout << text << endl << endl;

	//�������������
	for (i = 0; i < text.length(); i++) {
		for (j = 0; j < alf2.length(); j++) {
			if (text[i] == alf2[j]) {
				text[i] = alf1[j];
			}
		}
	}

	cout << "��������� �����������:" << endl;
	cout << text << endl << endl;

	return 0;
}
*/


