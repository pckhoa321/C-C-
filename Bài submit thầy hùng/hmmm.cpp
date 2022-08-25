#include<stdio.h>
#include<math.h>
//in  ra so nguyen to nho hon n co chu so cuoi cung lon nhat trong tat ca cac chu so cua n
int checkNT(int n){
	if(n<2) return 0;
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;}
		}
		return 1;
		}

int checkLast(int n){
int last = n % 10;
	int m=n/10;
	int a=0;
	int max=0;
	while(m){
		a=m%10;
		m/=10;
		if(a>max){
		max=a;}}
		if(last>=max) 
	return 1;
		else 
	return 0;}
		
int main(){
	int n;
	scanf("%d",&n);
	int count=0;
	for(int i=2;i<n;i++){
		if(checkNT(i)==1 && checkLast(i)==1){
			count++;
			printf("%d ",i);}}
			
			printf("\n%d",count);
return 0;
}

