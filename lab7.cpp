
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
	char alph[73] = { 'А','Б','В','Г','Д','Е','Ё','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я','а','б','в','г','д','е','ё','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я',' ','-', '.', ',','!','?',':' };

	cout << "Введите текст, который хотите зашифровать: " << endl;
	getline(cin, text);
	cout << endl;

	cout << "Введите гамму: " << endl;
	cin.getline(gamma, 100);
	cout << endl;

	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < strlen(gamma); j++) {

			text[i] = text[i] ^ gamma[j];
		}
	}

	cout << "Зашифрованный текст: " << endl;
	cout << text << endl << endl;

	for (int i = 0; i < text.length(); i++) {
		for (int j = 0; j < strlen(gamma); j++) {

			text[i] = text[i] ^ gamma[j];
		}
	}

	cout << "Расшифрованный текст: " << endl;
	cout << text << endl << endl;

	return 0;
}


//Маскировка представляет собой метод защиты данных путем их криптографического закрытия.