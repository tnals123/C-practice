#include <iostream>
using namespace std;


class Account {
private:
	int money = 0;
	int residual = 0;
	
public:
	void yourmoney(int num) {
		money = num;
		
	}
	int withdraw(int num) {
		if (num > money) {
			cout << "Withdrawl amout exceeded account balance" << endl;
			return money;
		}
		else {
			money -= num;
		}
		
	}
	void getwithdraw() {
		cout << "your residual money is " << money << "won" << endl;
	}
};




int main() {
	Account asdf;
	asdf.yourmoney(5400);
	asdf.withdraw(500);
	asdf.getwithdraw();
	asdf.withdraw(600);
	asdf.getwithdraw();
	asdf.withdraw(5000);
	asdf.getwithdraw();




}