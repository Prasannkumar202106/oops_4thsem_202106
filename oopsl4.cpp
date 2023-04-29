/*Program to show that the effect of default argument can be alternitevly achived by overloading */
#include <iostream>
using namespace std;

class Power
{
private:
    double answer;

public:
    double calc(double m, int n)
    {
        answer = 1;
        for (int i = 0; i < n; i++)
        {
            answer = answer * m;
        }
        return answer;
    }
    double calc(double m)   
    {
        int n = 2;
        answer = 1;
        for (int i = 0; i < n; i++)
        {
            answer = answer * m;
        }
        return answer;
    }
    void display()
    {
        cout << answer << endl;
    }
};
int main(int argc, char const *argv[])
{
    Power math;
    double x, z;
    int y;
    cout << "Enter the Base Number" << endl;
    cin >> x;
    cout << "Enter the Power " << endl;
    cin >> y;
    z = math.calc(x, y);
    z = math.calc(x); // Default argument is replaced by overloading 
    math.display();

    return 0;
}