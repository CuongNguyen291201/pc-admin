/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/

#include <stdio.h>

int main(){
 int n;
 int a[10];
 int i;
 scanf("%d",&n);
 int sochan = 0, sole = 0;
 while(n>0)
 {
  a[i]=n%10;
  n=n/10;
  i++;
 }
 for( int j=0; j<i; j++)
 {
  if( a[j]%2==0)
  {
   sochan++;
  }
  else sole++;
 }
 printf("%d\n",sole);
 printf("%d",sochan);
 return 0;
}


