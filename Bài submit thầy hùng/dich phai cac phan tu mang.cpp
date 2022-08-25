#include<stdio.h>
#define max 100
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);}
}
void dichphai(int a[],int n,int h){
	while(h--){
		
		int temp=a[n-1];
		
		for(int i=n-1;i>0;i--){
			
			a[i]=a[i-1];//dich cac phan tu sang phai
			}
		a[0]=temp;
		}
}
int main(){
	int a[max];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	int h;
	scanf("%d",&h);
	dichphai(a,n,h);
	xuatmang(a,n);
return 0;
}

