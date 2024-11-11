/*
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {

  setlocale(LC_ALL, "Russian");
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  char text[100];
  char alph [73] = {'А','Б','В','Г','Д','Е','Ё','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я','а','б','в','г','д','е','ё','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я',' ','-', '.', ',','!','?',':'}; //81
  char key[87];
  int a;

  cout << "Введите ключ: ";
  for (int i = 0; i < 87; i++) {
    cin >> key[i];
    
  }

  cout << endl << "Введите текст, который хотите зашифровать: ";

  cin.ignore(1);
  cin.getline(text, 100);

  for (int i = 0; i < strlen(text); i++) {
    for (int j = 0; j < 73; j++) {

      if (key[i] == alph[j]) {
        a = j;

        break;
      }
    }

    for (int j = 0; j < 73; j++) 

      if (text[i] == alph[j]) {
        text[i] = alph[(j + a) % 73];

        break;
      }
  }

  cout << endl << "Зашифрованный текст:" << endl << endl;
  cout << text << endl << endl;

  //Расшифровка
  
  for (int i = 0; i < strlen(text); i++) {
    for (int j = 0; j < 73; j++) {

      if (key[i] == alph[j]) {
        a = j;

        break;
      }
    }

    for (int j = 0; j < 73; j++) {

      if (text[i] == alph[j]) {
          text[i] = alph[(j - a + 73) % 73];
       
          break;
      }
    }
  }

  cout << "Расшифрованный текст: " << endl << endl;
  cout << text << endl;

  return 0;
  
}
*/
// М ы В ы н У ж д е Н ы о т А а Л к И в А т ь С Я О Т т О Г о Ч т О В Н е Д р Е Н и Е с О в р е М Е Н Н ы Х М Е Т О д и к Н е О с Т а в Л я е Т Ш а н с М ы В ы н У ж д е Н ы о
// Бурное развитие криптографические системы получили в годы первой и второй мировых войн.