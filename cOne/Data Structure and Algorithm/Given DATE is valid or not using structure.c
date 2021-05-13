/*Given DATE is valid or not using structure*/

#include<stdio.h>
struct DATE{
	int dd,mm,yy;
};

int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};

void main(){
	struct DATE d;
	printf("\nEnter Date:");
	scanf("%d/%d/%d",&d.dd,&d.mm,&d.yy);
	if(d.yy%4==0)
		m[1]=29;
	else
		m[1]=28;
		
	if(d.yy<=2100){
		if(d.mm<=12){
			if(d.dd<=m[d.mm-1]){
				printf("\nThe Date %d/%d/%d is valid",d.dd,d.mm,d.yy);
				return ;
			}
		}
	}
	printf("\nThe Date %d/%d/%d is not valid",d.dd,d.mm,d.yy);
}
 
