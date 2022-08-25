#include<stdio.h>
#define maxsize 100

void nhapmang(int a[],int &na){
	for(int i = 0;i < na;i++){
		scanf("%d",&a[i]);}
		}
				
void tachChanLe(int a[],int &na,int b[],int &nb,int c[],int &nc){
	nb=0;
	nc=0;
	for(int i = 0;i < na;i++){
		if(a[i] %  2== 0){
			b[nb] = a[i];
			nb++;}}
		for(int i = 0;i < nb;i++){
			printf("%d ",b[i]);}
		printf("\n");	
	for(int i = 0;i < na;i++){
		if(a[i]%2!=0){
			c[nc]=a[i];
			nc++;}}
		for(int i=0;i<nc;i++){
			printf("%d ",c[i]);}
			}
			

			
int main(){
	int a[maxsize];
	int b[maxsize];
	int c[maxsize];
	int na,nb=0,nc=0;
	scanf("%d",&na);
	nhapmang(a,na);
	tachChanLe(a,na,b,nb,c,nc);
	

return 0;
}

