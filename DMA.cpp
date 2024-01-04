#include<iostream>
using namespace std;
class Student
{
    public:
   string name;
   int age,roll_no;
   string grade;
};

int main()
{
   Student *p = new Student;
   (*p).name="shubham";
   (*p).age=21;
   (*p).roll_no=57;
    p->grade="A+";
   cout<<p->name<<" ";
   cout<<p->age<<" ";
   cout<<p->roll_no<<" ";
   cout<<p->grade<<" ";

}