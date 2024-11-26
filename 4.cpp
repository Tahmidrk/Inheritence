#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    public:
    int rollno;
};

class Teacher: public Person{
    string subject;
};

int main(){
    Teacher t;
    t.name="sakib";
    cout<<t.name<<endl;
}