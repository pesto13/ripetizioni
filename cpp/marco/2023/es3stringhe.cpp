#include<iostream>
using namespace std;
#include<cstring>

int main(){
    const int MAX = 100;
    char sc[MAX], sb[MAX];
    int i, j = 0;
    cout<<"insierisci stringa";
    gets(sb);
    
    cout<<sb<<endl<<endl;

    for(i=0;i<strlen(sb);i++){
        sb[i] = tolower(sb[i]);
    }

    cout<<sb<<endl<<endl;
    
    for(i=0;i<strlen(sb)+1;i++){
        if(sb[i]!=' '){
            sc[j] = sb[i];
            j++;
        }
    }

    //  sc[j] = '\0';

    cout<<sc;
    
    return 0;
}