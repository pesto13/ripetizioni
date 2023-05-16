#include <iostream>
#include <cctype> // necessario per tolower()

using namespace std;

int main() {
    char str[] = "HELLO WORLDDDD!";

    // conversione di tutti i caratteri della stringa in minuscolo
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    cout << "La stringa convertita in minuscolo e': " << str << endl;

    return 0;
}
