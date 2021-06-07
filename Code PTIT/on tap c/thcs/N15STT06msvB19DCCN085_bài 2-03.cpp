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
        Chuong trinh in ra ket qua là gia tri n vua khai báo
        Vi dung * thì gia tri duoc truyen tu hàm void vào hàm chính 
        */
        
