#include<stdio.h>
#define maxsize 100
void nhapmang(int a[],int &n){
	int i;
	for( i=0;i<n;i++){
		scanf("%d",&a[i]);}
}

void mangchan(int a[],int &n){
	int i;
	for( i=0;i<n;i++){
		if(a[i] % 2 == 0){
			printf(" %d",a[i]);}}
}
void mangle(int a[],int &n){
	int i;
	for(i=0;i<n;i++){
		if(a[i] % 2 != 0){
			printf(" %d",a[i]);}}
}
		
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	int count=0,dem=0;
	int i;
		for(i=0;i<n;i++){
		if(a[i] % 2 != 0){
			dem++;}}
	printf("%d",dem);
	mangle(a,n);
	
	for(i=0;i<n;i++){
		if(a[i] % 2 == 0){
			count++;}}
	printf("\n%d",count);
	mangchan(a,n);
	

return 0;
}

