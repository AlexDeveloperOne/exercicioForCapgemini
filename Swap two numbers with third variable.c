https://play.google.com/store/apps/details?id=vrpatel0018.cprograms

/*Program to swap two numbers with third variable.*/


#include<stdio.h>

int main()
{ 
	int a,b,c;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("a = %d \n b = %d",a,b);

	c = a;
	a = b;
	b = c;

	printf("\nAfter swap values\n");
	printf("a = %d \n b = %d",a,b);
return 0;
}
