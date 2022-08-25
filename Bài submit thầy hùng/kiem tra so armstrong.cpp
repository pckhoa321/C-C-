#include<stdio.h>
#include<math.h>
/*buoc 1:dem cac chu so
  buoc 2:tinh tong cac luy thua :co so la cac chu so va so mu la so chu so
  buoc 3:so sanh va ket luan*/
  
int demCS(int n){        //B1
	int count=0;
	while(n>0){
		n/=10;
		count++;}
		return count;}
int checkArmstrong(int n){ //B2
	int a=n,sum=0,b=0;
	while(a>0){
		b=a%10;
		a/=10;
		sum+=pow(b,demCS(n));} //neu tong bang so n ban dau thi no la so armstrong
		if(sum==n) return 1;
		return 0;}
int main(){
	int n;
	scanf("%d",&n);
	if(checkArmstrong(n)==1)
	printf("1");
	else
	printf("0");
return 0;
}

