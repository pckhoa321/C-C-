#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a;
	int div=1;
	while(n>0){
		a=n%10;
		n/=10;
		div*=a;}
	printf("%d",div);
return 0;
}

