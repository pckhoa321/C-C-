/*Vi?t chuong tr�nh C cho ph�p nh?p v�o s? h�ng v� s? c?t c?a h�nh ch? nh�t. Th?c hi?n in ra h�nh ch? nh?t theo nguy�n t?c tuong ?ng.
INTPUT
5 5
OUTPUT
54321
54322
54333
54444
55555

Ho?c
INPUT
4 6
OUTPUT
654333
654444
655555
666666
Ho?c
INPUT
6 4
OUTPUT
6543
6543
6543
6544
6555
6666 */
//#include <???.h> //Author by Quan dep trai
int main()
{ 
  int i,j,m,n,tong;
  scanf("%d%d",&n,&m);
  if(m>=n)
  tong=m;
  else tong=n;
  for(i=n-1;i>=0;i--){
  	for(j=0;j<m;j++){
  		if(j>=i)
  		  printf("%d",tong-i);
  		else printf("%d",tong-j);  
		}
		printf("\n");
	}
	return 0;
}
