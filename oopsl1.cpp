// Program to read a matrix of size m * n //
#include <iostream>
#include <iomanip>
using namespace std;

void matrix(int m, int n)
{
    float **p;
    p = new float *[m];

    for (int i = 0; i < m; i++)
    {
        p[i] = new float[n];
    }
    cout << " Enter " << m << " by " << n << " matrix elements one by one " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            float value;
            cin >> value;
            p[i][j] = value;
        }
    }
    cout << " The given matrix is :" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << p[i][j] << "   ";
        }
        cout << "\n";
    }
}

int main()
{
    int row, col;
    cout << " Enter the size of matrix : ";
    cin >> row >> col;
    matrix(row, col);
    return 0;
}
