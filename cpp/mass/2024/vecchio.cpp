#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

const string posione_file = "dataset-Spotify.txt", artista = "Rihanna";

bool check_artista(string riga, int &index) {

    index=0;

    while(index<artista.length()) {
        if(riga[index]!=artista[index]) {
            return false;
        }
        index++;
    }
    return true;
}


string get_canzone(string riga, int &index) {

    while(riga[index]=='-' or riga[index]==' ') {

        index++;

    }

    string canzone = "";

    while(riga[index]!='|'){

        canzone+=riga[index];
        index++;

    }

    return canzone;

}



string get_daily(string riga, int &index) {

    index++;

    while(riga[index]!='|') {
        index++;
    }

    index++;
    string daily = "";
    while(riga[index]!='\r'){
        if(riga[index]!=',') {
            daily+=riga[index];
        }
        index++;
    }
    return daily;
}

int main() {

    int indice;
    string riga;
    map<string, string> mappa;
    vector<string> canzioni;
    ifstream lettura_file(posione_file);
    getline(lettura_file, riga);

    if(lettura_file.is_open()) {

        while(getline(lettura_file, riga)) {

            if (check_artista(riga, indice)) {
                string canzone, daily;
                canzone=get_canzone(riga, indice);
                daily=get_daily(riga, indice);
                canzioni.push_back(canzone);
                mappa[canzone]=daily;

            }

        }

        lettura_file.close();

    } else {

        cout<<"Non ho aperto il file";

    }

    sort(canzioni.begin(),canzioni.end());
    for (int i =0; i<canzioni.size(); i++) {
        cout<<canzioni[i]<<", "<<mappa[canzioni[i]]<<endl;

    }

}