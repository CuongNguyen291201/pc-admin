#include <stdio.h>

int main(void)
{
	char ten[100]={NULL};
	gets(ten);
	
	for(int i=0;i<strlen(ten);i++)
		printf("%3c",ten[i]);
getch();
return 0;
}

