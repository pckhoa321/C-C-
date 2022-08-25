#include<stdio.h>
#include<math.h>
int checkSNT(int n){
	if(n<2) return 0;
	else
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;}
		return 1;}
int checkFibonaci(int n){
	int f0=0,f1=1,fn;
	while(fn<n){
		fn=f0+f1;
		f0=f1;
		f1=fn;}
		if(fn==n) return 1;
		return 0;}
int checkSum(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;}
	if(checkFibonaci(sum)==1) return 1;
	return 0;}
	
int Max(int x,int y){
	return x<y ? y:x;}
	
int Min(int x,int y){
	return x<y ? x:y;}
	
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=Min(a,b);i<=Max(a,b);i++){
		if((checkSNT(i)==1) && (checkSum(i))==1){
			printf(" %d",i);}}
		
		return 0;
}

