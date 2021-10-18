#include <iostream>
#include <list>
#include <vector>
#include <iterator>

using namespace std;


struct listovich
{
    list <int> list1;
    list <int> list2;
};

int main() {

    //ДЛЯ LIST

    // ПРИМЕР 1 добавляем 11 элементов в список и выводим через итераторы начала и конца


    //list <int> mylist;
    //list <int>::iterator it;
    //cout << "FOR LIST" << endl;
    //for (int i = 0; i < 2; i++) 
    //{
    //    for (int j = 1; j < 6; j++) 
    //    {
    //        mylist.push_back(i); 
    //    }
    //}
    //mylist.insert(mylist.begin(), 6);
    //for (it = mylist.begin(); it != mylist.end(); it++) 
    //{
    //    cout << (*it) << " ";
    //}
    //cout << endl;


    // ПРИМЕР 2 добавляем 11 элементов в список, удаляем все дубликаты и выводим через реверсивные итераторы начала и конца 

    //list <int> mylist;
    //list <int>::iterator it;
    //cout << "FOR LIST" << endl;
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 1; j < 6; j++)
    //    {
    //        mylist.push_back(i);
    //    }
    //}
    //mylist.insert(mylist.begin(), 6);
    //mylist.unique();  
    //list <int>::reverse_iterator it2;
    //for (it2 = mylist.rbegin(); it2 != mylist.rend(); it2++)
    //{
    //    cout << (*it2) << " ";
    //}
    //cout << endl;


    // ПРИМЕР 3 добавляем 11 элементов в список, удаляем все дубликаты и находим элемент с "индексом" 2 через функцию advance

    //list <int> mylist;
    //list <int>::iterator it;
    //cout << "FOR LIST" << endl;
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 1; j < 6; j++)
    //    {
    //        mylist.push_back(i);
    //    }
    //}
    //mylist.insert(mylist.begin(), 6);
    //mylist.unique();
    //it = mylist.begin();
    //advance(it, +2);
    //cout << *(it);
    //cout << endl;


    // ПРИМЕР 4 объявляем структуру и указатель на неё, выводим первый элемент первого списка через итератор на элемент структуры 

    //listovich list_of_lists; 
    //list_of_lists.list1 = { 4, 5, 6 };
    //list_of_lists.list2 = { 1, 2, 3 };
    //list <int>::iterator it;
    //struct listovich *ptr;
    //ptr = &list_of_lists;

    //it = ptr->list1.begin();
    //cout << *(it);
    //cout << endl;


    //ДЛЯ VECTOR

    //ПРИМЕР 1 добавляем 6 элементов в вектор и выводим часть вектора через итераторы начала и конца со сравнением и вычитанием

    //cout << "FOR VECTOR" << endl;
    //vector <int> myvector;
    //vector <int>::iterator it_vec;
    //for (int i = 1; i < 6; i++)
    //{
    //    myvector.push_back(i);
    //}
    //for (it_vec = myvector.begin(); it_vec < myvector.end()-2; it_vec++)
    //{
    //    cout << (*it_vec) << " ";
    //}
    //cout << endl;


    //ПРИМЕР 2 добавляем 6 элементов в вектор и выводим с помощью арифметики указателей 

    //cout << "FOR VECTOR" << endl;
    //vector <int> myvector;
    //vector <int>::iterator it_vec;
    //for (int i = 1; i < 6; i++)
    //{
    //    myvector.push_back(i);
    //}
    //for (int cnt=0;cnt<5;cnt++)
    //{
    //    it_vec = myvector.begin();
    //    cout << *(it_vec + cnt) << " ";
    //}



    return 0;
}