//Neon number

/*A neon number is a number where the sum of digits of square of the 
number is equal to the number itself

For example : 9 is a neon number. its square is 9*9=81 ans sum of the digit(8+1) is 9*/

#include<stdio.h>
int main(){
	int n,sq,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	sq = n*n;
	
	while(sq>0){
		sum = sum + sq%10;
		sq = sq/10;
	}
	
	if(sum==n){
		printf("%d is neon number.",n);
	}else{
		printf("%d is not a neon number.",n);
	}
	return 0 ;
}

 
