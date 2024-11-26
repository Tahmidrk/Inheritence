//Multilevel inheritence
#include<bits/stdc++.h>
using namespace std;

class A1{
    public:
    string name;
    int age;
};

class A2:public A1{
    public:
    string subject;
};

class A3:public A2{
    public:
    int rollNo;
    void printDetails(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Subject:"<<subject<<endl;
        cout<<"RollNo:"<<rollNo<<endl;
    }
};

int main(){
    A3 a;
    a.name="Rakin";
    a.age=18;
    a.rollNo=131;
    a.subject="OOP";
    a.printDetails();
    
}