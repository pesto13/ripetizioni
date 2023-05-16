#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    strcpy(str, "Hello, World!");
    int len = strlen(str);

    // inversione della stringa
    for(int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    cout << "La stringa invertita e': " << str << endl;

    return 0;
}
