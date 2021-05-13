/*open file in read mode and print it*/
/*create clear.txt file*/

#include<stdio.h>
void main(){
	FILE *fp;
	char ch;
	fp=fopen("clear.txt","r");
	if(fp==NULL){
		printf("\nUnable to open clear.txt");
	}else{
		do{
			ch=getc(fp);
			putchar(ch);
		}while(ch!=EOF);
		fclose(fp);
	}
}
 
