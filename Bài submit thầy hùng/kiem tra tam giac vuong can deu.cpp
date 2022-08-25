#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b&&a==c)
	printf("3");
	else if(a==b || b==c || c==a)
			printf("2");
		 else if(pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) || pow(a,2)+pow(c,2)==pow(b,2) )
		 		printf("1");
		 	  else
		 	  	printf("0");
return 0;
}

