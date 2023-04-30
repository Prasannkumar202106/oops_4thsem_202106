/*Write a program to create an abstract class named Shape that contains an empty method
named number Of Sides ().Provide three classes named Trapezoid, Triangle and Hexagon 
such that each one of the classes inherits the class Shape. Each one of the classes 
contains only the method number Of Sides () that shows the number of sides in the given 
geometrical figures.*/

#include <iostream>
using namespace std;

class Shape{
    protected:
    int sides;

    public:
    void setSide(int sides){ // getter
        this->sides=sides;
    }
    int getside(){  // setter
        return sides;
    }

    Shape(){   // default constructor
        this->sides=0;
    }

    virtual void NumberOfSides() = 0 ; // Virtual Function

};

class Triangle : public Shape{
    public:
    Triangle(int sides){
        this->sides=sides;
    }

    void NumberOfSides(){
        cout<<"Triangle has :"<<this->sides<<" sides."<<endl;
    }

};

class Trapezod : public Shape{
    public:
    Trapezod(int sides){
        this->sides=sides;
    }

    void NumberOfSides(){
        cout<<"Trapezod has :"<<this->sides<<" sides."<<endl;
    }

};

class Hexagon : public Shape{
    public:
    Hexagon(int sides){
        this->sides=sides;
    }

    void NumberOfSides(){
        cout<<"Hexagon has :"<<this->sides<<" sides."<<endl;
    }

};

int main(){
    Triangle Tri(3);
    Trapezod Tra(4);
    Hexagon Hex(6);

    Tri.NumberOfSides();
    Tra.NumberOfSides();
    Hex.NumberOfSides();
    
    return 0;


}