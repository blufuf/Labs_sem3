#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string text;
  
    cout << "Введите сообщение,которое будет закодированно: " << endl;

    getline(cin, text);
    string alfrus = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя. АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ!?:";
    string alf1 =   "ABCDEFGHIJKLMNOPQRSTUVWXYZ<>:-!?)*|abcdefghijklmnopqrstuvwxyz/_(}{&@^+=";
    string alf2 =   "ZYXWVUTSRQPONMLKJIHGFEDCBA):><-!?|*zyxwvutsrqponmlkjihgfedcba({_/}@&=^+";
    string alf3 =   "<-!?|*zyxwvutsrqponmlkjihgfedcba({_/}@&ZYXWVUTSRQPONMLKJIHGFEDCBA):>+=^";

    //Шифрование

    for (int i = 0; i < text.length(); i+=3) {
        for (int j = 0; j < alfrus.length(); j++) {
            if (text[i] == alfrus[j]) {
                text[i] = alf1[j];
            }

        }  
    }
    for (int i = 1; i < text.length(); i += 3) {
        for (int j = 0; j < alfrus.length(); j++) {
            if (text[i] == alfrus[j]) {
                text[i] = alf2[j];
            }
        }
    }
    for (int i = 2; i < text.length(); i += 3) {
        for (int j = 0; j < alfrus.length(); j++) {
            if (text[i] == alfrus[j]) {
                text[i] = alf3[j];
            }
        }
    }
    cout << "Зашифрованный текст: " <<endl;
    cout << text << endl << endl;

    //Расшифровка

    for (int i = 0; i < text.length(); i += 3) {
        for (int j = 0; j < alf1.length(); j++) {
            if (text[i] == alf1[j]) {
                text[i] = alfrus[j];
            }

        }
    }
    for (int i = 1; i < text.length(); i += 3) {
        for (int j = 0; j < alf2.length(); j++) {
            if (text[i] == alf2[j]) {
                text[i] = alfrus[j];
            }
        }
    }
    for (int i = 2; i < text.length(); i += 3) {
        for (int j = 0; j < alf3.length(); j++) {
            if (text[i] == alf3[j]) {
                text[i] = alfrus[j];
            }
        }
    }

    cout << "Расшифрованный текст: " << endl;
    cout << text << endl; 
   
    return 0;
}
