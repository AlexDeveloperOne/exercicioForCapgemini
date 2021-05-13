
/*Sum of N number and while loop*/


#include<stdio.h>
int main()
{
   int  n,a,i=1,sum=0;
   printf("\nHow many number do you wanted add");
   scanf("%d",&n);
   while(i<=n){
   	printf("Enter any number:");
   	scanf("%d",&a);
   	sum+=a;		//this is similar to sum=sum+a
   	i+=1;     //this is similar to i=i+1
   }
   printf("\nSum=%d",sum);
}

 
