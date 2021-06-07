#include<stdio.h>
#include<math.h>
long SUM(int n)
{
    if (n==0) return 0;
    return pow(n,n) + SUM(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%ld", SUM(n));
    return 0;
}
