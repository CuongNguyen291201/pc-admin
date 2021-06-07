#include<stdio.h>
int main(){
int a=0, b;
/* 00 in ra dung
   01 in ra nang
   10 in ra lap dat
   11 in ra di chuyen */
scanf("%d", &a);
a/= 100;
b= a%100;
if(b==0)
   {
   printf("dung");
   }else // b!=0
          {
   	       if(b==1){
			  printf("nang");
			  }else // b!=1
			       { if(b==10)
			         { printf("lap dat");}
			             else // b!=10
			          { printf("di chuyen"); 
					                        }
			  }
			  }
	  return 0;
}

