//#include <???.h> //Author by Quan dep trai

int main(){ long long a,tg ;
scanf("%d", &a);
tg=1;

while(a)
{tg*= a%10;
a/=10;	}	

printf("%lld",tg);

return 0;
}
//Vi?t chuong tr�nh C cho ph�p nh?p v�o m?t s? n, th?c hi?n t�m t?ng c�c ch? s? c?a n v� in ra m�n h�nh.
