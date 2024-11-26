#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    
    int rollno;
};
class Teacher:public Person{
    public:
    string subject;
    
};

class TA: public Student, public Teacher{//multiple inheritence

};
int main(){
    Teacher t1;
    t1.name="Rana";
    t1.subject="Engineering";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
}