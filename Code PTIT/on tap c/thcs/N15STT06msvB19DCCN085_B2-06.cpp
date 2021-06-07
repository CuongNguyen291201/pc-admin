/*
Nguyen Quoc Cuong
B19DCCN85
15 
06
*/

#include <iostream>
#include <vector>

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

int * Findmax(int n, int arr[])
{
	int * res = new int[2];
	int Max = arr[1], indexmax = 1;;
	for (int i = 2; i<=n; i++) if (arr[i] > Max) 
		Max = arr[i], indexmax = i;
	res[0] = Max, res[1] = indexmax;
	return res;
}

int * Findmin(int n, int arr[])
{
	int * res = new int[2];
	int Min = arr[1], indexmin = 1;;
	for (int i = 2; i<=n; i++) if (arr[i] < Min) 
		Min = arr[i], indexmin = i;
	res[0] = Min, res[1] = indexmin;
	return res;
}

vector <int> Find(int n, int arr[], int x)
{
	vector <int> res(1, 0);
	for (int i = 1; i<=n; i++) if (arr[i] == x)
	{
		res[0] = 1;
		res.push_back(i);
		break;
	}
	return res;
}

vector <int> FindAll(int n, int arr[], int x)
{
	vector <int> res(1, 0);
	int cnt = 0;
	for (int i = 1; i<=n; i++) if (arr[i] == x)
	{
		res.push_back(i);
		cnt++;
	}
	res[0] = cnt;
	return res;
}

int main()
{
	int arr[1000], n, x;
	Input(n, arr);
	cin >> x;
	
	int * res;
	vector <int> Res;
	res = Findmax(n, arr);
	cout << res[0] << " " << res[1] << endl;
	res = Findmin(n, arr);
	cout << res[0] << " " << res[1] << endl;
	
	Res = Find(n, arr, x);
	for ( auto  : Res) cout << it << " ";
	cout << endl;
	Res = FindAll(n, arr, x);
	for ( auto  : Res) cout << it << " ";
	cout << endl;
	
	return 0;
}

