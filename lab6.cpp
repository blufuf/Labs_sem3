/*
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string text;
    char matrix[17][5];
    int key[5], place[5];
    int quantity;
    int n = 0, m = 0;

    cout << "Введите сообщение, которое хотите зашифровать: " << endl;
    getline(cin, text);
    cout << endl;

    cout << "Введите количество пустых ячеек: ";
    cin >> quantity;
    cout << endl;

    cout << "Введите места пустых ячеек: ";

    for (int i = 0; i < quantity; i++) {
        cin >> place[i];
    }
    cout << endl;

    cout << "Введите ключ: ";

    for (int i = 0; i < 5; i++) {
        cin >> key[i];
    }
    cout << endl;
    
    cout << "Зашифрованное сообщение: " << endl;

    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i * 5) + j == place[m]) {
                matrix[i][j] = 'A';
                m++;
            }
            else {
                matrix[i][j] = text[n];
                n++;
            }
        }
    }
    n = 0;
    for (int j = 0; j < 5; j++) {
        for (int y = 0; y < 5; y++) {
            if (key[y] - 1 == j) {
                for (int i = 0; i < 17; i++) {
                    if ((i * 5 + y) < (85 + quantity) && matrix[i][y] != 'A') {
                        text[n] = matrix[i][y];
                        n++;
                    }
                }
            }
        }
    }
    n = 0;
    m = 0;

    cout << text << endl << endl;

    cout << "Расшифрованное сообщение: " << endl;

    for (int j = 0; j < 5; j++) {
        for (int y = 0; y < 5; z++) {
            if (key[y] - 1 == j) {
                for (int i = 0; i < 17; i++) {
                    if (i * 5 + y == place[m]) {
                        matrix[i][y] = 'A';
                        m++;
                    }
                    else if ((i * 5 + y) < (85 + quantity) && matrix[i][y] != 'A') {
                        matrix[i][y] = text[n];
                        n++;
                    }
                }
            }
        }
    }
    n = 0;
    for (int i = 0; i < 17; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i * 5 + j) < (85 + quantity) && matrix[i][j] != 'A') {
                text[n] = matrix[i][j];
                n++;
            }
        }
    }

    cout << text << endl;
    return 0;
}
*/
//Говорят, что несчастие хорошая школа, может быть. Но счастье есть лучший университет.
/*
1 2 3 4 5 
Г о в о р
я т ,   ч
т о   н е
с ч а с т 
и е   х о 
р о ш а я
  ш к о л 
а ,   м о
ж е т   б
ы т ь . 
Н о   с ч 
а с т ь е
  е с т ь
  л у ч ш
и й   у н
и в е р с 
и т е т .
*/

