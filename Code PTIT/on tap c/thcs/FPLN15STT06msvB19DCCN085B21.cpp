/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    char x[200];
    printf("\n Nhap vao 1 chuoi: ");
    fflush(stdin);
    gets(x);
    int n=strlen(x);
    for(int i=0;i<n;i++)
    {
        if(x[i]>=97&&x[i]<=122)
        x[i]=x[i]-32;
        else if(x[i]>=65&&x[i]<=90)
        x[i]=x[i]+32;
    }
    printf("\n Chuoi sau khi thay doi la %s",x);
    getch();
    return 0;
}
