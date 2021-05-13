//Automorphic Number

/*An automorphic number is number whose square ends in  the same 
digits as the number itself
For example:5*5=25*/

#include<stdio.h>

int main(){
	int n,num,r,t,eq;
	long int sq;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	num = n;
	
	sq = n*n;
	t=10;
	
	printf("Square of %d is %ld",n,sq);
	
	while(n<0){
		r = sq%t;
		if(num == r){
			eq=1;
			break;
		}
		n = n/10;
		t = t*10;
	}
	
	if(eq == 1){
		printf("%d is an automorphic number",num);
	}else{
		printf("%d is NOT an automorphic number",num);
	}
	return 0 ;
}