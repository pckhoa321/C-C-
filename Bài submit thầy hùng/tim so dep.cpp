#include<stdio.h>
#include<math.h>
int tongCS(int n){
	int sum=0;
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		sum+=a;
		}
		if(sum%10==0) return 1;
		else  return 0;}
int checkSTN(int n){
	int a=0;
	int m=n;
	while(m>0){
		a = a * 10 + m % 10;
		m /= 10;}
	if(a ==n ) return 1;
	else return 0;}
	

		
int main(){
	int n;
	scanf("%d",&n);
	int count=0;
	for(int i=pow(10,(n-1));i<=(pow(10,n)-1);i++){
		if(checkSTN(i)==1 && tongCS(i)==1){
			count++;}}
			printf(" %d",count);

return 0;
}

