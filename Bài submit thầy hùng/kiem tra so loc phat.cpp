#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		}
	if(a!=0 && a!=6 && a!=8)
	printf("0");
	else
	printf("1");
return 0;
}

