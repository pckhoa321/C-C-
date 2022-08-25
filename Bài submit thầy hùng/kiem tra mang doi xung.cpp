#include<stdio.h>
const int max=100;
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
}
int kiemtradoixung(int a[],int &n){
	for(int i=0;i<=n/2;i++){
		if(a[i]!=a[n-i-1]){
			return 0;
			}}
	return 1;
}
int main(){
	int a[max];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	if(kiemtradoixung(a,n) == 1)
	printf("1");
	else
	printf("0");
return 0;
}

