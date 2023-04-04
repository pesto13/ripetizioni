// Exercises: Classes
// Exercise 1

#include <iostream>
using namespace std;

class CRectangle {
    private:
    int x[20],y[20];


    public:
    
    CRectangle(){
        x=0;
        y=0;
    }

    int area(){return x*y;}

    void set_xy(int a, int b){
        x = a;
        y = b;
    }
};



int main () {

    CRectangle rect;
    int a, b;
    cout<<"Enter length of rectangle:";
    cin>>a;
    cout<<"Enter breadth of rectangle:";
    cin>>b;

    rect.set_xy(a, b);

    cout <<"Area:"<< rect.area();

  
  return 0;
}