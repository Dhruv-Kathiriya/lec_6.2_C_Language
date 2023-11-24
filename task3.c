 #include<stdio.h>
#include<conio.h>
main(){
	
	int a=1;
	int n;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	do{
	
		if(a%2==0)
		{
		printf("%d\t",a);
	}
	    a++;
	}while(a<=n);
	getch();
}
