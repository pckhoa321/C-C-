#include<stdio.h>
#include<math.h>
int checkSTN(int n){
	int m=n;
	int a=0;
	while(m>0){
		a=a*10+m%10;
		m/=10;}
	if(a==n) return 1;
	return 0;}
	
int checkNumber6(int n){
	int b=0;
	while(n>0){
		b=n%10;
		n/=10;
	if(b==6) return 1;}}
	
int checkSum(int n){
	int sum=0;
	int c=0;
	while(n>0){
		sum+=n%10;
		n/=10;}
		
	if((c=sum % 10)==8) return 1;
	return 0;}
	
int Max(int x,int y){
	return x<y ? y:x;}
	
int Min(int x,int y){
	return x<y ? x:y;}
	
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=Min(a,b);i<=Max(a,b);i++){
		if(checkSum(i)==1 && checkSTN(i)==1 && checkNumber6(i)==1){
			printf(" %d",i);}}
return 0;
}

