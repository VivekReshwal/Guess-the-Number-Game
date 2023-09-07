#include<iostream>
#include<ctime>
using namespace std;

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

char getPlayerChoice(){   //player will input the choice
    char player;
    cout<<" <----  Rock  Paper  Scissors Game  ---->\n\n";
    do
    {
     cout<<"Choose one of the following :  \n";
     cout<<"'r' for rock\n";
     cout<<"'p' for paper\n";
     cout<<"'s' for scissors\n";
     cin>>player;
     
       
    } while (player != 'r' && player != 'p' && player !='s');
}

char getComputerChoice() {

    srand(time(0));
    int num  =  rand() % 3 + 1; //to generate a number between 1-3

    if(num == 1) {  
        return 'r';
    }
    else if(num == 2){
        return 'p';
    }
    else if(num == 3){
        return 's';
    } 
} 

void showChoice(char choice){  //to show the choices
    if (choice == 'r')
    {
        cout<<" Rock\n";
    }
    else if(choice == 'p') {
        cout<<" Paper\n";
    }
    else{
        cout<<" Scissors\n";
    }

}
void chooseWinner(char player, char computer) {
     if (player == ROCK && computer == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (player == PAPER && computer == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (player == SCISSORS && computer == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (player == ROCK && computer == SCISSORS) {
        cout << "You Win! Rock smashes Scissors."<< endl;
        
    }
    else if (player == PAPER && computer == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (player == SCISSORS && computer == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again to win the Game." << endl;
    }
}
    
int main() {

    char player;
    char computer;

    player = getPlayerChoice();
    cout<<" Your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout<<" Computer's Choice : ";
    showChoice(computer);

    chooseWinner(player,computer);
    return 0;
}