#include<stdio.h>
//sap xep tang dan theo tong cac chu so		
int sum(int n){
	int m=n;
	int sum=0;
	while(m>0){
		sum+= m % 10;
		m /= 10;}
		
	return sum;}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(sum(a)>sum(b)){
		printf("%d %d",a,b);}
	else{
    if(sum(a)<sum(b))
		printf("%d %d",b,a);
	else
		printf("%d %d",a,b);}
	
return 0;
}

