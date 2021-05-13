/*Factorial number using Recursion*/


#include<stdio.h>
int fact(int p){
	int f=1,i;
	if(p==1){
		return 1;
	}else{
		f=p*fact(p-1);
		return f;
	}
}

void main(){
	int x,n;
	printf("\nEnter the value of n");
	scanf("%d",&n);
	x=fact(n);
	printf("\nFactorial number of %d is %d",n,x);
}
 
