#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char str1[] = "123";
    char str2[] = "3.14";

    // utilizzo di atoi per convertire una stringa in un intero
    int num1 = atoi(str1);
    // ci sommo 1000 cosi ti faccio vedere che la stringa è diventato un numero
    num1 = num1 + 1000;
    cout << "Il valore di num1 e': " << num1 << endl;

    // utilizzo di atof per convertire una stringa in un numero float
    double num2 = atof(str2);
    // sommo 1000 a caso sempre per farti vedere che è effettivamente un numeor ora, e non più una stringa
    num2 = num2 + 1000;
    cout << "Il valore di num2 e': " << num2 << endl;

    return 0;
}
