#include<stdio.h>
#define max 100
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
}
int checkTN(int n){
	int m=n;
	int a=0;
	while(m>0){
		a=m%10+a*10;
		m/=10;}
	if(a == n) return 1;
	return -1;
}
int hienthi(int a[],int n){
	for(int i=0;i<n;i++){
		if(checkTN(a[i]) == 1 && a[i] > 10){
			printf("%d ",a[i]);}}
}
int main(){
	int a[max];
	int count=0;
	int n;
	scanf("%d",&n);

	nhapmang(a,n);
	for(int i=0;i<n;i++){
		if(checkTN(a[i])==1 && a[i] > 9){
			count++;}}
	printf("%d ",count);
	hienthi(a,n);
return 0;
}

