#include<bits/stdc++.h>
using namespace std;

// model / blueprint: user-defined data type

// access specifier: private, public, protected

// default copy constructor follows shallow copy

class car{
    string model;
    int speed;
    string color;
    int announcedYear;

public:
    // default constructor
    car()
    {
        cout << "default constructor invoked" << endl;
    }

    // parameterized constructor
    car(string m, int s, string c, int a)
    {
        model = m;
        speed = s;
        color = c;
        announcedYear = a;
        cout << "parameterized constructor invoked" << endl;
    }

    // copy constructor
    // deep copy
    car(car &c)
    {
        cout << "copy constructor invoked" << endl;
        model = c.model;
        speed = c.speed;
        color = c.color;
        announcedYear = c.announcedYear;
    }


    // operator overloading
    bool operator ==(car &c)
    {
        // if(model == c.model && speed == c.speed && color == c.color && announcedYear == c.announcedYear) return true;
        // else false;
        return (model == c.model && speed == c.speed && color == c.color && announcedYear == c.announcedYear);
    }

    // getter
    void getInfo()
    {
        cout<<" Model: " << model << endl;
        cout<<" Speed: " << speed << endl;
        cout<<" Color: " << color << endl;
        cout<<" Announced Year: " << announcedYear << endl;
    }


    // setter
    void setInfo()
    {
        string m;
        cin>>m;
        model = m;

        int s;
        cin>>s;
        speed = s;

        string c;
        cin>>c;
        color = c;

        int a;
        cin>>a;
        announcedYear = a;
    }
};

int main()
{
    // car c[3]; // object / instance

    /*
    c1.model = "Audi";
    c1.speed = 140;
    c1.color = "Red";
    c1.announcedYear = 2022; */

    /*
    for(int i=0;i<3;i++)
    {
        c[i].setInfo();
    }

    for(int i=0;i<3;i++)
    {
        c[i].getInfo();
    }*/

    car a("a", 124, "red", 2023); // parameterized
    car b; // default

    car c = a;      //calls copy constructor
    c.getInfo();

    if(b == a) cout << "yes" <<endl;
    else cout << "no" << endl;


    /* string c = (a==b) ? "yes" : "no";
    cout << c <<endl; */

    return 0;
}
