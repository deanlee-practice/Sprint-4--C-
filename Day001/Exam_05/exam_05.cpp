#include<iostream>
using namespace std;

void func() {  // void : return���� ����
	cout << "ù��° �Լ��Դϴ�.\n";
}

float func2() {
	return 3.14f;  // �Ǽ�(float, double-�⺻��)
}


int main() {
	// ���� : ������ ����� �ڷ����� �������ִ� ����
	// python - ����Ÿ����
	// c, c++, java - ����Ÿ���� (������ �ڷ����� ���ǵǾ��־�� ��)
	int first, second, res;

	// �Է¹�
	cout << "�� ���� ������ �Է� = ";
	cin >> first >> second;

	// ó����
	res = first + second;

	// ��¹�
	cout << first << " + " << second << " = " << res;
	
	return 0;  // int�̹Ƿ� 0 ���. �ý����� �����Ѵ�.
}