#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	gets(str);
	for(int i=0;i<strlen(str);i++){
		printf("%c",str[i]);
		printf(" ");}
return 0;
}

