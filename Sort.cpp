���������� ���������
#include "iostream"
#include "iomanip"
#include "ctime"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
		arr[i] = rand()%10;
	cout << "�������� ������: " << endl << endl;
	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << arr[i];
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++) 
		{
			if (arr[i] > arr[j]) 
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = -(arr[j] - arr[i]);
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	cout << endl;
	cout << "\n��������������� ������: " << endl << endl;
	for (int i = 0; i < SIZE; i++)
		cout << setw(3) << arr[i];
	system("pause>NUL");
	return 0;
}

//���������� ���������
//
//#include "iostream"
//#include "iomanip"
//#include "ctime"
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	const int SIZE = 10;
//	int arr[SIZE] = {}, k, temp;
//	for (int i = 0; i < SIZE; i++)
//		arr[i] = rand()%10;
//	cout << "�������� ������: " << endl << endl;
//	for (int i = 0; i < SIZE; i++)
//		cout << setw(3) << arr[i];
//	for (int i = 1; i < SIZE; i++) 
//	{
//		for (k = i; k > 0 && arr[k - 1] > arr[k]; k--) 
//		{
//			temp = arr[k - 1];
//			arr[k - 1] = arr[k];
//			arr[k] = temp;
//		}
//	}
//	cout << endl;
//	cout << "\n��������������� ������: " << endl << endl;
//	for (int i = 0; i < SIZE; i++)
//		cout << setw(3) << arr[i];
//	system("pause>NUL");
//	return 0;
//}