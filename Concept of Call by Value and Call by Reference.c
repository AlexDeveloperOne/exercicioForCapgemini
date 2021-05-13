https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*Concept of Call by Value and Call by Reference*/


#include<stdio.h>
void swap_val(int a,int b){			//Call by value
	int t;
	printf("\nWithin function call by value before swap\na=%d \nb=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\nWithin function call by value after swap\na=%d \nb=%d",a,b);
}

void swap_ref(int *a,int *b){		//Call by Reference
	int t;
	printf("\nWithin function call by reference before swap\na=%d \nb=%d",*a,*b);
	t=*a;
	*a=*b;
	*b=t;
	printf("\nWithin function call by reference after swap\na=%d \nb=%d",*a,*b);
}

void main(){
	int x,y;     /*These are local variable*/
	printf("\nEnter the value of  x and y");
	scanf("%d%d",&x,&y);
	swap_val(x,y);
	printf("\nAfter functoin call by value \nx=%d \ny=%d",x,y);
	swap_ref(&x,&y);
	printf("\nAfter functoin call by reference \nx=%d \ny=%d",x,y);
}
 
