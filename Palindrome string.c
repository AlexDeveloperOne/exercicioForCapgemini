https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*Palindrome string*/
/*string and its reverse should be same*/


#include<stdio.h>
int palindrome(char *dest){
	int j=0,k,i,flag=1;
	do{
		j++;
	}while(dest[j]!='\0');
	k=j-1;
	i=0;
	do{
		if(dest[i]!=dest[k]){
			flag=0;
			break;
		}
		i++;
		k--;
	}while(i<=k);
	return flag;
}

void main(){
	char s[80];
	puts("\nEnter the string");
	gets(s);
	printf("\nThe given string : %s",s);
	if(palindrome(s)){
		printf("\nIt is palindrome");
	}else{
		printf("\nIt is not palindrome");
	}
}

 
