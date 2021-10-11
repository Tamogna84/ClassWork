
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
    bool searching_flag = 0; //0 - не найдено, 1 - найдено
    Automobil car[size];
    for (auto& a : car)
    {
        InputStruct(a);
        cin.ignore();
    }
    for (auto a : car)
        OutputStruct(a);
    cout << endl;
    cout << "\nВведите марку авто для поиска: ";
    getline(cin, searching_name);
    SearchByName(car, size, searching_name);
    system("pause>nul");
    return 0;
}

void OutputStruct(const Automobil& car)
{
    
    cout << "\nМарка автомобиля: " << car.name << endl;
    cout << "\nДлина: " << car.lenght << " мм " << endl;
    cout << "\nКлиренс: " << car.klirens << " мм " << endl;
    cout << "\nКоробка передач: " << car.gear << endl;
    cout << "\nХарактеристика двигателя: " << endl << "\nОбъем: " << car.engine.volume << " куб. см" << endl << "\nМощность: " << car.engine.power << " лс" << endl;
    cout << "\nКузов: " << endl << "\nЦвет: " << car.body.color << endl << "\nДиаметр колес: " << "R"<< car.body.wheel << endl;
}

void InputEngine(Automobil& car)
{
    int i;
    cout << "Введите характеристики двигателя: " << endl;
    cout << "\nОбъем двигателя (куб. см): ";
    cin >> i;
    car.engine.volume = i;
    cout << "\nМощность двигателя (лс): ";
    cin >> i;
    car.engine.power = i;
}
void InputStruct(Automobil& car)
{
    system("cls");
    cout << "\t\tБаза данных ГИБДД"<< endl << endl;
    cout << "\t\tНажмите ENTER для входа " << endl;
    cin.ignore();
    cout << "\nВведите марку автомобиля: ";
    getline(cin, car.name);
    cout << "\nВведите длину (мм): ";
    cin >> car.lenght;
    cout << "\nВведите клиренс (мм): ";
    cin >> car.klirens;
    cout << "\nВведите тип коробки передач: ";
    cin.ignore();
    getline(cin, car.gear);
    cout << "\nВведите цвет кузова: ";    
    getline(cin, car.body.color);
    cout << "\nВведите диаметр колес: ";
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
                cout << "Результаты поиска: " << endl;
                OutputStruct(car[i]);
                return;
            }
    cout << "Такого автомобиля нет в базе!!" << endl;
    cout << endl;
    system("pause>nul");
}

    /*Node* pBegin, * pEnd;
    pBegin = pEnd = FirstItem();
    for (int i = 0; i < 1; i++)
        pEnd = AddItem(pEnd);
    system("cls");
    cout << "\nСписок автомобилей: " << endl;
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
