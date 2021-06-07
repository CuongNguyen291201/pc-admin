#include <stdio.h>

//	int thuannghich(int n){
//		int temp = n;
//		int b=0;
//		while(n!=0){
//			b = b*10 + n%10;
//			n/=10;
//		}
//		if(b==temp)
//		return 1;
//		
//		return 0;
//	}
//	
//	int kiemtra(int n){
//		int i;
//		int check=0;
//		for(i=0;i<n;i++){
//			if(n%10==6){
//			n/=10;
//			check = 1;
//			break;
//			}
//		}
//		
//		int s=0;
//		while(n!=0){
//		s+=n%10;
//		n/=10;
//		}
//		if(s%10==8)
//		return 1;
//		
//		return 0;
//	
//	}
	
//	int thuannghich(int n){
//		int temp = n;
//		int b=0;
//		int s=0;
//		int co6=0;
//		while(n!=0){
//			b = b*10 + n%10;
//			s+=n%10;
//			co6 = n%10;
//			n/=10;
//		}
//		if(temp == b && co6==6 && s%10==8)
//		return 1;
//		
//		return 0;
//	}	

	int thuannghich(int n){
		int temp = n;
		int b = 0;
		while(n!=0){
			b = b*10+n%10;
			n/=10;
		}
		if(temp == b)
		return 1;
		
		return 0;
	}
	
	int chua6(int n){
		while(n!=0){
			if(n%10==6)
			return 1;
			n/=10;
		}
		return 0;
	}
	
	int tong(int n){
		int s;
		while(n!=0){
			s+= n%10;
			n/=10;
		}
		if(s%10==8)
		return 1;
		
		return 0;
	}

	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		int temp;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		int dem=0;
		for(i=a;i<=b;i++){
			if(thuannghich(i) && chua6(i) && tong(i) )
				printf("%d",i);
		}
//		printf("%d",dem);
		
		return 0;
	
	}
