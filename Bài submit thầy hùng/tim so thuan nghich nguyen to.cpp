#include<stdio.h>
#include<math.h>
int checkNT(int n){
	if(n<2) return 0;
	else
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		return 0;}
		return 1;}
int checkSTN(int n){
	int a=0;
	int m=n;
	while(m>0){
		a=a*10+m%10;
		m/=10;}
	if(a!=n && checkNT(a)==1) return 1;
	else return 0;}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		for(int i=b;i<=a;i++){
			if(checkNT(i)==1 && checkSTN(i)==1){
				printf(" %d",i);}}}
	else{
		for(int i=a;i<=b;i++){
			if(checkNT(i)==1 && checkSTN(i)==1){
				printf(" %d",i);}}
	}
return 0;
}

