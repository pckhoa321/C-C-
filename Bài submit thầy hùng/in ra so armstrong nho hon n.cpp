#include<stdio.h>
#include<math.h>

int demCS(int n){
	int count=0;
	while(n>0){
		n/=10;
		count++;}
		return count;}
		
int checkArmstrong(int n){
	int b=n,sum=0,a;
	while(b>0){
		a=b%10;
		b/=10;
		sum+=pow(a,demCS(n));}
		if(sum==n) return 1;
		return 0;}
int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(checkArmstrong(i)==1){
			printf(" %d",i);}}
return 0;
}

