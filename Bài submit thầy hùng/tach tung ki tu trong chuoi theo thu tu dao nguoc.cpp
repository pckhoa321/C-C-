#include<stdio.h>
#include<string.h>
void swap(char &a,char &b){
	int temp=a;
		a=b;
		b=temp;
}
void daonguockitu(char str[]){
	
	for(int i=0;i<(strlen(str)/2);i++){
		swap(str[i],str[strlen(str)-i-1]);}
}
int main(){
	char str[100];
	fgets(str,100,stdin);
	daonguockitu(str);
	for(int i=0;i<strlen(str);i++){
		printf("%c",str[i]);
		printf(" ");}
return 0;
}

