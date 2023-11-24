#include<stdio.h>
#include<conio.h>
main(){
	int a=1;
	int n;
	clrscr();
	printf("rnter value :");
	scanf("%d",&n);
	do{
		printf("%d\t",a);
		a++;
	}while(a<=n)
	getch();
}

