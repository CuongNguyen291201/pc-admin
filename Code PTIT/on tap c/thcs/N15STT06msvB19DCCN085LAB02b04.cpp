#include <stdio.h>

int main Tinh(int n)
{
int i,j,s=0;
int q=1;
for(i=1; i<=n; i++)

{
for(j=1; j<=i; j++)
q=q*i;
s=s+q;

}
return s;
}
