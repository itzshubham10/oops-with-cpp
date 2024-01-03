#include<iostream>
using namespace std;



//  class is a user defined datatype
// it's a blueprint for creating a class.
// class contains datas and methods
// class provide features like privacy,validity more reliablity
//  by default class members are private, we can make it accessible from outside the class by using public access modifier.

class student
{
    public:           //by default c++ classes are private
    string name;
    int age,roll_no;
    string grade;
}; 

int main()
{
    student s1,s2;    //here s1 and s2 are objects of student class
    s1.name="shubham";
    s1.age=10;
    s1.roll_no=57;
    s1.grade="A+";
    cout<<"Name : "<<s1.name<<endl;

    s2.grade="B+";
    s2.roll_no=20;
    cout<<"Grade of Student with roll no " <<s2.roll_no<< " is : "<<s2.grade<<endl;   //accessing class variable
}