#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

const string filePath = "spo.txt";

void estrapolaAutoreTitolo(string riga, string &autore, string &titolo) {
    autore = "";
    titolo = "";

    int delimiterPos = riga.find('-');
    int pipePos = riga.find('|');
     
    autore = riga.substr(0, delimiterPos-1);
    titolo = riga.substr(delimiterPos + 2, pipePos - delimiterPos - 2);
}

void leggifile(map<string, vector<string>>& mappa, ifstream& file) {
    string riga;

    vector<string> artistiConsentiti = {
        "The Weeknd",
        "Lady Gaga",
        "Queen",
        "Oasis",
        "The Police",
        "Guns N' Roses",
        "Coldplay",
        "Ed Sheeran",
    };

    if (file.is_open()) {
        while (getline(file, riga)) {
            string artistName;
            string songTitle;

            // mette dentro a artistName e a songTitle i valori corrretti estratti da riga
            estrapolaAutoreTitolo(riga, artistName, songTitle);
            // cout<<artistName<<endl;
            if (find(artistiConsentiti.begin(), artistiConsentiti.end(), artistName) != artistiConsentiti.end()) {
                if (!artistName.empty()) {
                    mappa[artistName].push_back(songTitle);
                }
            }

        }


        file.close();
    }
}

int main() {
    map<string, vector<string>> mappa;
    ifstream filename(filePath);
    
    
    leggifile(mappa, filename);

    for (const auto& coppia : mappa) {
        cout << endl << "*** " << coppia.first << " ***"<< endl;
        for (const auto& canzone : coppia.second) {
            cout << canzone << " ";
        }
    }

    return 0;
}
