#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=0;
	int m=n;
	while(m>0){
		a = a * 10 + m % 10;
		m /= 10;}
	if(a == n)
	printf("1");
	else
	printf("0");
		
return 0;
}

