#include<iostream>
#include<map>
#include<cstring>

using namespace std;

bool isAnagramma(string& p1, string& p2){
    map<char, int> mappa1;
    for(char c : p1){
        mappa1[c] = 0;
    }
    for(char c : p1){
        mappa1[c] += 1;
    }

    for(auto coppia : mappa1){
        cout<<coppia.first<<endl;
    }

    map<char, int> mappa2;
    for(char c : p2){
        mappa2[c] = 0;
    }
    for(char c : p2){
        mappa2[c] += 1;
    }

    return mappa1==mappa2;
}

int main(){

    string p1= "mondo";
    string p2 = "nodom";



    if(isAnagramma(p1, p2)){
        cout<<"sono anagramma";
    }else{
        cout<<"non sono anagramma";
    }

}