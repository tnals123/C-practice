#include<iostream>
using namespace std;

class PrintMachine {
private:
    string model;
    string manufacture;
    int pcount;
    int acount;
public:
    PrintMachine(string _model, string _manuf, int a) {
        model = _model;
        manufacture = _manuf;
        acount = a;
    }
    string getModel() {
        return model;
    }
   
    string getManufacture() {
        return manufacture;
    }
    int getAcount() {
        return acount;
    }
    bool print(int pages) {
        pcount = pages;
        if (acount >= pcount) {
            acount -= pcount;
            return true;
        }
        else {
            cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
            return false;
            }
        }

    };



class PrintInk : public PrintMachine {
private:    
    int alink;
public:
    PrintInk(string model, string manuf, int acount, int _alink) : PrintMachine(model, manuf, acount) {
        alink = _alink;
    }
    void printMyInk(int pages) {
        if (print(pages)) {
            if (alink >= pages) {
                alink -= pages;
                cout << "프린트하였습니다." << endl;
            }
        }
    }
    
    void show() {
        cout << getModel() << "\t," << getManufacture() << "\t,남은 종이 " << getAcount() << "장\t,남은 잉크 " << alink << endl;
    }
};




class PrintLaser : public PrintMachine {
private:
    int toner;
public:
    PrintLaser(string model, string manuf, int _acount, int _toner) : PrintMachine(model, manuf, _acount) {
        toner = _toner;
    }
    void printLaser(int pages) {
        if (print(pages)) {
            if (toner >= pages) {
                toner -= pages;
                cout << "프린트하였습니다." << endl;
            }
        }
    }
    void show() {
        cout << getModel() << " ," << getManufacture() << "\t,남은 종이 " << getAcount() << "장\t,남은토너 " << toner << endl;
    }
};

int main() {
    int choice = 1;
    int howmany = 2;
    int a;
    
    PrintInk* myint = new PrintInk("LG 전자", "Hp", 5, 10);
    PrintLaser* mylaser = new PrintLaser("삼성전자", "HP", 3, 20);
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다\n";
    cout << "잉크젯 : ";
    myint->show();
    cout << "레이저 : ";
    mylaser->show();
    cout << endl;

    while (true) {
        cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> choice;
        cin >> howmany;
        if (choice == 1)
        {
            myint->printMyInk(howmany);
            myint->show();
            mylaser->show();
        }
        if (choice == 2)
        {
            mylaser->printLaser(howmany);
            myint->show();
            mylaser->show();
        }
        cout << "계속 프린트 하시겠습니까(y=1/n=2)>>";
        cin >> a;
        if (a == '2') break;
    }
}
