#include<conio.h>
#include<stdio.h>
#include<math.h>
#define MAX 100
void nhapmatran(int a[][MAX], int &n);
void xuatmatran(int a[][MAX], int n);
double Tongtamgiacduoi(int a[][MAX], int n);
int main()
{
	int a[MAX][MAX],n;
	nhapmatran(a,n);
	printf("\nNoi dung cua ma tran\n");
	xuatmatran(a,n);
	double kq=Tongtamgiacduoi(a,n);
	printf("\nTong cac phan tam giac duoi la  %8.2f",kq);
	getch();
}
void nhapmatran(int a[][MAX], int &n)
{
	do
	{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}while(n<=0 || n>100);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nSo phan tu a[%d][%d] la: ",i,j);
			scanf("%d",&a[i][j]);
		}
}
void xuatmatran(int a[][MAX], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
double Tongtamgiacduoi(int a[][MAX], int n)
{
	double sum=0;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1;j++)
			if(i>j)
				sum+=a[i][j];
	return sum;
}

