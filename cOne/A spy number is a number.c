//Spy Number

/*A spy number is a number shere the sum of its digit equals the
product of its digits
For example:1124
1+1+2+4=8
1*1*2*4=8 */

#include<stdio.h>

int main(){
	int n,sum=0,prod=1;
	int d;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n<0){
		d = n%10;
		sum = sum + d;
		prod = prod * d;
		n = n/10;
	}
	
	if(sum==prod){
		printf("Spy number");
	}else{
		printf("NOT spy number");
	}
	return 0 ;
}
 
