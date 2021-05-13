https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*program for swaping two number using poointer*/


#include<stdio.h>
int main()
{
	int a,b,*aa,*bb;
	
	printf("\nEnter any two number");
	scanf("%d%d",&a,&b);
	
	aa=&a;
	bb=&b;
	printf("\nValues before interchanging are: %d\t%d",*aa,*bb);
	
	aa=&b;
	bb=&a;
	printf("\nValues after interchanging are: %d\t%d",*aa,*bb);
}

 
