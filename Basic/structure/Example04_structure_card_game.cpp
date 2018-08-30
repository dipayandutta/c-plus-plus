#include <iostream>

using std::endl;
using std::cout;
using std::cin;

// constant variable declearation
const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card{
    int number;
    int suit;
};

int main(){
    
    card temp,chosen,prize; //structure variables
    int position;
    
    card card1 = {7,clubs};
    cout << "Card 1 is "<< clubs;
    cout << endl;
    
    card card2 = {ace,hearts};
    cout << ace << "of" << hearts;
    cout << endl;
    
    cout << "chose 1,2,or 3";
    cin >> position;
    cout << endl;
    
    prize = card2;
    
    switch(position){
        case 1: chosen = card1;
            break;
        case 2: chosen = card2;
            break;
        case 3: chosen = card3;
            break;
    }
    if (chosen.number == prize.card2){
        cout << "Right!!!";
    }
    else{
        cout << "Wrong!!";
    }
    cout << endl;
    
    cout << "Hit return to exit ";
    cout << endl;
    cin.ignore();
    cin.ignore();
    
    return 0;
}
