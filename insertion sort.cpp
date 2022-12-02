#include<iostream>
using namespace std;



int main() {
	int a[] = { 5,6,7,1,3,2 };
	int n = sizeof(a) / sizeof(int);

	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	

}
