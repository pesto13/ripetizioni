#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char arr1[] = "Hello ";
    char arr2[] = "world!";
    int size1 = strlen(arr1);
    int size2 = strlen(arr2);
    char result[size1 + size2 + 1];

    // con questo copio i primi size1 caratteri nella stringa destinazione, in questo caso result
    for(int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    // successsivamente aggiungo i caratteri della seconda stringa in result, nota come in reseult non riparto dalla posizione 0
    // ma da size1 (dove ero arrivato con la stringa prima) e mi sposto piano piano a destra
    for(int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }
    result[size1 + size2] = '\0';

    cout << "Concatenamento senza funzione: " << result << endl;

    return 0;
}
