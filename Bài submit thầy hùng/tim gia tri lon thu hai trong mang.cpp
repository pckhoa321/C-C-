#include<stdio.h>
const int maxsize=100;
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}
		
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		printf("%5d",&a[i]);}}
void max2(int a[],int &n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];}}
			
	int max2=a[0];
	for(int i=0;i<n;i++){
		if((a[i]>max2) && (a[i]<max)){
			max2=a[i];}}
			
		printf("%d",max2);}
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	max2(a,n);
return 0;
}

