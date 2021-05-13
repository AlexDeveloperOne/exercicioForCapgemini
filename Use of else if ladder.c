/* Use of else if ladder .....*/


#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("\nEnter first no");
    scanf("\n%d",&a);
    printf("\nenter second no");
    scanf("\n%d",&b);
    printf("\nenter third no");
    scanf("\n%d",&c);
    if(a>b&&a>c){
    	printf("\na is greater");
	}
    else if(b>a&&b>c){
    	printf("\nb is greater");
	}
    else{
    	printf("\nc is greater");
	}
}

 
