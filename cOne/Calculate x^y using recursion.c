/*Calculate x^y using recursion*/

#include<stdio.h>
int pow(int a,int n){
	int p=1,i;	//these is local variable
	if(n==1){
		return a;
	}else{
		p=a*pow(a,n-1);
		return p;
	}
}

void main(){
	int (*p)(int,int),x,y,a;		//these are local variable
	printf("\nEnter the value of x,y");
	scanf("%d%d",&x,&y);
	p=pow;			/*assigning address of function to pointer*/
	a=p(x,y);
	printf("\n%d^%d=%d",x,y,a);
}