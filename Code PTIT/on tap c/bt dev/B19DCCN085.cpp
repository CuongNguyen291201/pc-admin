#include<stdio.h>
int main()
{
	long long a = 0 ;
	int b ;
	scanf("%lld", &a);
	a /= 100 ;
	b = a % 100 ;
	if(b==0){
		printf("dung");
		}
		else{
			if(b==1){
				printf("nang");
				}
				else{
					if(b==10){
						printf("lap dat");
						}
						else{
							if(b==11){
								printf("di chuyen");
								}
						}
				}
		}
			return 0;
}
			
		                                         /* NGUYEN QUOC CUONG 
		                                            B19DCCN085
		                                            Nhóm:  15
		                                            STT:  6     */
