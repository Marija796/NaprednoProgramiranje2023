#include <iostream>
#include <string>
#include <ctype.h>
#include <cctype>
using namespace std;

int main() {
	int gBukvi=0, mBukvi=0, br=0, specZnaci=0, k=0;
	cout<<"\n Vnesete recenica: \n";
	
	char str[100] = {0};
	cin.getline(str,100);
	
	for(int i=0; i<sizeof(str); i++) {
		if(str[i] != ' ') {
			if(isalnum(str[i])) {
				if(islower(str[i])) mBukvi++;
				else if(isupper(str[i])) gBukvi++;
				else if(isdigit(str[i])) br++;
 			}	
			else if(ispunct(str[i]))specZnaci++;
			}
	}
	k=mBukvi+gBukvi+br+specZnaci;
	
	cout<<"\n Vo recenicata ima: "<<mBukvi<<" mali bukvi, "<<gBukvi<<" golemi bukvi, "<<br<<" brojki, "<<specZnaci<<" specijalni znaci.";
	cout<<"\n Vkupno ima "<<k<<" karakteri.";
}