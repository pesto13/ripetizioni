// vector::push_back
#include <iostream>
#include <vector>


using namespace std;
int main()
{
    vector<int> v = {1,23,445,2343,34,3,423,4};


    for (vector<int>::iterator it = v.begin(); it < v.begin() + 4 ; it++){
        cout<< *it << " ";
    }

    return 0;
}