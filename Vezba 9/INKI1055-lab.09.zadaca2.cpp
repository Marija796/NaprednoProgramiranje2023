#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() 
{
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    cin.ignore(); // Ova se pravi za da se ignorira prethodniot enter koga korisnikot vnesuva ime na fajlot.

    // Otvoranje na fajlot za dodavanje na tekst
    ofstream outFile(filename, ios::app);

    if (!outFile) 
    {
        // Fajlot ne može da se otvori
        cerr << "Error: Could not open file for writing." << endl;
        return 1;
    }

    string textToAdd;
    cout << "Enter text to add to file: ";
    getline(cin, textToAdd);

    // Dodavanje na tekst vo fajlot
    outFile << textToAdd << endl;

    // Zatvaranje na fajlot
    outFile.close();

    return 0;
}