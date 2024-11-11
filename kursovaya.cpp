
#include <iostream>

using namespace std;

struct public_key{

	int e, m;
};
struct private_key{

	int d, m;
};

// ���������� ������ ��������
int fcd(int a, int b){

	if (b == 0)
		return a;
	else
		return fcd(b, a % b);
}

// ������� ���������� ��������� a*x + b*y = 1
void Diophant(int a, int b, int& x, int& y){

	int a11 = 1, a12 = 0, a21 = 0, a22 = 1;

	while (1){

		int r = a % b;

		if (r == 0) {
			x = a12;
			y = a22;

			return;
		}

		else {
			int q = a / b;
			int save12 = a12;
			int save22 = a22;

			a12 = a11 - save12 * q;
			a22 = a21 - save22 * q;
			a11 = save12;
			a21 = save22;
			a = b;
			b = r;
		}
	}
}

// ����� ����� y, ������ ��� (x*y)%m == 1
int FindNumber(int x, int m){

	int y, sux;
	Diophant(x, m, y, sux);
	while (y < 0)
		y += m;
	return y;
}

// ���������� (a � ������� b)%m
int Power(int a, int b, int m){

	a %= m;
	int res = a;
	for (int i = 1; i < b; i++)
		res = (res * a) % m;
	return res;
}

// fcd(e, p-1) = fcd(e, q-1) = 1
void GenKey(int p, int q, int e, public_key& pub, private_key& pri){

	if ((fcd(e, p - 1) != 1) || (fcd(e, q - 1) != 1)) {
		cout << "�������� ��������� ��� �������� �����\n";
		exit(1);
	}

	pub.m = p * q;
	pub.e = e;
	pri.m = p * q;

	// ������� ������ phi(m)
	int phi_m = (p - 1) * (q - 1);
	pri.d = FindNumber(e, phi_m);
}

// ��������� ������ ���� < key. m
int Encode(int source, public_key& key){

	return Power(source, key.e, key.m);
}

int Decode(int source, private_key& key){

	return Power(source, key.d, key.m);
}

int main(){

	setlocale(LC_CTYPE,"Russian");

	int p;
	int q;
	int e = 5;
	int enter;

	cout << "������� ���� P:" << endl;
	cin >> p;

	cout << "������� ���� Q, ������� � P:" << endl;
	cin >> q;

	cout << "������� ���������, ������� ����� ������������:" << endl;
	cin >> enter;

	public_key pub_key;
	private_key pri_key;

	GenKey(p, q, e, pub_key, pri_key);

	int source = enter % pub_key.m;
	int enc = Encode(source, pub_key);
	int dec = Decode(enc, pri_key);

	if (dec != source)

		cout << "������! ������������ ������ ��� ���������\n";

	else
	{
		cout << "�������� ���������: " << source << endl;
		cout << "��������������: " << enc << endl;
		cout << "��������������: " << dec << endl;
		cout << "��������� ����: " << pub_key.e << "," << pub_key.m << endl;
		cout << "��������� ����: " << pri_key.d << "," << pri_key.m << endl;
	}
}