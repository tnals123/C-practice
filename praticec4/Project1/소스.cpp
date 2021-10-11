#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	const int SIZE = 80;
	char buffer[SIZE];
	cout << "Enter a sentece: " << endl;
	cin.getline(buffer, SIZE);
	cout << buffer << endl;
	int number;
	cout << "Enter a decimal number: ";
	cin >> number;
	cout << number << hex << number << endl;
	cout << dec << number << oct << number << endl;
	cout << setbase(10) << number << number << endl;
	int widthValue = 4;
	char sentence[10];
	cin.width(5);
	while (cin >> sentence) {
		cout.width(widthValue++);
		cout << sentence << endl;
		cin.width(5);
	}
	int x = 10000;
	cout << showbase << setw(10) << x << endl;
	cout << left << setw(10) << x << endl;
	cout << internal << setw(10) << hex << x << endl << endl;
	cout << right;
	cout.fill('*');
	cout << setw(10) << dec << x << endl;
	cout << left << setw(10) << setfill('%') << x << endl;
	cout << internal << setw(10) << setfill('*') << hex << x << endl;
}