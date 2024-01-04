#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc;
    int balance;

    public:
    Customer()              //by default constructor
    {
        name="rohit";
        acc=4567;
        balance=23000;
    }

    // we can make more than one constructor for a class

    Customer(string name,int acc,int balance)                 //parametarized constructor
    {
        this->name=name;
        this->acc=acc;
        this->balance=balance;  //'this' pointer is use to store the address of current object,iske through object ke variable ko access kar skte h; 
    }
    Customer(string name,int acc )
    {
        this->name=name;
        this->acc= acc;
        this->balance=7000;

    }

    Customer(Customer &B)      //reference is passed of A3 to copy constructor.
    {
        name= B.name;
        acc = B.acc;
        balance = B.balance;
    }

    void display()
    {
        cout<<name<<" ";
        cout<<acc<<" ";
        cout<<balance<<endl;
    }


    // when their are more then one constructor having same name but differnt paramenter it is called "constructor  overloading".
};

int main()
{
    Customer A1("shubham",1234,5000000);
    A1.display();

    Customer A2;        //when we create a object, customer is called accordingly to that object, if we create a constructor by our own,then system will not create by their own.
    A2.display();

    Customer A3("gautam",3526);
    A3.display();


    Customer A4(A3);                //copy constructor,  by default class has a copy constructor 
    A4.display();

    Customer A5;
    A5=A1;
    A5.display();                   //assignment operator
}