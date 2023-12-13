#include <stdio.h>
#include <string.h>

void clear(char str[]){
	char temp[1001]={};
	int longL=0;
	int tempL=0;
	int i=0,j=0;
	while(str[i]=='*')
		temp[j++]=str[i++];
	for(;str[i]!='\0';)
		if(str[i]!='*')
			temp[j++]=str[i++];
		else
			i++;
	fputs(temp,stdout);
}

int main(){
	char str[1001];
	while(fgets(str,sizeof(str),stdin)!=NULL)
		clear(str);
	return 0;
}