/*Program to find out power and also have default value*/
#include <iostream>
using namespace std;

class power
{
private:
    double Answer;


public:
   
    double pow(double m, int n = 2) // default value
    {
        
        Answer = 1;
        for (int i = 0; i < n; i++)
        {
            Answer = Answer * m;
        }
        return Answer;
    }
    void display()
    {
        cout << Answer ;
    }
};
int main(int argm, char const *argn[])
{
    power math;
    double a, c;
    int b;
    cout << "Enter the Base Number:  \n" ;
    cin >> a;
    cout << "Enter the Power:  \n";
    cin >> b;
    c = math.pow(a, b);
    math.display();

    return 0;
}