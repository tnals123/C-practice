#include <iostream>
#include <string>
using namespace std;
class UI {
    static int n;
public:
    static void start(); 
    static int menu(); 
    static int insert(); 
    static int del();
};
int UI::n = 0;
void UI::start() {
    cout << "그래픽 에디터입니다." << endl;
}
int UI::menu() { 
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    cin >> n;
    return n;
}
int UI::insert() {
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n;
    return n;
}
int UI::del() {
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n;
    return n;
}
class GraphicEditor { 
    int index;
public:
    GraphicEditor(int i) { index = i; }
    virtual void show() = 0; 
    int getIndex() { return index; }
    void subIndex() { --index; }
};
class Line : public GraphicEditor {
public:
    Line(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Line" << endl; }
};
class Circle : public GraphicEditor {
public:
    Circle(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Circle" << endl; }
};
class Rect : public GraphicEditor {
public:
    Rect(int index) : GraphicEditor(index) {}
    void show() { cout << getIndex() << ": Rectangle" << endl; }
};
int main() {
    GraphicEditor* g[100];
    UI::start();
    int index = 0;
    for (;;) {
        int m = UI::menu();
        if (m == 1) { 
            int n = UI::insert();
            if (n == 1) { 
                Line* l = new Line(index); 
                g[index] = l;
                ++index;
            }
            else if (n == 2) {
                Circle* c = new Circle(index); 
                g[index] = c;
                ++index;
            }
            else if (n == 3) { 
                Rect* r = new Rect(index);
                g[index] = r;
                ++index;
            }
            else cout << "입력 에러" << endl;
        }
        else if (m == 2) {
            int n = UI::del();
            for (int i = n; i < index - 1; ++i) {
                g[i] = g[i + 1];
                g[i]->subIndex(); 
            }
            --index; 
        }
        else if (m == 3) { 
            for (int i = 0; i < index; ++i)
                g[i]->show();
        }
        else if (m == 4) break;
        else cout << "입력 에러 " << endl;
    }
}