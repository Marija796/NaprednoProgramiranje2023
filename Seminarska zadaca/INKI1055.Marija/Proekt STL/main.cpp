#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Definirajte ja strukturata Covek so sostavni elementi  redboj, Ime i poeni
struct Covek {
    int redboj;
    string Ime;
    float poeni;

// Metod za sortiranje na strukturata po poeni po opagacki redosled
    static bool sort_by_poeni(const Covek& a, const Covek& b) {
        return a.poeni > b.poeni;
    }
};

int main() {
    vector<Covek> records; // Inicijaliziraj go vektorot na zapisite na strukturata Covek

   // Popolni go vektor so zapisi
    records.push_back({1, "Marija", 8.5});
    records.push_back({2, "Ana", 7.2});
    records.push_back({3, "Sofija", 9.8});
    records.push_back({4, "Jana", 6.3});
    records.push_back({5, "Ivan", 9.2});
    records.push_back({6, "Luka", 7.8});
    records.push_back({7, "Sara", 8.9});

    // Ispecati  ja sodrzinata na vektorot
    cout << "Sodrzina na vektorot pred sortiranjeto:\n";
    for (auto it = records.begin(); it != records.end(); ++it) {
        cout << "Reden broj: " << it->redboj << " Ime: " << it->Ime << " Poeni: " << it->poeni << endl;
    }

    // Sortiraj  go vektorot po poeni korist?ejki go metodot sort_by poeni
    sort(records.begin(), records.end(), Covek::sort_by_poeni);

    // Ispecati  ja sortiranata sodržina na vektorot
    cout << "\nSodrzina na vektorot posle sortiranjeto:\n";
    for (auto it = records.begin(); it != records.end(); ++it) {
        cout << "Reden broj: " << it->redboj << " Ime: " << it->Ime << " Poeni: " << it->poeni << endl;
    }

  // Za?uvaj ja sodrzinata na vektorot vo datoteka so ime „INKI1055.Marija“
    ofstream file("INKI1055.Marija");
    if (file.is_open()) {
        for (auto it = records.begin(); it != records.end(); ++it) {
            file << it->redboj << "," << it->Ime << "," << it->poeni << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file for writing.\n";
    }

    return 0;
}
