#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age=age;
    }
  
};

class student : public person{
    public:
    int rollno;
    
    student(string name,int age, int rollno) : person( name, age){
        this->rollno;
    }
    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }

};

int main(){
    student s("Rakin",21,131);
    // s.name="Rakin";
    // s.age=21;
    // s.rollno=131;

    s.getInfo();
    return 0;
}