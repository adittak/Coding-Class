#include<bits/stdc++.h>
using namespace std;

class Matrix
{
    int row;
    int column;
    int arr[10][10];
public:
    Matrix(int r, int c)
    {
        row = r;
        column = c;
    }

    void setter()
    {
        cout << "Enter values of the Matrix: " << endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>arr[i][j];
            }
        }
    }

    void display()
    {
        cout << "The Matrix: " << endl;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator + (Matrix x)
    {
        Matrix m(row, column);

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                m.arr[i][j] = arr[i][j] + x.arr[i][j];
            }
        }

        return m;
    }

    Matrix operator - (Matrix x)
    {
        Matrix m(row, column);

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                m.arr[i][j] = arr[i][j] - x.arr[i][j];
            }
        }

        return m;
    }
};

int main()
{
    Matrix m1(2, 2);
    m1.setter();
    // m1.display();
    Matrix m2(2, 2);
    m2.setter();
    // m2.display();

    Matrix m3 = m1 + m2;
    m3.display();

    Matrix m4 = m1 - m2;
    m4.display();

    return 0;
}
