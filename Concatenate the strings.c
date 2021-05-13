https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*Program to concatenate the strings using user defined function*/


#include<stdio.h>
void joinstr(char *dest,char *src){
	int i=0,j,k=0;
	do{
		i++;
	}while(dest[i]!='\0');
	
	do{
		dest[i]=src[k];
		i++;
		k++;
	}while(src[k]!='\0');
}

void main(){
	char s1[80],s2[80];
	puts("\nEnter the string 1");
	gets(s1);
	puts("\nEnter the string 2");
	gets(s2);
	printf("\nThe string1:%s",s1);
	printf("\nThe string2:%s",s2);
	joinstr(s1,s2);
	printf("\nThe join string :%s",s1);
}

/*if you want to concatenate string with pre-defined function
1. add header file #include<string.h>
2. use function strcat(s1,s2)
    it will concatenate string s1,s2 and store result in s1*/

 
