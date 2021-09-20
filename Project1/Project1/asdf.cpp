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

	cout << "배열의 원소 개수: ";
	cin >> a;
	cout << "패스: ";
	cin >> c;
	for (int i = 0; i < a; i++) {
		cout << i + 1 << "번째 원소 :";
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