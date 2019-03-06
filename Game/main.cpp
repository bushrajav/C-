#include <iostream>
#include "stdlib.h"
using namespace std;
char gameBoard[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,col;
char player='x';
bool draw=false;
void board(){
    system("cls");
cout<<"\n\n\t\t\t\t    TICK TAC TOE GAME \n\n Player 1[x] \n\n Player 2[o] \n";
 cout<<"\t\t\t\t     |     |     \n";
 cout<<"\t\t\t\t  "<<gameBoard[0][0]<<"  |  "<<gameBoard[0][1]<<"  |  "<<gameBoard[0][2]<<endl;
 cout<<"\t\t\t\t_____|_____|_____\n";
 cout<<"\t\t\t\t     |     |     \n";
 cout<<"\t\t\t\t  "<<gameBoard[1][0]<<"  |  "<<gameBoard[1][1]<<"  |  "<<gameBoard[1][2]<<endl;
 cout<<"\t\t\t\t_____|_____|_____\n";
 cout<<"\t\t\t\t     |     |     \n";
 cout<<"\t\t\t\t  "<<gameBoard[2][0]<<"  |  "<<gameBoard[2][1]<<"  |  "<<gameBoard[2][2]<<endl;

}
void playerTurn(){
    int enterNumber;

    if(player=='x')
    cout<<"\n\n Player1[x] Please Enter Number:";

    if(player=='o')
    cout<<"\n\n Player2[o] Please Enter Number:";
    cin>>enterNumber;


  switch(enterNumber){
  case 1:row=0; col=0; break;
  case 2:row=0; col=1; break;
  case 3:row=0; col=2; break;
  case 4:row=1; col=0; break;
  case 5:row=1; col=1; break;
  case 6:row=1; col=2; break;
  case 7:row=2; col=0; break;
  case 8:row=2; col=1; break;
  case 9:row=2; col=2; break;
  default:
      cout<<"Invalid number\n";
      break;
      }


  if(player=='x' && gameBoard[row][col]!='x' && gameBoard[row][col]!='o' ){
    gameBoard[row][col]='x';
  player='o';
  }
  else if(player=='o' && gameBoard[row][col]!='x' && gameBoard[row][col]!='o'){
       gameBoard[row][col]='o';
  player='x';
  }
   else {
  cout<<"This number has already been used. Please try again\n";
  playerTurn();
   }

  board();
}
bool gameResult(){
//to check if someone wins the game
for(int i=0;i<3;i++){
if (gameBoard[i][0]==gameBoard[i][1] && gameBoard[i][0]==gameBoard[i][2] || gameBoard[i][0]==gameBoard[1][i] && gameBoard[i][0]==gameBoard[2][i])
        return false;
if (gameBoard[0][0]==gameBoard[1][1] && gameBoard[i][0]==gameBoard[2][2] || gameBoard[0][2]==gameBoard[1][1] && gameBoard[0][2]==gameBoard[2][0])
    return false;

        }
        // checking if game is finished or not
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    if(gameBoard[i][j]!='x' && gameBoard[i][j]!='o')
        return true;
draw=true;
return false;
}


int main()
{
 while(gameResult()){
 board();
 playerTurn();
gameResult();
 }
 if(player=='x' && draw==false)
    cout<<"Player 2[0] has won";
 else if(player=='o' && draw==false)
    cout<<"Player 1[x] has won";
else
cout<<"Draw";
return 0;
}
