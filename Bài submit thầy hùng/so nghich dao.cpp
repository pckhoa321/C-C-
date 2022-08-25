#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int temp=0;
	
	while(n>0){
		temp=temp*10+n%10;
		n/=10;}
		printf("%d",temp);
return 0;
}

