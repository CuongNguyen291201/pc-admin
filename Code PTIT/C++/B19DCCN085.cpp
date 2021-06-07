#include <iostream>
using namespace std;
#include <iomanip>

// sinh ban dau
void dayDau (int *a, int n) {
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
}

// in ket qua
void inKq (int *a, int n, int &dem) {
	for(int i = 0; i < n; i++){
		cout<<a[i];
	}
	dem++;
	cout<<endl;
}

// sinh ke tiep
void dayKeTiep (int *a, int n, int &stop){
	int i = n - 1;
	while(i > -1 && a[i]){
		a[i] = 0;
		i--;
	}
	if(i == -1){
		stop = 1;
	}
	else {
		a[i] = 1;
	}
}

// xu ly
void xuLy (int *a, int n, int &stop, int &dem) {
	while(!stop) {
		inKq(a, n, dem);
		dayKeTiep(a, n, stop);
	}
}

int main() {
	int *a, n, stop = 0, dem = 1;
	cout<<"So luong phan tu cua day: ";
	cin>>n;
	a = new int[n];
	dayDau(a, n);
	xuLy(a, n, stop, dem);
	delete a;
	return 0;
	system("pause");
}
