#include<stdio.h>
#include<math.h>
int checkSNT(int n){
	if(n<2) return 0;
	else
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;}
		return 1;}
int tongCSNT(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;}
	if(checkSNT(sum)==1) return 1;
	else return 0;}
int chuSNT(int n){
	int a;
	while(n){
	if(!checkSNT(n%10)) return 0;
		n/=10;}
	return 1;}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int count =0;
	if(a<b){
	for(int i=a;i<=b;i++){
		if(checkSNT(i)==1 && tongCSNT(i)==1 && chuSNT(i)==1){
			count++;}}
		printf(" %d",count);}
	else{
	for(int i=b;i<=a;i++){
			if(checkSNT(i)==1 && tongCSNT(i)==1 && chuSNT(i)==1){
			count++;}}
		printf(" %d",count);}
return 0;
}

