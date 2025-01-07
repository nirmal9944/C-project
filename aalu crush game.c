#include<stdio.h>
#include<stdlib.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int player,choice;
int checkforwin();
void displayboard();
void markboard (char mark);
int main()
{ 
   int gamestatus;
   char mark;
   player=1;
   do{
   	  displayboard();
   	  player=(player%2)?1:2;
   	  printf("player %d enter the number :",player);
   	  scanf("%d",&choice);
   	  mark=(player==1)?'X':'O';
   	  markboard(mark);
   	  gamestatus=checkforwin();
   	  player++;
   }while(gamestatus==-1);
   if(gamestatus==1){
   	printf("==>Player %d is win",--player);
   }
   else{
   	printf("==>draw the game");
   }
   return 0;
}
int checkforwin()
{
	int returnvalue=0;
	if(box[1]==box[2]&&box[2]==box[3]){
		returnvalue=1;
	}
	else if (box[4]==box[5]&&box[5]==box[6]){
		returnvalue=1;
	}
	else if (box[7]==box[8]&&box[8]==box[9]){
		returnvalue=1;
	}
	else if (box[1]==box[4]&&box[4]==box[7]){
		returnvalue=1;
	}
	else if (box[2]==box[5]&&box[5]==box[8]){
		returnvalue=1;
	}
	else if (box[3]==box[6]&&box[6]==box[9]){
		returnvalue=1;
	}
	else if (box[1]==box[5]&&box[5]==box[9]){
		returnvalue=1;
	}
	else if (box[3]==box[5]&&box[5]==box[7]){
		returnvalue=1;
	}
	else if(box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9'){
		returnvalue=0;
	}
	else{
		returnvalue=-1;
	}
}
void displayboard()
{
	system("slc");
     printf("\n===TIC TAC TOE=== \n");
     printf("Player 1 is (O) & Player 2 is (X)");
		printf("TWO PLAYERS AALU CRUSH GAME\n\n");
	printf("        |     |     \n");
	printf("     %c  |  %c  |  %c \n",box[1],box[2],box[3]);
	printf("   _____|_____|_____\n");
	printf("        |     |     \n");
	printf("     %c  |  %c  |  %c \n",box[4],box[5],box[6]);
	printf("   _____|_____|_____\n");
	printf("        |     |     \n");
	printf("     %c  |  %c  |  %c \n",box[7],box[8],box[9]);
	printf("        |     |     \n");
}
void markboard(char mark)
{
   if(choice==1&&box[1]=='1'){
   	box[1]=mark;
   }
   else if(choice==2&&box[2]=='2'){
   	box[2]=mark;
   }
    else if(choice==3&&box[3]=='3'){
   	box[3]=mark;
   }
    else if(choice==4&&box[4]=='4'){
   	box[4]=mark;
   }
    else if(choice==5&&box[5]=='5'){
   	box[5]=mark;
   }
    else if(choice==6&&box[6]=='6'){
   	box[6]=mark;
   }
    else if(choice==7&&box[7]=='7'){
   	box[7]=mark;
   }
    else if(choice==8&&box[8]=='8'){
   	box[8]=mark;
   }
    else if(choice==9&&box[9]=='9'){
   	box[9]=mark;
   }
   else 
  {
  	printf("invalid input\n");
  }	
}
