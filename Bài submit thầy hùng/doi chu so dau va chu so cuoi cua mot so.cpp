#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int soDau,soCuoi;
	int soDao=0;
	soCuoi=n%10;
	int count=0;
	int a;
	int m=n-soCuoi;
	
	while(n>0){
		soDau=n%10;
		count++;
		n/=10;}
	
	
	a=pow(10,(count-1));
	
	if(soCuoi!=0){
		
	if(soCuoi>soDau){
		soDao=m + (soCuoi-soDau)*a+soDau;
		printf("%d",soDao);}
	else if(soDau>soCuoi){
		soDao=m-(soDau-soCuoi)*a+soDau;
		printf("%d",soDao);}
		else{
			printf("0");}}
			
	else{
		soDao=m-soDau*a+soDau;
		printf("%d",soDao);}
		
		
	
		
	

return 0;
}

