//Марија Михајловска ИНКИ1055
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
string joker = "Joker";
void shuffleDeck(string deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
int main() {
    string deck[DECK_SIZE];
    int index = 0;
    //направи шпил од карти
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < SUIT_SIZE; j++) {
            deck[index] = ranks[j] + " of " + suits[i];
            index++;
        }
    }
    //додај ги џокерите на шпилот
    deck[52] = joker;
    deck[53] = joker;
    srand(time(NULL)); // seed random number generator
    //испечати го неизмешаниот шпил
    cout << "Unshuffled Deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    //измешај го шилот
    shuffleDeck(deck, DECK_SIZE);
    //испечати го измешаниот шпил
    cout << "\nShuffled Deck:" << endl;
    for (int i = 0; i < DECK_SIZE; i++) {
        cout << deck[i] << endl;
    }
    return 0;
}
//Кодот го меша шпилот со карти.
// Кодот потоа го отпечатува неизмешаниот шпил и за секоја карта во неизмешаниот шпил, го отпечатува  рангот проследен со празно место, а потоа и симболот.
//По мешањето, ја отпечатува измешаната палуба со рангирањето на секоја карта проследено со празно место, а потоа и нејзиниот симбол.
//Главната функција започнува со декларирање на низа наречена „deck“ која ќе содржи 54 карти.
//Создава генератор на случаен број користејќи време (NULL), така што секогаш кога ја извршуваме оваа програма, добиваме различни резултати од нашиот генератор на случаен број 

