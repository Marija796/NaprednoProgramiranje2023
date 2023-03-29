#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Declare Functions used
int main()
{
short unsigned int score = 0;
short unsigned int compScore = 0;
short unsigned int num = 0;
short unsigned int num2 = 0;
short unsigned int compNum = 0;
short unsigned int compNum2 = 0;
short unsigned int sum = 0;
short unsigned int compSum = 0;
char letter;
//Declare Variables
srand(time(NULL));
while (letter != 'q')
{
cout << "Your Score: " << score << endl;
cout << "computer's Score: " << compScore << endl << endl;
cout << "Press r to roll or q to quit: ";
cin >> letter;
num = 1 + rand()%6;
num2 = 1 + rand() %6;
compNum = 1 + rand() %6;
compNum2 = 1 + rand() %6;
//Što se slucuva so redovite 32 do 36 i koi se vrednostite na promenlivite?
//Ovie redovi služat za generiranje na slucaen broj pomegu 1 i 6 i zacuvuvanje na rezultatite vo promenlivite num, num2, compNum i compNum2.


sum = num + num2;
compSum = compNum + compNum2;

//Calculate Sums

if (letter == 'q')
break;
if (letter != 'r')
{
system("cls");
continue;
}

switch (num)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default://Dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
//Ne, redovite 71 i 72 ne se neophodni, bidejki tie se dostignuvaat samo vo slucaj na greška vo prvite dva switch blokovi. Tie go pecatat tekstot "Error..." koga ne e pronajden odgovarac vo switch blokovite.
cout << "Error...";
break;
} //end switch

switch (num2)
{
case 1:
one();
break;
case 2:
two();
break;
case 3:
three();
break;
case 4:
four();
break;
case 5:
five();
break;
case 6:
six();
break;
default:// 
cout << "Error...";
break;
} //end switch

cout << endl << "Yours: " << num << ", " << num2 << endl;
cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Display dice and numbers

if (sum > compSum)
{
cout << "You won!!" << endl << endl;
score++;
}
else
{
compScore++;
cout << "you lost..." << endl << endl;
}

//Što rabotat naredbite 119 i 120?
//Naredbata 119 go pecati rezultatot od igrata (dali igracot pobedil ili zagubil), a naredbata 120 ceka da se pritisne kopce pred da go izbriše ekranot i da zapocne nova igra.

system("pause");
system("cls");


}
return 0;
}

void one()
{
cout << "-----" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "-----" << endl;
}
void two()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "|   |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void three()
{
cout << "-----" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "| O |" << endl;
cout << "-----" << endl;
}
void four()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|   |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void five()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "| O |" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
void six()
{
cout << "-----" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "|O O|" << endl;
cout << "-----" << endl;
}
///Ovoj kod e igra na zarovi megu korisnikot i kompjuterot.
//Korisnikot i kompjuterot imaat dva zara, so koi treba da gi sobiraat nivnite vrednosti, i toa se slucuva koga korisnikot pritiska na kopceto "r".
//Korisnikot i kompjuterot dobivaat poeni spored toa koj zbir e pogolem, i igrata prodolžuva sè dodeka korisnikot ne pritisne na kopceto "q" za da ja napušti igrata.
//Pri sekoe pritiskanje na kopceto "r", programata ja povikuva funkcijata koja ja iscrtuva vizuelizacijata na zarovite.