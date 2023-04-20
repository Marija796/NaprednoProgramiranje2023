//Marija Mihajlovska INKI1055
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
class date
{
private:
	int day, month, year;
public:
	date() {}
	friend void operator>>(istream& in, date& d); //Overloading >> operator
	friend void operator<<(ostream& out, date& d) //Overloading << operator
		
	{
		out << "\n Date : ";
		out << d.day;
		out << "/";
		out << d.month;
		out << "/";
		out << d.year;
	}
	~date() {}
};

void operator>>(istream& in, date& d)

{
	cout << "\n Enter Day : ";
	in >> d.day;
	cout << "\n Enter Month : ";
	in >> d.month;
	cout << "\n Enter Year : ";
	cin >> d.year; 
	cout << "\n ------------------";
	switch (d.month)
	{

	case 1: //January
	case 3: //March
	case 5: //May
	case 7: //July
	case 8: //August
	case 10: //October
	case 12: //December
		if (d.day > 31)
		{
			cout << "\n Invalid Days ";
			exit(0);
		}
		break;
	case 4: //April
	case 6: //June
	case 9: //September
	case 11: //November
		if (d.day > 30)
		{
			cout << "\n Invalid Days ";
			exit(0);
		}
		break;
	case 2:
		if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))
		{
			if (d.day > 29)
			{
				cout << "\n Invalid Days ";
				exit(0);
			}
		}
		else
		{
			if (d.day > 28)
			{
				cout << "\n Invalid Days ";
				exit(0);
			}
		}
		break;
	}
}

void vreme()
{
	int hour, min, sec;

	cout << "Enter the hour: ";
	cin >> hour;

	cout << "Enter the minute: ";
	cin >> min;

	cout << "Enter the second: ";
	cin >> sec;

	cout << "The time entered is: " << hour << ":" << min << ":" << sec << endl;

}
int main()
{
	date d;
	cout << "\n Enter Date: \n";
	cout << "\n ";
	cin >> d;
	cout << d;
	cout<<"\n";

	cout << "Enter Time: ";
	cout << "\n";
	vreme();
	return 0;
}
//Ovoj kod pretstavuva implementacija na klasata date koja sodrži datum sostaven od den, mesec i godina.
//Klasata ima preoptovareni operatori za vlez (>>), odnosno za izlez (<<) koi ni ovozmožuvaat da vnesuvame i prikažuvame datum. Ovie operatori go koristat cin za vlez i cout za izlez.
//Oddelnata funkcija vreme() služi za vnesuvanje na vremeto vo ?asovi, minuti i sekundi.
//Vo funkcijata main() korisnikot se prašuva da vnese datum, potoa vnesuva vreme i na krajot se prikažuvaat vnesenite datum i vreme.

//Funkcijata friend što koristi overload operator nudi podobra fleksibilnost na klasata.
//Ovie funkcii ne se ?lenovi na klasata i nemaat pokažuva? .
//Koga preoptovaruvame unaren operator, mora da pomineme eden argument.
//Koga preoptovaruvate binaren operator treba da pomineme dva argumenti.
//Funkcijata friend može direktno da pristapi do privatnite ?lenovi na klasata.