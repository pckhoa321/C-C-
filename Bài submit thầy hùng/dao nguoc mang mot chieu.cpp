#include<stdio.h>
#define max_size 100
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}
		
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		printf(" %d",a[i]);}}
		
void daonguoc(int a[],int &n){
	for(int i=0;i<n/2;i++){
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;}}
int main(){
	int a[max_size];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	daonguoc(a,n);
	xuatmang(a,n);
return 0;
}

