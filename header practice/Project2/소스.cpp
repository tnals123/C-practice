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
            cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
                cout << "����Ʈ�Ͽ����ϴ�." << endl;
            }
        }
    }
    
    void show() {
        cout << getModel() << "\t," << getManufacture() << "\t,���� ���� " << getAcount() << "��\t,���� ��ũ " << alink << endl;
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
                cout << "����Ʈ�Ͽ����ϴ�." << endl;
            }
        }
    }
    void show() {
        cout << getModel() << " ," << getManufacture() << "\t,���� ���� " << getAcount() << "��\t,������� " << toner << endl;
    }
};

int main() {
    int choice = 1;
    int howmany = 2;
    int a;
    
    PrintInk* myint = new PrintInk("LG ����", "Hp", 5, 10);
    PrintLaser* mylaser = new PrintLaser("�Ｚ����", "HP", 3, 20);
    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";
    cout << "��ũ�� : ";
    myint->show();
    cout << "������ : ";
    mylaser->show();
    cout << endl;

    while (true) {
        cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y=1/n=2)>>";
        cin >> a;
        if (a == '2') break;
    }
}
