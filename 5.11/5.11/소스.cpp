#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	int wjdtn[100];
	cout << "정수 몇개를 입력하시겠습니까?: ";
	cin >> b;
	for (int i=0; i < b; i++) {
		cout << "정수 입력 : ";
		cin >> a;
		wjdtn[i] = a;
	}
	sort(wjdtn, wjdtn + b);
	for (int i = 0; i < b; i++) {
		cout << wjdtn[i] << " ";
		
	}
	cout << endl;
	cout << "제일 큰 수는 " << wjdtn[b-1] << "이며,제일 작은 수는 " << wjdtn[0];
}