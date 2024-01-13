#include<bits/stdc++.h>
using namespace std;

class Sample{
    int attribute;

    public:

        Sample(int a)
        {
            cout << "Parameterized constructor invoked!" << endl;
            attribute = a;
        }

        // deep copy
        // copy constructor
        Sample(Sample &s)
        {
            cout << "Copy constructor invoked!" << endl;
            attribute = s.attribute;
        }

        void getter()
        {
            cout << "Attribute: " << attribute << endl;
        }
};

class Complex{
    int real;
    int imaginary;
    public:
        Complex(int r, int i)
        {
            real = r;
            imaginary = i;
        }

        // operator overloading
        Complex operator + (Complex &a)
        {
            Complex res(0, 0);
            res.real = real + a.real;
            res.imaginary = imaginary + a.imaginary;
            return res;
        }

        void getter()
        {
            cout << "Number: " << real << " + " << "i" << imaginary << endl;
        }
};

int main()
{
    //Sample s(20);
   // s.getter();

    //calls the copy constructor
     //Sample x(s);
     //Sample x = s;      //same as previous line
     //x.getter();


    Complex c(7, 8);
    // c.getter();

    Complex d(6, 9);
    // d.getter();

    Complex e = c + d;      //calls the operator overloading
    //e.getter();

    Complex f = d + e;
    f.getter();

    return 0;
}
