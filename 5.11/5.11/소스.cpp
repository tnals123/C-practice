#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	int wjdtn[100];
	cout << "���� ��� �Է��Ͻðڽ��ϱ�?: ";
	cin >> b;
	for (int i=0; i < b; i++) {
		cout << "���� �Է� : ";
		cin >> a;
		wjdtn[i] = a;
	}
	sort(wjdtn, wjdtn + b);
	for (int i = 0; i < b; i++) {
		cout << wjdtn[i] << " ";
		
	}
	cout << endl;
	cout << "���� ū ���� " << wjdtn[b-1] << "�̸�,���� ���� ���� " << wjdtn[0];
}