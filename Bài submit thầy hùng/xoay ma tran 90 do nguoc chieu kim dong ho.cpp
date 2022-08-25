#include<stdio.h>
#define max 100
void nhapmang(int a[max][max],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);}}
}
void xuatmang(int a[max][max],int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			printf("%d ",a[j][i]);}
			printf("\n");}
}
int main(){
	int a[max][max];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
return 0;
}

