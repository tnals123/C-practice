#include <iostream>
using namespace std;

int a, b;
int arr[1000];
int smallest = 0;
int k = 0;
int index;
int c;
void swap(int& a, int& b) {
	int asdf;
	asdf = a;
	a = b;
	b = asdf;
}

int main() {

	cout << "�迭�� ���� ����: ";
	cin >> a;
	cout << "�н�: ";
	cin >> c;
	for (int i = 0; i < a; i++) {
		cout << i + 1 << "��° ���� :";
		cin >> b;
		arr[i] = b;

	}
	for (int i = 0; i < c; i++) {
		index = i;
		for (int j = i + 1; j < a; j++) {
			if (arr[index] > arr[j]) {
				index = j;
			}
		}
		swap(arr[index], arr[i]);
	}
	for (int i = 0; i < a; i++) {
		cout << arr[i] << " ";
	}
}