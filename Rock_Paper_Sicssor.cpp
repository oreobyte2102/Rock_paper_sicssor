#include <iostream>
#include<stdlib.h>
#include<ctime>
#include<conio.h>
using namespace std;

int main()
{
    cout<<"  ----------------------------------------------\n";
    cout<<"             Rock  Paper  Scissor   \n";
    cout<<"  ----------------------------------------------\n";
    string player_name;
    int player_score=0,computer_score=0,rounds;
    cout<<"Enter your name: ";
    cin>>player_name;
    cout<<"How many rounds you want to play ?";
    cin>>rounds;
    cout<<"press any key to continue";
    system("cls");

    for(int round=1;round<=rounds;round++)
    {
        int player_choice,computer_choice;
        cout<<"\n\n\n";
        cout<<"\n round no: "<<round<<"/"<<rounds<<endl;
        cout<<player_name<<"'s score = "<<player_score<<endl;
        cout<<"computer's score = "<<computer_score<<endl;
        cout<<"\n\n";
        cout<<"Enter your choice: "<<endl;
        cout<<"1. Rock \n"<<"2. Paper \n"<<"3. Scissor \n";
        do{
           cin>> player_choice;
        }while(player_choice != 1 && player_choice != 2 && player_choice != 3);
        srand(time(0));
        computer_choice = (rand()%3)+1;
        cout<<"computer choose  "<< computer_choice;
        if(player_choice == 1 && computer_choice == 3)
        {
            cout<<"\n player win !!"<<endl;
            player_score++;
        }
        else if(player_choice == 2 && computer_choice == 1)
        {
            cout<<"\n player win !!"<<endl;
            player_score++;
        }
        else if(player_choice == 3 && computer_choice == 2)
        {
            cout<<"\n player win !!"<<endl;
            player_score++;
        }
        else if(player_choice == computer_choice)
        {
            cout<<"\n It's a draw !!"<<endl;
        }
        else{
            cout<<"\n computer wins !!";
            computer_score++;
        }
        cout<<"\n Press any key t continue.......";
        getch();
        system("cls");
    }
    cout<<"\n";
    cout<<"\n Result..........\n";
    cout<<player_name<<"'s score is "<<player_score<<endl;
    cout<<"Computer's score is "<<computer_score<<endl;
      if(player_score > computer_score)
      {
          cout<<"\n\n\n"<<"Congratulations!!! "<<player_name<<" won the game. ";
      }
      else if (player_score < computer_score)
      {
          cout<<"\n\n\n"<<"Computer won the game !!!";
      }
      else
      {
          cout<<"\n\n\n"<<"It's a draw game !!!";
      }
    return 0;
}
