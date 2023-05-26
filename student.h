#include <iostream>
using namespace std;

class student{
private:
  long id;
  int age;
  string name;

public:
   void set_name(string);
   void print_name();
   void set_age(int);
   int get_age();
};


void student::set_name(string n){
  name=n;  
  
}
void student::print_name(){
  cout<<"Name:"<<name<<endl;
}

void student:: set_age(int a){
    age=a; }

int student:: get_age(){
  return age;  }
