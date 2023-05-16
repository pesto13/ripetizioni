#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char arr1[] = "Hello ";
    char arr2[] = "world!";
    char result[100];

    // concatenazione con strcat
    strcpy(result, arr1);
    strcat(result, arr2);

    cout << "Concatenamento con strcat: " << result << endl;

    return 0;
}
