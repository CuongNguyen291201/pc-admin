/*
Nguyen Quoc Cuong 
B19DCCN085
15
6
D19CQC01-B
*/

#include <stdio.h>
#include <conio.h>

int main() {
      int n, a, b, c,d;
      printf("Nhap so nguyen duong n(co 4 chu so): ");
      scanf("%d", &n);
      a = n/1000;
      b = ((n%1000/100));
      c = ((n%100/10));
      d = ((n%10));
      printf("- Chu so hang nghin: %d\n", a);
      printf("- Chu so hang tram : %d\n", b);
      printf("- Chu so hang chuc: %d\n", c);
      printf("- Chu so hang don vi : %d",d);
      getch();

}
