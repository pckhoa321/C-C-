#include<stdio.h>

int main(){
	int a,b;	
	scanf("%d%d",&a,&b);
	

	
	int dienTich,chuVi;
	dienTich=a*b;
	chuVi=(a+b)*2;
	
	if(a<=0||b<=0)
	printf("0");
	else{
		printf("%d",chuVi);
		printf(" %d",dienTich);
	}
return 0;
}

