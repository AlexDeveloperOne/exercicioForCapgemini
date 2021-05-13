/*program to print Armstrong number*/


#include<stdio.h>
#include<math.h>

int main()
{
	int n,d,t,sum=0,nt,count;
	
	printf("\nEnter the number");
	scanf("%d",&n);
	
	printf("\nThe Armstrong Numbers between 1 to %d range=",n);
	for(nt=1;nt<=n;nt++){
		t=nt;
		sum=0;
		count=0;
		do{
			t=t/10;
			count++;
		}while(t!=0);
		t=nt;
		do{
			d=t%10;
			sum+=pow(d,count);
			t=t/10;
		}while(t!=0);
		if(sum==nt){
			printf("\t%d",nt);
		}
	}
}

 
