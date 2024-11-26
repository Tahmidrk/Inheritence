#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    double length,bredth;

};
class Rectangle:public Shape{
    public:
    double calculatearea(){
        return length*bredth;
    }
};
class Triangle:public Shape{
    public:
    double calculatearea(){
        return 0.5*length*bredth;
    }
};
int main(){
  
      Rectangle r;
        
         cout << "Enter the length and breadth: ";
        cin >> r.length >> r.bredth;
         cout << "Area of the rectangle is: " << r.calculatearea() << endl;
           Triangle t;
        cout << "Enter the base and height: ";
        cin >>t.length >> t.bredth;
        cout << "Area of the triangle is: " << t.calculatearea() << endl;
     
}