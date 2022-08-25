#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	c=a*b;
	if(a==0 || b==0)
	printf("0");
	
	while(a!=b){
	if(a>b)
	a-=b;
	else
	b-=a;}
	
	printf("%d",a);
	printf(" %d",c/a);
return 0;
}

