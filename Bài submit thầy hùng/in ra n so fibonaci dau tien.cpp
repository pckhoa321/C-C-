#include<stdio.h>
//in ra n so fibonaci dau tien
unsigned long long  fibonaci(int n){
	if(n==0||n==1)
	return n;
	else
	return fibonaci(n-2)+fibonaci(n-1);}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf(" %llu", fibonaci(i));}	
		
	
return 0;
}

