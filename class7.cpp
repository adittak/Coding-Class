#include<bits/stdc++.h>
using namespace std;

/*
oop 4 principle:
    1. Encapsulation -> atribute + member functions / method; data hiding
    2. Abstraction -> hiding complex business logic, showing easier scenario
    3. Inheritance -> inherit (derived class, base class)
    4. Polymorphism -> poly = many, morph = type/structure/usage */


// Polymorphism -> Compile Time, Run Time
// Compile Time -> Function Overloading, Operator Overloading
// Run Time -> Virtual Function

class Sample{
    int attribute;
public:
    Sample()
    {
        cout << "default" << endl;
    }

    Sample(int a)
    {
        attribute = a;
    }

    void func()
    {
        cout << "No args" << endl;
    }

    void func(int a)
    {
        cout << "1 arg" << endl;
    }

    void func(int a, int b)
    {
        cout << "2 args" << endl;
    }
};

class A{
    int a;
public:
    void walk()
    {
        cout << "walking with 20m/s speed" << endl;
    }

    virtual void func()         //for instance if both class have the same named function. 
    {                           //then adding virtual would make the call for func() from class B instead of A
        cout << "A" << endl;
    }

    virtual void funcX()
    {
        cout << "X A" << endl;
    }
};

class B: public A{          //inherence only the public attributes from Class A
    int b;
public:
    void walk()
    {
        cout << "walking with 30m/s speed" << endl;
    }

    void func()
    {
        cout << "B" << endl;
    }

    void funcX()
    {
        cout << "X B" << endl;
    }
};

int main()
{
    // Sample s;
    // s.func(2, 3);

    A *ptr;
    B b;
    ptr = &b;

    ptr->walk();
    // ptr->func();
    // ptr->funcX();

    return 0;
}
