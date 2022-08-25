#include<stdio.h>
#include<math.h>
int checkSNT(int n){
	if(n<2) return 0;
	else
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;}
		return 1;}
		
int checkSTN(int n){
	int m=n;
	int a=0;
	while(m>0){
		a=a*10+m%10;
		m/=10;}
	if(a==n) return 1;
	else return 0;}
	
int countUSNT(int n){
	int count=0;
	for(int i=1;i<=(n/2);i++){
		if((n%i==0) && (checkSNT(i)==1)){
			count++;}}
	if(count>=3) return 1;
	else return 0;}

int Max(int x,int y){
	return x<y ? y:x;}
	
int Min(int x,int y){
	return x<y ? x:y;}
		
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=Min(a,b);i<=Max(a,b);i++){
		if((checkSTN(i)==1) && (countUSNT(i)==1)){
			printf(" %d",i);}}
return 0;
}

