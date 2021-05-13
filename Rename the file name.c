/*Rename the file name*/
/*first create any file for this program*/

#include<stdio.h>
void  main(){
	FILE *fp;
	int ch;
	char fn[30],fn2[30];
	char c;
	printf("\nEnter the file name of source file");
	scanf("%s",fn);
	printf("\nEnter the file name of target file");
	scanf("%s",fn2);
	fp=fopen(fn,"r");
	if(fp==NULL){
		printf("\nUnable to open %s",fn);
		return;
	}else{
		printf("\nThe content of file %s are\n",fn);
		do{
			c=fgetc(fp);
			printf("%c",c);
		}while(c!=EOF);
		fclose(fp);
		printf("\nEnter the file name for rename");
		scanf("%s",fn2);
		rename(fn,fn2);
	}
	fflush(fp);
	fp=fopen(fn2,"r");
	if(fp==NULL){
		printf("\nUnable to open %s",fn2);
	}else{
		printf("\nThe content of file %s are \n",fn2);
		do{
			c=fgetc(fp);
			printf("%c",c);
		}while(c!=EOF);
		fclose(fp);
	}
}
 
