#include<stdio.h>
#define maxsize 100
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}
		
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);}}
void Max(int a[],int &n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];}}
	printf("%d",max);
	
	int max2=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<max && a[i]>max2){
			max2=a[i];}}
			
	printf(" %d",max2);}
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	Max(a,n);
return 0;
}

