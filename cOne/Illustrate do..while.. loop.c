/*Program to illustrate do..while.. loop*/


#include<stdio.h>
int main()
{
	int sum=1,index=0;
	do{
		index+=1;
		sum=2*sum;
	}while(index>9);
	printf("%d %d",sum,index);
}

 
