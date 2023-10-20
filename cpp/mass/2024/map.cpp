#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

const string filePath = "spo.txt";

void estrapolaAutoreTitolo(string riga, string &autore, string &titolo) {
    autore = "";
    titolo = "";

    size_t delimiterPos = riga.find('-');
    size_t pipePos = riga.find('|');
    
   
    autore = riga.substr(0, delimiterPos);
    titolo = riga.substr(delimiterPos + 2, pipePos - delimiterPos - 2);
 
}

void leggifile(map<string, vector<string>>& mappa, ifstream& file) {
    string riga;

    if (file.is_open()) {
        while (getline(file, riga)) {
            string artistName;
            string songTitle;

            estrapolaAutoreTitolo(riga, artistName, songTitle);

            if (!artistName.empty()) {
                mappa[artistName].push_back(songTitle);
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
