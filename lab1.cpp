#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
    int id_p;
    void printId_p(){
        cout<<"Base ID:"<<id_p<<endl;
    }
};

class Child:public Parent{
    public:
    int id_c;
    void printID_c(){
        cout<<"Child ID:"<<id_c<<endl;
    }
};

int main(){
    Child obj1;
    obj1.id_p=87;
    obj1.printId_p();
    obj1.id_c=9;
    obj1.printID_c();

    return 0;

}