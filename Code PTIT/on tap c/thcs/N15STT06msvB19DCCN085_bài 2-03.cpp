/*
Nguyen Quoc Cuong
B19DCCN085
15 
06
*/

#include <stdio.h>

void nhap(int *n);

int main(void){
	int N;
	nhap(&N);
	printf("%d",N);
	return 0;
}
//
void nhap(int *n){
	printf("n = ");
	scanf("%d",n);
}

        /*
        Chuong trinh in ra ket qua l� gia tri n vua khai b�o
        Vi dung * th� gia tri duoc truyen tu h�m void v�o h�m ch�nh 
        */
        
