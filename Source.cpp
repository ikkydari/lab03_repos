// Lab_03_1.cpp
// < ����������� ������ >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 16
#include <iostream>
#include <cmath>
const double M_E = 2.71828;
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "Enter please, x = "; cin >> x;
	A = 5 * pow(M_E, 3 * x); //��������� ����� �������
	// ����� 1: ������������ � ��������� ����
	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7; //���� � < -1 �� ������
	if (-1 <= x && x < 3)
		B = 2 * log10(1 - x / 4);
	if (x >= 3)
		B = cos(abs(x)) + 3;
	y = A - B; //��������� ������� ������
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < -1)
		B = sqrt(2) * pow(x, 3) - 7;
	else
		if (-1 <= x && x < 3)
			B = 2 * log10(1 - x / 4);
		else
			B = cos(abs(x)) + 3;
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	system("pause");
	return 0;
}
