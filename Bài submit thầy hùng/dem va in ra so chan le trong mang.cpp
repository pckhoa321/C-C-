#include<stdio.h>
#define maxsize 100
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
}
void chan(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			printf("%d ",a[i]);}}
}
void le(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i] % 2 != 0){
			printf("%d ",a[i]);}}
}
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	int count=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			count++;}}
	printf("%d ",count);
	chan(a,n);
	printf("\n");
	for(int i=0;i<n;i++){
		if(a[i] % 2 != 0){
			dem++;}}
	printf("%d ",dem);
	le(a,n);
return 0;
}

