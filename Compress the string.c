/*compress the string*/

#include<stdio.h>
void compress(char *s1){
	char *s2;
	int i,j=0;
	for(i=0;s1[i]!='\0';j++){
		s2[j]=s1[i];
		if(s1[i]==' '){
			while(s1[i]==' '){
				i++;
			}
		}else{
			i++;
		}
	}
	s2[j]='\0';
	for(i=0;s2[i]!='\0';i++)
		s1[i]=s2[i];
}

void main(){
	char str[80]="I     love   my india            !!";
	printf("\nString before call:-%s",str);
	compress(str);
	printf("\nString after call:-%s",str);
}

 
