#include "stdafx.h" 
#include "iostream" 
#include "cstdlib" 

using namespace std;

void printarr(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}

void Sort(int* arr, int n) {
	for (int i = 1; i<n; i++) {
		for (int j = i; j>0 && arr[j - 1]>arr[j]; j--) {
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int arr[100];
	cout << "Введите размер массива" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = rand();
	}
	printarr(arr, n);
	cout << endl;
	Sort(arr, n);
	printarr(arr, n);
	cout << endl;
	system("pause");
	return 0;
}