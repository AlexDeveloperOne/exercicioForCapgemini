/*program to calculate area of triangle using function*/


#include<stdio.h>

void triangle();         //this is function declaration
int main()
{
	triangle();			//this is function call
}

void triangle(){		//this is function definition
	int base,height;
	float area;
	printf("\nAccept base ");
	scanf("%d",&base);
	printf("\nAccept height ");
	scanf("%d",&height);
	
	area=0.5*base*height;
	
	printf("\n Area of triangle = %f",area);
}