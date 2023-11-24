#include<stdio.h>
#include<conio.h>
main()
{
    int d1=0,d2=1,d3,i=3,len;
    clrscr();
    printf("enter length series:");
    scanf("%d",&len);
    printf("%d%d",d1,d2);
    while(i<=len)           
    {
             
        d1=d2;
        d2=d3;
        d3=d1+d2;               
        printf(" %d",d3);
        i++;                  
    }
    getch();
}
