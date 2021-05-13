/*pointner within structure*/


#include<stdio.h>
struct SQR{
	int *s,*n;
};

int main(){
	struct SQR s;
	int n,i;
	printf("\nEnter total nos");
	scanf("%d",&n);
	s.n = (int *)malloc(sizeof(int)*n);
	s.s = (int *)malloc(sizeof(int)*n);
	for(i=1;i<=n;i++){
		s.n[i-1]=i;
		s.s[i-1]=i*i;
		printf("\n%d\t%d",s.n[i-1],s.s[i-1]);
	}
}

 
