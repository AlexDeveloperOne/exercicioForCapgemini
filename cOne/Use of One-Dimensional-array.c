/*Use of One-Dimensional-array*/
/*program to accepting 10 number and print the same*/


#include<stdio.h>
int main()
{
	int a[5];     //declaration of one dimensional array
				  //index of array start from 0 to onword
	int i;
	printf("\nEnter any 5 number\n");
	for(i=0;i<5;i++){
		scanf("\t%d",&a[i]);
	}
	printf("\nThe inputed numbers are as follows");
	for(i=0;i<5;i++){
		printf(" %d",a[i]);
	}
}
 
