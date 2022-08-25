#include<stdio.h>
#include<math.h>
const int maxsize=100;
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);}}
void xoaphantu(int a[],int &n,int p){
	if(p>=0 && p<=n){
		for(int i=p-1;i<=n-1;i++){
			a[i]=a[i+1];}//phan tu a[i+1] cu khi dich sang trai se thanh a[i]
			
			n--;}}
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	
	nhapmang(a,n);
	
	int p;
	scanf("%d",&p);
	
	xoaphantu(a,n,p);
	
	xuatmang(a,n);
return 0;
}

