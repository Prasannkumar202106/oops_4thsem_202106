#include<iostream>
using namespace std;

class AreaOfWall{

    private:
        int length, width;

    public:
        AreaOfWall(){ }; // default constructor

        AreaOfWall(int len, int wdt){  // (A) Demonstration of parameterized constructor
            cout<<"\n  Parameterized constructor with two arguments"<<endl;
            length=len;
            width=wdt;
        }

        AreaOfWall(AreaOfWall &obj){    // (B) Demonstration of copy constructor
            cout<<"\n  Copy constructor "<<endl;
            length=obj.length;
            width=obj.width;
        }

        AreaOfWall(int len){   // (C) Demonstration of constructor overloading
            cout<<"\n  Constructor Overloading ( Parameterized constructor with one argument.)"<<endl;
            length = len;
            width = len;
        }

        double calculateArea(){
            return length*width;
        }

        void display(){
            cout<<"   The Area of Wall is : "<< calculateArea() <<endl;
        }
};
int main(){

    AreaOfWall Wall01(8,7);
    Wall01.display();

    AreaOfWall Wall02(Wall01);
    Wall02.display();

    AreaOfWall Wall03(9);
    Wall03.display();

    return 0;
}