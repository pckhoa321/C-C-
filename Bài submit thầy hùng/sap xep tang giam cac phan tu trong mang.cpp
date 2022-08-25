#include<stdio.h>
#define maxsize 100
void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);}
}
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);}
}
void swap(int &a,int &b){
	int temp=a;
		a=b;
		b=temp;
}
void chan(int a[],int &n,int b[],int &nb){
	nb=0;
	for(int i=0;i<n;i++){
		if(a[i] % 2 == 0){
			b[nb]=a[i];
			nb++;}
		}
}
void le(int a[],int &n,int c[],int &nc){
	nc=0;
	for(int i=0;i<n;i++){
		if(a[i] % 2 != 0){
			c[nc]=a[i];
			nc++;}
		}

}	
void sapxep(int a[],int &n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);}}}
}					
int main(){
	int a[maxsize],b[maxsize],c[maxsize];
	int n,nb,nc;
	scanf("%d",&n);
	nhapmang(a,n);
	chan(a,n,b,nb);
	sapxep(b,nb);
	xuatmang(b,nb);
	le(a,n,c,nc);
	sapxep(c,nc);
	xuatmang(c,nc);
return 0;
}

