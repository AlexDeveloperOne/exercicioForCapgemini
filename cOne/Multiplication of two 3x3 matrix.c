/*Multiplication of two 3*3 matrix*/


#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,sum;  //declaration of Two-Dimensional array
	
	printf("Enter element of first matrix are\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter element of second matrix are\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=0;
			for(k=0;k<3;k++){
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	
	printf("Additiion of two matrix is as follow:\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("\t%d",c[i][j]);
		}
	}
}
 
