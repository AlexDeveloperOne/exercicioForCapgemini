https://play.google.com/store/apps/details?id=vrpatel0018.cprograms


/*string encryption and decryption*/


#include<stdio.h>
void encrypt(char *dest){
	int j=0;
	do{
		dest[j]-=20;
		j++;
	}while(dest[j]!='\0');
}

void decrypt(char *dest){
	int j=0;
	do{
		dest[j]+=20;
		j++;
	}while(dest[j]!='\0');
}

void main(){
	char s[80];
	puts("\nEnter the string");
	gets(s);
	printf("\nThe given string : %s",s);
	encrypt(s);
	printf("\nEncrypted string : %s",s);
	decrypt(s);
	printf("\nDecrypted string : %s",s);
}
 
