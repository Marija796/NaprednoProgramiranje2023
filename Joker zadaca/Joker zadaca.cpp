//Marija Mihajlovska INKI1055
#include <iostream>  
#include <cstdlib>   
#include <ctime>     
#include <string>    
using namespace std; 

const int size_of_deck = 54;   // Total number of cards in the deck
const int size_of_suit = 13;   // Number of cards in each suit
const int players = 4;         // Number of players in the game

string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};   // Array of suit names
string ranks[size_of_suit] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};  // Array of rank names
string joker = "Joker";   // Name of the joker card

// Function to shuffle the deck of cards randomly
void shuffleDeck(string deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}


int main() {
    string deck[size_of_deck];  // Array to store the deck of cards
    int index = 0;   // Counter variable for deck index

    string playerCards[players][size_of_suit];  // Array to store cards for each player

    int numCardsDealt = 0;  // Counter variable for number of cards dealt

    // Loop to create the deck of cards
    for (int i = 0; i < size_of_suit; i++) {
        for (int j = 0; j < 4; j++) {
            deck[index] = ranks[i] + " of " + suits[j];
            index++;
        }
    }

    // Add jokers to the deck
    deck[52] = joker;
    deck[53] = joker;

    srand(time(NULL));  // Seed the random number generator with the current time

    // Display the unshuffled deck of cards
    cout << "Unshuffled Deck:" << endl;
    for (int i = 0; i < size_of_deck; i++) {
        cout << deck[i] << endl;
    }

    // Shuffle the deck of cards
    shuffleDeck(deck, size_of_deck);

    // Display the shuffled deck of cards
    cout << "\nShuffled Deck:" << endl;
    for (int i = 0; i < size_of_deck; i++) {
        cout << deck[i] << endl;
    }

    // Deal cards to each player
    for (int i = 0; i < players; i++) {
        for (int j = 0; j < size_of_suit; j++) {
            playerCards[i][j] = deck[numCardsDealt];
            numCardsDealt++;
        }
    }

    // Display each player's cards
    for (int i = 0; i < players; i++) {
        cout << "\nPlayer " << i+1 << " Cards:" << endl;
        for (int j = 0; j < size_of_suit; j++) {
            cout << playerCards[i][j] << endl;
        }
        cout << endl;
    }
   
 return 0;

}
// Programata e napravena  vrz baza na primerot za mešanje na karti, i dodadeni se  2 džokeri.
//Prvo kartite gi pokažuvame podredeni  1 srce,1detelina,1 lokum,1 list, 2srce, 2detelina...
//Potoa gi pokažuvame kartite izmešani
//Na kraj kartite gi delime na 4 igra?i.