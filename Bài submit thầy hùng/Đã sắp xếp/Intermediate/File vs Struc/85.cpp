//#include <???.h> //Author by Quan dep trai
#include <string.h>
#define flush while((getchar()) != '\n')

struct sv{
	char name[50];
	int nums;
	float p[3];
};

int count(){
	FILE *outfile = fopen("B17DCPT163.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(sv)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	
	int c = count();
	for(int i=1 ; i<=n ; i++){
		sv s;
		s.nums = i+c;
		flush;
		gets(s.name);
		for(int i=0 ; i<3 ; i++)
			scanf("%f",&s.p[i]);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
}

void edit(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	fseek(outfile,sizeof(sv)*(n-1),SEEK_SET);
	sv s;
	s.nums = n;
	flush;
	gets(s.name);
	for(int i=0 ; i<3 ; i++)
		scanf("%f",&s.p[i]);
	fwrite(&s,sizeof(s),1,outfile);
}

bool check(sv s){
	if(s.p[0] < s.p[1] && s.p[1] < s.p[2])  return 1;
	return 0;
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	
	for(int i=0 ; i<n ; i++){
		sv s;
		fseek(outfile,sizeof(sv)*i,SEEK_SET);
		fread(&s,sizeof(s),1,outfile);
		if(check(s)==0)
			continue;
		printf("%d %s",s.nums,s.name);
		for(int i=0 ; i<3 ; i++)
			printf(" %.1f",s.p[i]);
		printf("\n");
	}
	fclose(outfile);
}

int main(){
//	FILE *outfile = fopen("B17DCPT163.bin","wb+");
//	fclose(outfile);
	int n ;
    scanf("%d", &n);
    switch (n) {
    case 1 :
        scanf("%d", &n) ;
        addnew(n) ;
        printf("%d",n) ;
        break ;
    case 2 :
        scanf("%d",&n);
        edit(n) ;
        printf("%d",n) ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
