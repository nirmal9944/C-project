#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
struct airline
{
	char fullname[25];
	char password[25];
	char destination[25];
	int  set_num;
	char email[25];
	int c;
}a,b;
int main()
{
	airline_system();
}
void airline_system()
{
	int c1;
	printf("\t\t\t\t**********************************************\n");
	printf("\t\t\t\t        welcone to yeti airline system        \n");
	printf("\t\t\t\t**********************************************\n");
	printf("\t\t\t\tPlease choose any option from below (1-4):\n");
	printf("\t\t\t\t1. Booking\n");
	printf("\t\t\t\t2. Ticket Cancel\n");
	printf("\t\t\t\t3. Display Record\n");
	printf("\t\t\t\t4. Exit\n\n");
	printf("\t\t\t\tPlease Enter your choice:\n");
	printf("\t\t\t\t_______________________________________________\n");
	scanf("%d",&c1);
	printf("_____________________________________________________________________________________________\n");
	clrscr();
	switch(c1)
	{
		char space[12];
		case 1:
			printf("Enter your Fullname:\n");
			gets(a.fullname);
			gets(space);
			printf("Enter your password number:\n");
			gets(a.password);
			printf("Enter your email:\n");
			gets(a.email);
			printf("Enter your destnation:\n");
			gets(a.destination);
			printf("______________________\n");
			printf("A\t1\t2\t3\t4\t5\t6\t7\n");
			printf("B\t1\t2\t3\t4\t5\t6\t7\n");
			printf("______________________\n");
			printf("choose the seat number:\n");
			scanf("%d",&a.set_num);
			printf("Your seat number : A-%d",a.set_num);
			if(a.destination){
				printf("total amount is 10000Rs:-");
			}
		break;
		case 2:
			printf("\t\t\t\tTotal Number of ticket cancel :\n");
			printf("\t\t\t\tYou want to cancel a ticket:\n");
			printf("\t\t\t\t[1]YES\n\t\t\t\t[2]NO\n");
			scanf("%d",&a.c);
			switch(a.c){
				case 1:
					printf("Enter your fullname:\n");
					gets(b.fullname);
					printf("Enter your password:\n");
					gets(b.password);
				break;
				default:
					printf("exit\n");
				break;
			}
		break;
		case 3:
			printf("====================================\n");
			printf(" YETI AIRLINE ONLINE TICKET BOOKING\n");
			printf("====================================\n");
			printf("Total number of seats:14\n");
			printf("Available seats:10\n");
			printf("Flight time 10:00AM 12:00PM 01:45PM 04:00PM\n");
			printf("See more detail press any key\n");
			airline_system();
			getch();

		break;
		case 4:
			printf("Press any key to exit");
			exit(0);
		break;
		default:
			printf("\t\t\t\tsomethin is wrong please try again\n");
		break;
	}
	return 0;
}
