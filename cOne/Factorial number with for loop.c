/*Factorial number with for loop*/


#include<stdio.h>

int main()
{
	int n,fact=1,i=1;
	printf("\nEnter number N:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n%d!=%d",n,fact);
}