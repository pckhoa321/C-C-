#include<stdio.h>
const int maxsize=100;
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}}
		
void countchanle(int a[],int &n){
	int soChan=0,soLe=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			soChan++;
		else
			soLe++;}
	printf("%d %d",soChan,soLe);}
	
int main(){
	int a[maxsize];
	int n;
	scanf("%d",&n);
	nhapmang(a,n);
	countchanle(a,n);
return 0;
}

