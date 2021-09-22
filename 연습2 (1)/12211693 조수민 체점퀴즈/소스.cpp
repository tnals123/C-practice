#include <iostream>
#include <Windows.h>
#include <random>
using namespace std;

class Circle {
private:
	int nLeftRext, nTopRect, nRightRect, nBottonRect;
	float radius;
	
public:
	Circle(int num1, int num2, int num3, int num4, float r) {
		nLeftRext = num1;
		nTopRect = num2;
		nRightRect = num3;
		nBottonRect = num4;
		radius = r;
	}
	void setRadius(float r) {
		radius = r;
	}
	float getRadius() const {
		return radius;
	}
	void draw() {
		HDC hdc = GetWindowDC(GetForegroundWindow()); 
		Ellipse(hdc, nLeftRext, nTopRect, nRightRect, nBottonRect);

	}
	int move() {
		return nLeftRext - 100, nTopRect - 100, nRightRect - 100, nBottonRect - 100;
	}

};

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int>dis(200, 300);
	Circle circleArray[3] = { Circle(int(dis(gen)),int(dis(gen)),200,int(dis(gen)),3),Circle(int(dis(gen)),int(dis(gen)),200,int(dis(gen)),3), Circle(int(dis(gen)),int(dis(gen)),200,int(dis(gen)),3) };
	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		p->draw();
		p++;
	}
	for (int i = 0; i < 3; i++) {
		p->move();
		p++;
	}
	
}