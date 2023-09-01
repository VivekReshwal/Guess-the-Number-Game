#include<iostream>
#include<ctime>
using namespace std;

int main() {
    int num;
    int guess; 
    int tries; //to store no. of tries

    srand(time(NULL));
    num = (rand() % 100) + 1;  //to generate a number between 1 and 100

    cout<<" ---GUESS THE NUMBER GAME---\n";

    do
    {
        cout<<"Guess a number between  1-100 : ";
        cin>>guess;
        tries++;

        if(guess > num ) {
            cout<< "Too High!\n";
        }
        else if (guess < num ) {
            cout<<"Too Low!\n";
        }
        else {
            cout<< "CORRECT! YOU TOOK "<<tries<<  " TRIES";
        }


        
    } while (guess != num);
    
}