https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*switch statement and simple calculater*/


#include<stdio.h>
int main()
{
    int a,b;
    int choice;
    printf("\nEnter value of  a:");
    scanf("%d",&a);
    printf("\nEnter value of  b:");
    scanf("%d",&b);
    printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
    printf("\nEnter yout choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Sum of a & b:%d",(a+b));
            break;
        case 2:
            printf("Subtraction of a & b:%d",(a-b));
            break;
        case 3:
            printf("Multiplication of a & b:%d",(a*b));
            break;
        case 4:
            printf("Division of a & b:%d",(a/b));
            break;
        default :
            printf("please enter valid choice");
    }
}

 
