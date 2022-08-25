#include<stdio.h>
const int maxsize=100;

void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}

void maxMin(int a[],int &n){
	int Max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>Max){
			Max=a[i];}}
			
	int Min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<Min){
			Min=a[i];}}
			
	printf("%d %d",Max,Min);}
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	maxMin(a,n);
return 0;
}

