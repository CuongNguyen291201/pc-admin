/*
Nguyen Quoc Cuong
B19DCCN085
Nhom 15
STT 06
*/

#include <iostream>

using namespace std;

void Input(int &n, int arr[])
{
	cin >> n;
	for (int i = 1; i<=n; i++) cin >> arr[i];
}

void Output(int n, int arr[])
{
	for (int i = 1; i<=n; i++)
	{
		cout << arr[i];
		if (i < n) cout << " ";
	}
}

void Sort(int n, int arr[], int isAscending = 1)
{
	int * brr = new int[n + 1];
	for (int i = 1; i<=n; i++) brr[i] = arr[i];
	for (int i = n; i>=2; i--)
	for (int j = 1; j<=n-1; j++)
	{
		if (brr[j] > brr[j + 1])
		{
			int temp = brr[j];
			brr[j] = brr[j + 1];
			brr[j + 1] = temp;
		}
	}
	if (isAscending) for (int i = 1; i<=n; i++) arr[i] = brr[i];
	else for (int i = 1; i<=n; i++) arr[i] = brr[n + 1 - i];
}

int Findmax(int n, int arr[])
{
	int Max = arr[1];
	for (int i = 2; i<=n; i++) if (Max < arr[i]) Max = arr[i];
	return Max;
}

int Findmin(int n, int arr[])
{
	int Min = arr[1];
	for (int i = 1; i<=n; i++) if (Min > arr[i]) Min = arr[i];
	return Min;
}

int isExist(int n, int arr[], int x)
{
	for (int i = 1; i<=n; i++)
		if (x == arr[i]) return 1;
	return 0;
}

int Count(int n, int arr[], int x)
{
	int cnt = 0;
	for (int i = 1; i<=n; i++) if (x == arr[i]) cnt++;
	return cnt;
}



int main()
{
	int n, x;
	int arr[1000];
	Input(n, arr);
	cin >> x;
	
	Sort(n, arr, 1);
	Output(n, arr); cout << endl;
	
	cout << Findmax(n, arr) << endl;
	cout << Findmin(n, arr) << endl;
	
	cout << isExist(n, arr, x) << endl;
	cout << Count(n, arr, x) << endl;
	
	Output(n, arr); cout << endl;
	return 0;
}
