#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Funkcija za dobivanje na slucaen zbor od listata na zborovi
string get_random_word() {
    vector<string> words = {"jabolko", "banana", "portokal", "grozje", "krusa", "kivi"};
    random_shuffle(words.begin(), words.end());
    return words[0];
}

// Funkcija za inicijalizacija na nizata so prikazanite znaci
string get_display_string(const string& word, const vector<char>& guessed) {
    string display = "";
    for (char letter : word) {
        if (find(guessed.begin(), guessed.end(), letter) != guessed.end()) {
            display += letter;
        } else {
            display += "-";
        }
    }
    return display;
}

// Glavna funkcija
int main() {
    const int MAX_WRONG_GUESSES = 7;  // Maksimalen broj na grešni obidi

    string word = get_random_word();  // Izbor na slucaen zbor
    vector<char> guessed;  // Niza za cuvanje na znacite so koi se ima napraveno obid

    // Pocetna poraka za igracot
    cout <<"Dobredojdovte vo igrata na \"Hangman\". Zborot sto treba da go pogodite ima "
         << word.length() << " bukvi. Imate" << MAX_WRONG_GUESSES << " obidi za da go pogodite zborot" << endl;

    int wrong_guesses = 0;  //Brojac na gresni obidi

    // Se prodolzuva igrata se dodeka ne se pogodi zborot ili se iskoristat site obidi
    while (wrong_guesses < MAX_WRONG_GUESSES) {
        //Prikazuvanje na znacite so koi se ima napraveno obid
        cout <<  "Znaci so koj e napraven obid: ";
        for (char letter : guessed) {
            cout << letter << " ";
        }
        cout << endl;

        string display = get_display_string(word, guessed);  //Prikazuvanje na nizata sop prikazanite znaci
        cout << "Zborot: " << display << endl;

        //prikazuvanje broj na preostanati obidi
        int guesses_left = MAX_WRONG_GUESSES - wrong_guesses;
        cout << "Imate uste" << guesses_left << " obidi." << endl;

        // Vnes na znak od igracot
        cout << "Vnesete znak: ";
        char guess;
        cin >> guess;
        //Proverka dali veke ste napravile obid so ovoj znak
        if (find(guessed.begin(), guessed.end(), guess) != guessed.end()) {
            cout << "Veke se imate obideno so ovoj znak. Vnesete drug znak." << endl;
            continue;
        }

        guessed.push_back(guess);  //Dodavanje na znakot vo nizata na znaci koi se ima napraveno obid

        // Proverka dali vneseniot znak se pojavuva vo zborot
        if (word.find(guess) != string::npos) {
            cout << "Bravo!Znakot" << guess << " se pojavuva vo zborot" << endl;
        } else {
            cout << "Nevozmozno!Zankot " << guess << " ne se pojavuva vo zborot." << endl;
            wrong_guesses++;  // Zgolemuvanje na brojot na gresni obidi
        }

        //Proverka dali igracot go pogodil zborot
        if (get_display_string(word, guessed) == word) {
            cout << "Cestitki!Go pogodivte zborot \"" << word << "\"." << endl;
            return 0;
        }
    }

    // Ako igracot ne go pogodi zborot za maksimalniot broj obidi igerata zavrsuva
    cout << "Zalam, no ne go pogodivte zborot\"" << word << "\". Igrata zavrsi." << endl;
    return 0;
}
