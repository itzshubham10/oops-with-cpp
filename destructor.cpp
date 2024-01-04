#include<iostream>
using namespace std;

/*
    It is an instance member function that is invoked automatically whenvever an object is going to be        destroy.
    It is a last function that is going to be called before an object is destroyed.
    By default destructor is automatically created.
    but we can also create destructor.


    main function of destructor is to release all the memories which are dynamically created will be released.
*/

class Customer
{
    string name;
    int *balance;
    

    public:
    Customer()                       //constructor
    {
        this->name="rohit";
        balance= new int;
        *balance=10;
        cout<<"constructor is called"<<endl;
    }
    Customer(string name)
    {
        this->name=name;
        cout<<"constructor is "<<name<<endl;
        //constructor is called order wise as object is created
    }

    ~Customer()                //destructor    
    {
        this->name=name;
        cout<<"destructor is"<<name<<endl;

        // destructor is called in reverse order
        
    }
};


int main()
{
    Customer A1("1"),A2("2"),A3("3");
}