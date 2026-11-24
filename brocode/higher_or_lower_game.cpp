#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

srand(time(nullptr));

char again;

do{
    int current= rand() % 13 +1;
    int streak =0;
    bool alive=true;

    cout<<"************HIGHER OR LOWER**************\n\n";

while(alive){
    cout<<"Current card: "<<current<<'\n';
    cout<<"Next card higher (h) or lower (l)?";
    char guess;
    cin>>guess;

    if(guess !='h'&& guess !='l'){

        cout<<"Enter h or l.\n";
        continue;
    }

    int next= rand()%13+1;
    cout<<"Next card: "<<next<<'\n';

    if(next==current){

        cout<<"Same card try again.\n";
    }
    else if ((guess=='h'&& next>current)|| (guess=='l'&& next<current))
    {
        streak++;
        cout<<"Correct! Streak: "<<streak<<'\n';
    }
    else{

        cout<<"Wrong game over.\n";
        alive=false;
    }

    current=next;
    
}   

cout<<"Your final streak: "<<streak<<'\n';
cout<<"Play again? (y/n)\n";
cin>>again;

}while (again =='y'|| again=='Y');

cout<<"Thanks for playing!\n";


    return 0;
}