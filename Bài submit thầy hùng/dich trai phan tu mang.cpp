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
void dichtrai(int a[],int n,int h){
	while(h--){
		int temp=a[0];
		for(int i=0;i<n;i++){
			a[i]=a[i+1];//dich phan cac phan tu sang trai
			}
		a[n-1]=temp;}//doi cho phan tu dau va phan tu cuoi
}
int main(){
	int a[max];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	int h;
	scanf("%d",&h);
	dichtrai(a,n,h);
	xuatmang(a,n);
return 0;
}

