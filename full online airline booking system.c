#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
int choice,choice1,choice2,n1,m,p,q;
char s[18]="0000000000000000";
void gotoyx();
void displayseat();
void markBoard(char mark);
void time();
void amount();
void seat_no();
struct detail{
     char fullname[25];
     char address[25];
     char email[25];
     char phone[15];
}a;
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
	int n,c;
	printf("\n\n\n\n\t\t\t\t**********************************************\n");
	printf("\t\t\t\t*       welcone to yeti airline system       *\n");
	printf("\t\t\t\t**********************************************\n");
	gotoxy(45,20);
	printf("press any key.....");
	getch();
	do
	{
	system("cls");
   	printf("\t\t\t\t**********************************************\n");
	printf("\t\t\t\t*       welcone to yeti airline system       *\n");
	printf("\t\t\t\t**********************************************\n");
	printf("\t\t\t\tPlease choose any option from below (1-4):\n");
	printf("\t\t\t\t1. Booking\n");
	printf("\t\t\t\t2. Ticket Cancel\n");
	printf("\t\t\t\t3. Display Record\n");
	printf("\t\t\t\t4. Exit\n\n");
	printf("\t\t\t\tPlease Enter your choice:\n");
	printf("\t\t\t\t_______________________________________________\n");
	printf("_____________________________________________________________________________________________\n");
	gotoxy(60,10);
	scanf("%d",&c);
	printf("\n\n");
	system("cls");
	switch(c)
	{
		char space[2];
		case 1:
			printf("Enter your Fullname:\n");
			printf("Enter your address:\n");
			printf("Enter your email:\n");
			printf("enter your phone number\n");
			gets(space);
			gotoxy(21,0);
			gets(a.fullname);
			gotoxy(22,1);
			gets(a.address);
			gotoxy(21,2);
			gets(a.email);
			gotoxy(25,3);
			gets(a.phone);
	time();
	char mark ='X';
	displayseat();
    numberofp();
    printf("Press any key.....");
    getch();
    system("cls");
    markBoard(mark);
    displayseat();
    printf("_______________________________________\n");
    if(p==1)
    printf("Kathmandu to Pokhara\n");
    else if(p==2)
    printf("Kathmandu to Nepalganj\n");
    else if(p==3)
    printf("Kathmandu to surkhet\n");
    else
    printf("Kathmandu to Chitwan\n");
    printf("Name:%s   Address:%s\n",a.fullname,a.address);
    printf("Email:%s\n",a.email);
    printf("Phone:%s\n",a.phone);
    if(q==1)
    printf("\nTime:Depatuere[7:45Am]   Arrival[8:10AM");
    else
    printf("\nTime:Depatuere[10:45Am]   Arrival[12:10PM\n");
    amount();
    printf("\n Total Passenger:%d\n",n1);
    seat_no();
    printf("\n_______________________________________\n");
    printf("\nticket booked succesfully!");
    printf("\npress any key to continue....");
    getch();
    system("cls");
		break;
		case 2:
			printf("If you want to cancle ticket\n");
			printf("Choose option:\n");
			printf("Cancle[1]\n");
			printf("No[2]\n");
			scanf("%d",&m);
			switch(m){
				case 1:
					printf("Ticket cancle succcefully !\n");
					exit(0);
				break;
				case 2:
					system("cls");
				break;
			}

		break;
		case 3:
			printf("Your Detail\n");
		    printf("_______________________________________\n");
            printf("Name:%s   Address:%s\n",a.fullname,a.address);
            printf("Email:%s\n",a.email);
            printf("Phone:%s\n",a.phone);
                if(q==1)
                printf("Time:Depatuere[7:45Am]   Arrival[8:10AM");
                else
                printf("Time:Depatuere[10:45Am]   Arrival[12:10PM");
                amount();
                printf("\nTotal passenger:%d",n1);
            printf("\n_______________________________________\n");
            printf("If you have any confusion please contact \n");
            printf("phone:9868000000\n");
            printf("press any key to continue.....!");
            getch();
            system("cls");
		break;
		case 4:
			exit(0);

		break;
	}



	printf("Back to first page press [1]\n");
	scanf("%d",&n);
	}while(n=1);

}
void displayseat()
{
	printf("\t\t====Available[O]=============Booked[x]=====\n");
	printf("\t\t-------------------------------------------\n");
	printf(" \t\t|  1[%c]  2[%c]  3[%c]   4[%c]   5[%c]   6[%c]   |\n ",s[1],s[2],s[3],s[4],s[5],s[6]);
	printf("\t\t|  7[%c]  8[%c]  9[%c]  10[%c]  11[%c]  12[%c]   |\n ",s[7],s[8],s[9],s[10],s[11],s[12]);
	printf("\t\t-------------------------------------------\n");
}
void markBoard(char mark)
{
	if(n1==3||n1==2||n1==1)
	{
    if (choice == 1 && s[1] == '0')
        s[1] = mark;

    else if (choice == 2 && s[2] == '0')
        s[2] = mark;

    else if (choice == 3 && s[3] == '0')
        s[3] = mark;

    else if (choice == 4 && s[4] == '0')
        s[4] = mark;

    else if (choice == 5 && s[5] == '0')
        s[5] = mark;

    else if (choice == 6 && s[6] == '0')
        s[6] = mark;

    else if (choice == 7 && s[7] == '0')
        s[7] = mark;
    else if (choice == 8 && s[8] == '0')
        s[8] = mark;
    else if (choice == 9 && s[9] == '0')
        s[9] = mark;
        else if (choice == 10 && s[10] == '0')
        s[10] = mark;
        else if (choice == 11 && s[11] == '0')
        s[11] = mark;
        else if (choice == 12 && s[12] == '0')
        s[12] = mark;
        else if (choice == 13 && s[13] == '0')
        s[13] = mark;
}
if(n1==3||n1==2)
{
	if (choice1 == 1 && s[1] == '0')
        s[1] = mark;

    else if (choice1 == 2 && s[2] == '0')
        s[2] = mark;

    else if (choice1 == 3 && s[3] == '0')
        s[3] = mark;

    else if (choice1 == 4 && s[4] == '0')
        s[4] = mark;

    else if (choice1 == 5 && s[5] == '0')
        s[5] = mark;

    else if (choice1 == 6 && s[6] == '0')
        s[6] = mark;

    else if (choice1 == 7 && s[7] == '0')
        s[7] = mark;
    else if (choice1 == 8 && s[8] == '0')
        s[8] = mark;
    else if (choice1 == 9 && s[9] == '0')
        s[9] = mark;
        else if (choice1 == 10 && s[10] == '0')
        s[10] = mark;
        else if (choice1 == 11 && s[11] == '0')
        s[11] = mark;
        else if (choice1 == 12 && s[12] == '0')
        s[12] = mark;
        else if (choice1 == 13 && s[13] == '0')
        s[13] = mark;
}
if(n1==3)
{
	if (choice2 == 1 && s[1] == '0')
        s[1] = mark;

    else if (choice2 == 2 && s[2] == '0')
        s[2] = mark;

    else if (choice2 == 3 && s[3] == '0')
        s[3] = mark;

    else if (choice2 == 4 && s[4] == '0')
        s[4] = mark;

    else if (choice2 == 5 && s[5] == '0')
        s[5] = mark;

    else if (choice2 == 6 && s[6] == '0')
        s[6] = mark;

    else if (choice2 == 7 && s[7] == '0')
        s[7] = mark;
    else if (choice2 == 8 && s[8] == '0')
        s[8] = mark;
    else if (choice2 == 9 && s[9] == '0')
        s[9] = mark;
        else if (choice2 == 10 && s[10] == '0')
        s[10] = mark;
        else if (choice2 == 11 && s[11] == '0')
        s[11] = mark;
        else if (choice2 == 12 && s[12] == '0')
        s[12] = mark;
        else if (choice2 == 13 && s[13] == '0')
        s[13] = mark;
    else
    printf("seat num is not avalible\n");
}

}
void time()
{
	printf("\n\nSelect your destination\n");
	printf("kathmandu-pokhara[1]\n");
	printf("Kathmandu-nepalganj[2]\n");
	printf("Kathmandu-Surkhet[3]\n");
	printf("Kathmandu-Chitwan[4]\n");
	scanf("%d",&p);
	switch(p)
	{
		case 1:
			printf("\n\n");
			printf("Kathmandu to Pokhara\n");
			printf("Time Duration: 30 min\n\n");
			printf("Depatuere[7:45Am]   Arrival[8:10AM]=[1]\n");
			printf("Depatuere[11:45AM]   Arrival[12:10PM]=[2]\n");
			printf("Select a time:\n");
			scanf("%d",&q);
		break;
		case 2:
			printf("\n\n");
			printf("Kathmandu to Nepalganj\n");
			printf("Time Duration: 45 min\n\n");
			printf("Depatuere[7:45Am]   Arrival[8:10AM]=[1]\n");
			printf("Depatuere[11:45AM]   Arrival[12:10PM]=[2]\n");
			printf("Select a time:\n");
			scanf("%d",&q);
		break;
		case 3:
			printf("\n\n");
			printf("Kathmandu to surkhet\n");
			printf("Time Duration: 1 hrs 10 min\n\n");
			printf("Depatuere[7:45Am]   Arrival[8:10AM]=[1]\n");
			printf("Depatuere[11:45AM]   Arrival[12:10PM]=[2]\n");
			printf("Select a time:\n");
			scanf("%d",&q);
		break;
		case 4:
			printf("\n\n");
			printf("Kathmandu to Chitwan\n");
			printf("Time Duration: 35 min\n\n");
			printf("Depatuere[7:45Am]   Arrival[8:10AM]=[1]\n");
			printf("Depatuere[11:45AM]   Arrival[12:10PM]=[2]\n");
			printf("Select a time:\n");
			scanf("%d",&q);
		break;
	}

}
void amount()
{ int a1,a2,a3,a4;
    a1=n1*4900;
    a2=n1*8000;
    a3=n1*9500;
    a4=n1*3000;
	if(p==1)
	printf("\nTotal amount:%d/-",a1);
	else if(p==2)
	printf("\nTotal amount:%d/-",a2);
	else if(p==3)
	printf("\nTotal amount:%d/-",a3);
	else if(p==4)
	printf("\nTotal amount:%d/-",a4);
	else
	printf("\nerror");
}
void numberofp()
{
	printf("number of passenger(max 12):\n");
	scanf("%d",&n1);
	if(n1==1)
	{
	printf("\t\tchoose seat number: \t");
    scanf("%d",&choice);
    printf("Seat No:%d\n",choice);
	}
	else if(n1==2)
	{
	printf("\t\tchoose seat number: \t");
    scanf("%d %d",&choice,&choice1);
	printf("Seat No:%d,%d\n",choice,choice1);	
	}
	else if(n1==3)
	{
	printf("\t\tchoose seat number: \t");
    scanf("%d %d %d",&choice,&choice1,&choice2);
	printf("Seat No:%d,%d,%d\n",choice,choice1,choice2);	
	}
}
void seat_no()
{
	if(n1==1)
	{
    printf("Seat No:%d\n",choice);
	}
	else if(n1==2)
	{
	printf("Seat No:%d,%d\n",choice,choice1);	
	}
	else if(n1==3)
	{
	printf("Seat No:%d,%d,%d\n",choice,choice1,choice2);	
	}
}
