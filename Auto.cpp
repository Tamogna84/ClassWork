
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;
struct Body
{
    string color;
    short wheel;
};
struct Engine
{
    short volume;
    short power;
};
struct Automobil
{
    string name;
    short lenght;
    short klirens;
    string gear;
    Engine engine;
    Body body;
};
struct Node
{
    Automobil subscriber;
    Node* next;
};
//Node* FirstItem(void);
//Node* AddItem(Node* ptr_end);
//void PrintList(Node* ptr_begin);
void SearchByName(const Automobil* car, int size, string key);
void InputEngine(Automobil& car);
void InputStruct(Automobil& car);
void OutputStruct(const Automobil& car);
int main(void)
{
    srand((unsigned)time(NULL));
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    const int size = 1;
    string searching_name;
    bool searching_flag = 0; //0 - �� �������, 1 - �������
    Automobil car[size];
    for (auto& a : car)
    {
        InputStruct(a);
        cin.ignore();
    }
    for (auto a : car)
        OutputStruct(a);
    cout << endl;
    cout << "\n������� ����� ���� ��� ������: ";
    getline(cin, searching_name);
    SearchByName(car, size, searching_name);
    system("pause>nul");
    return 0;
}

void OutputStruct(const Automobil& car)
{
    
    cout << "\n����� ����������: " << car.name << endl;
    cout << "\n�����: " << car.lenght << " �� " << endl;
    cout << "\n�������: " << car.klirens << " �� " << endl;
    cout << "\n������� �������: " << car.gear << endl;
    cout << "\n�������������� ���������: " << endl << "\n�����: " << car.engine.volume << " ���. ��" << endl << "\n��������: " << car.engine.power << " ��" << endl;
    cout << "\n�����: " << endl << "\n����: " << car.body.color << endl << "\n������� �����: " << "R"<< car.body.wheel << endl;
}

void InputEngine(Automobil& car)
{
    int i;
    cout << "������� �������������� ���������: " << endl;
    cout << "\n����� ��������� (���. ��): ";
    cin >> i;
    car.engine.volume = i;
    cout << "\n�������� ��������� (��): ";
    cin >> i;
    car.engine.power = i;
}
void InputStruct(Automobil& car)
{
    system("cls");
    cout << "\t\t���� ������ �����"<< endl << endl;
    cout << "\t\t������� ENTER ��� ����� " << endl;
    cin.ignore();
    cout << "\n������� ����� ����������: ";
    getline(cin, car.name);
    cout << "\n������� ����� (��): ";
    cin >> car.lenght;
    cout << "\n������� ������� (��): ";
    cin >> car.klirens;
    cout << "\n������� ��� ������� �������: ";
    cin.ignore();
    getline(cin, car.gear);
    cout << "\n������� ���� ������: ";    
    getline(cin, car.body.color);
    cout << "\n������� ������� �����: ";
    cin >> car.body.wheel ;
    cout << endl;
    InputEngine(car);
    system("cls");
}
void SearchByName(const Automobil *car, int size, string key)
{
    system("cls");
    for (int i = 0; i < size; i++)
            if (key == car[i].name)
            {
                cout << "���������� ������: " << endl;
                OutputStruct(car[i]);
                return;
            }
    cout << "������ ���������� ��� � ����!!" << endl;
    cout << endl;
    system("pause>nul");
}

    /*Node* pBegin, * pEnd;
    pBegin = pEnd = FirstItem();
    for (int i = 0; i < 1; i++)
        pEnd = AddItem(pEnd);
    system("cls");
    cout << "\n������ �����������: " << endl;
    PrintList(pBegin);
    int size = 3;*/

//Node* FirstItem(void)
//{
//    Node* ptr_value = new Node;
//    InputStruct(ptr_value->subscriber);
//    ptr_value->next = nullptr;
//    return ptr_value;
//}
//Node* AddItem(Node* ptr_end)
//{
//    Node* ptr_value = new Node;
//    InputStruct(ptr_value->subscriber);
//    ptr_value->next = nullptr;
//    ptr_end->next = ptr_value;
//    return ptr_value;
//}
//void PrintList(Node* ptr_begin)
//{
//    Node* ptr_value;
//    for (ptr_value = ptr_begin; ptr_value != nullptr; ptr_value = ptr_value->next)
//    {
//        OutputStruct(ptr_value->subscriber);
//        cout << endl;
//    }
//    return;
//}
