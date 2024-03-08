#include<iostream>
using namespace std;
#include<cstring>

int main(){
    const int MAX = 32;
    char sa[MAX], sb[MAX], sc[MAX], sd[2*MAX];
    // sd[0] = '\0';
    cout<<"insierisci stringa";
    cin>>sa;
    cout<<"insierisci stringa";
    cin>>sb;

    strcpy(sc, sa);

    cout<<sc;

    cout<<endl;

    strcpy(sd, sa);
    strcat(sd, sb);

    cout<<sd;

    return 0;
}