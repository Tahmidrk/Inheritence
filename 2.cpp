#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;

};

class student : public person{
    public:
    int rollno;
    
 
};
class Gradstudent : public student {
    public:
    string researchArea;
};

int main(){
  Gradstudent s1;
  s1.name="Takin";
  s1.researchArea="Ai";
  cout<<s1.name<<endl;
  cout<<s1.researchArea<<endl;
    return 0;
}