/*Use of user definded function*/


#include<stdio.h>
#define pi 3.14

int sub(int x,int y){		//these are fuction definition 
	int z;					//when functoin definition is before calling then no need of declaration
	z=(x-y);
	printf("\nX=%d",x);
	printf("\nY=%d",y);
	return z;
}

float div(int x,int y){
	float z;
	z=(float)x/y;
	printf("\nX=%d",x);
	printf("\nY=%d",y);
	return z;
}

int main(){
	int ch,a,b,c;
	float d;
	for(;;){
		printf("\n1 Subtract");
		printf("\n2 Devide");
		printf("\n3 exit");
		scanf("%d",&ch);
		if(ch==3)
			break;
		scanf("%d%d",&a,&b);
		switch(ch){
			case 1 :
				c=sub(a,b);
				printf("\nSubtraction=%d",c);
				break;
			case 2 :
				c=div(a,b);
				printf("\nDivision=%d",c);
				break;
		}
	}
}

 
