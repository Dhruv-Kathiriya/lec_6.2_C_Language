#include<stdio.h>
#include<conio.h>

int main(){

int choice,food;
clrscr();

do{

		printf("press 1 for pizza\n");
		printf("press 2 for burger\n");
		printf("press 0 for exit\n");

		printf("enter your choice");
		scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("pizza is ready...\n");
			printf("enter your fav food\n");
			scanf("%d",&food);
	switch(food){
		case 1:
			printf("chessy pizza..\n");
			break;
		case 2:
			printf("Hot chilli pizza..\n");
			break;
    }

			break;
		case 2:
		printf("enter your fav food");
		scanf("%d",&food);

	switch(food){
		case 1:
			printf("chessy burger..\n");
			break;
		case 2:
			printf("maxicon burger..\n");
			break;
}
	
			break;
	case 0:
		printf("Thanks for visit");
		break;
}

}while(choice!=0);

getch();
}
