// Program to show the concept of run time polymorphism using virtual function.

#include <iostream>
using namespace std;

// Declaration of Base class
class University
{
public:
    // Usage of virtual constructor
    virtual void Number()
    {
        cout << "Number of students ";
    }
};

// Declaration of Derived calss
class Teachers : public University
{
public:
    void Number()
    {
        cout << "Number of Teachers.\n";
        cout << "Number of Teachers in university is 500.\n";
    }
};

// Declaration of 2nd derived class
class Students : public University
{
public:
    void Number()
    {
        cout << "Number of Student.\n";
        cout << "Numbers od students in university is 3000.\n";
    }
};

int main()
{

    // base class pointer
    University *U;
    Teachers t;

    // initilization of reference variable
    U = &t;

    // calling of Teachers function
    U->Number();

    Students s;

    // initilization of reference variable
    U = &s;

    // calling of Students functionp
    U->Number();

    return 0;
}