#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
int DemHoanThien(int[], int);

int main()
{
	int b[10000];
	int n;
	Nhap(b, n);
	cout << "So luong phan tu thoa dieu kien trong mang: ";
	cout << DemHoanThien(b, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu A[" << i << "]: ";
		cin >> a[i];
	}
}

int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			dem++;
	return dem;
}
