#include <iostream>
#include "stdlib.h"

using namespace std;
char gameBoard[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player='x';
int counter;
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
    if(player=='x')
        player='o';
        else
            player='x';

    }//enf of player turn

   void startGame(){
       int number;
       cout<<"Enter number please";
       cin>>number;

        if (number==1)
        {
          if(gameBoard[0][0]=='1')
            gameBoard[0][0]=player;
            else
                cout<<"number already used";
            startGame();
        }

        else if (number==2)
            {
          if(gameBoard[0][1]=='2')
            gameBoard[0][1]=player;
            else
                cout<<"number already used";
            startGame();
        }
        else if (number==3)
         {
          if(gameBoard[0][2]=='3')
            gameBoard[0][2]=player;
            else
                cout<<"number already used";
            startGame();
        }

        //gameBoard[0][2]=player;
        else if (number==4)
         {
          if(gameBoard[1][0]=='4')
            gameBoard[1][0]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[1][0]=player;
        else if (number==5)
         {
          if(gameBoard[1][1]=='5')
            gameBoard[1][1]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[1][1]=player;
        else if (number==6)
         {
          if(gameBoard[1][2]=='6')
            gameBoard[1][2]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[1][2]=player;
        else if (number==7)
         {
          if(gameBoard[2][0]=='7')
            gameBoard[2][0]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[2][0]=player;
        else if (number==8)
         {
          if(gameBoard[2][1]=='8')
            gameBoard[2][1]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[2][1]=player;
        else if (number==9)
         {
          if(gameBoard[2][2]=='9')
            gameBoard[2][2]=player;
            else
                cout<<"number already used";
            startGame();
        }
        //gameBoard[2][2]=player;
        }
   char winner(){
    if(gameBoard[0][0]=='x' && gameBoard[0][1]=='x' && gameBoard[0][2]=='x')
    return 'x';
    if(gameBoard[1][0]=='x' && gameBoard[1][1]=='x' && gameBoard[1][2]=='x')
    return 'x';
    if(gameBoard[2][0]=='x' && gameBoard[2][1]=='x' && gameBoard[2][2]=='x')
    return 'x';

    if(gameBoard[0][0]=='x' && gameBoard[1][0]=='x' && gameBoard[2][0]=='x')
    return 'x';
    if(gameBoard[0][1]=='x' && gameBoard[1][1]=='x' && gameBoard[2][1]=='x')
    return 'x';
    if(gameBoard[0][2]=='x' && gameBoard[1][2]=='x' && gameBoard[2][2]=='x')
    return 'x';

    if(gameBoard[0][0]=='x' && gameBoard[1][1]=='x' && gameBoard[2][2]=='x')
    return 'x';
    if(gameBoard[0][2]=='x' && gameBoard[1][1]=='x' && gameBoard[2][0]=='x')
    return 'x';

    if(gameBoard[0][0]=='o' && gameBoard[0][1]=='o' && gameBoard[0][2]=='o')
    return 'o';
    if(gameBoard[1][0]=='o' && gameBoard[1][1]=='o' && gameBoard[1][2]=='o')
    return 'o';
    if(gameBoard[2][0]=='o' && gameBoard[2][1]=='o' && gameBoard[2][2]=='o')
    return 'o';

    if(gameBoard[0][0]=='o' && gameBoard[1][0]=='o' && gameBoard[2][0]=='o')
    return 'o';
    if(gameBoard[0][1]=='o' && gameBoard[1][1]=='o' && gameBoard[2][1]=='o')
    return 'o';
    if(gameBoard[0][2]=='o' && gameBoard[1][2]=='o' && gameBoard[2][2]=='o')
    return 'o';
    if(gameBoard[0][0]=='o' && gameBoard[1][1]=='o' && gameBoard[2][2]=='o')
    return 'o';
    if(gameBoard[0][2]=='o' && gameBoard[1][1]=='o' && gameBoard[2][0]=='o')
    return 'o';


return '/';

   }
int main()
{
  counter=0;
    board();
    while(true){
    counter++;
    startGame();
    board();
//    playerTurn();
    if(winner()=='x')
        {
        cout<<"x wins";
        break;
        }
    else if(winner()=='o')
        {
        cout<<"o wins";
        break;
        }
    else if(winner()=='/' && counter==9)
    {
        cout<<"Its a DRAW";
        break;
    }
        playerTurn();

    }
    return 0;
}
