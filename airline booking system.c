#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
void gotoxy();
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{

    int i,j,k,l;
    printf(" ");
    for(i=1;i<31;i++)
	{
		printf("%c",220);
	}
	printf("\n");
	for(j=1;j<20;j++)
	{
		printf(" %c\n",221);
	}
	for(k=1;k<20;k++)
	{
		gotoxy(30,k);
		printf("%c\n",222);
	}
	for(l=1;l<31;l++)
	{
		gotoxy(l,20);
		printf("%c",223);
	}
	char name[14];
	int roll;
	int cl;
	char s[4];
	gotoxy(3,2);
	printf("========Online Form======\n");
	gotoxy(3,4);
	printf("  Full Name:");
	gotoxy(3,5);
	printf("  Class:");
	gotoxy(3,6);
	printf("  Roll.No:");
	gotoxy(3,7);
	printf("  Section:");
	gotoxy(15,4);
	scanf("%s",&name);
	gotoxy(15,5);
	scanf("%d",&cl);
	gotoxy(15,6);
	scanf("%d",&roll);
	gotoxy(15,7);
	scanf("%s",&s);
	getch();
	return 0;
}
