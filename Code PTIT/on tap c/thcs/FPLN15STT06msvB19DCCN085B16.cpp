/*
Nguyen Quoc Cuong
B19DCCN085
15
6
D19CQCN01-B
*/
 
#include <stdio.h>
 
int main()
{
    for(int i = 1; i <= 10;i++){
        printf("\n--------BANG NHAN %d--------\n", i);
        for(int j = 0; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
}

