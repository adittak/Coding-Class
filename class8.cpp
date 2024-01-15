#include<bits/stdc++.h>
using namespace std;

class Test
{
    int n;
public:
    Test(int val)
    {
        n = val;
        cout << n;
    }
};

int main()
{
    int a = 10; // compile time -> stack        //declaring nomral int without new would make it save in the stack form
    string b ="hello";

    int arr[3];
    arr[0]=4;
    arr[1]=5;
    arr[2]=6;

    int* ptr = new int(10); // run time -> heap     //using new would save the memery in heap 
   // cout << *ptr << endl;
    string* p = new string("hi");        //it order to use new, it requires pointers
    //cout << *p;

    //Test t(5); // compile time
    Test* p2 = new Test(10); // run time
    delete p2;

    return 0;
}
