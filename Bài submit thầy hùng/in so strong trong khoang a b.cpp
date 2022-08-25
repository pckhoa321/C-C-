#include<stdio.h>
int checkStrong(int n){
	int sum=0,giaiThua=1;
	int m=n;
	int a;
	while(m>0){
		a=m%10;
		for(int i=1;i<=a;i++){
			giaiThua*=i;}
			sum+=giaiThua;
			m/=10;
			giaiThua=1;}
		if(sum==n) return 1;
		return 0;}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	for(int i=a;i<=b;i++){
		if(checkStrong(i)==1){
			printf(" %d",i);}}
	else
	for(int i=b;i<=a;i++){
		if(checkStrong(i)==1){
			printf(" %d",i);}}
return 0;
}

