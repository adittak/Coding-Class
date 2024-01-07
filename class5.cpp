#include<bits/stdc++.h>
using namespace std;

void sampleFunc(int x)
{
    x = x * 10;
}

void refFunc(int *s)        
{
    *s = *s * 10;
}

void swapInt(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void refFunc2(int &x)       
{
    x = x * 3;
}

int main()
{
    int sampleInt;
    long sampleLong;
    long long sampleLongLong;
    char sampleChar;
    string sampleString;
    double sampleDouble;
    float sampleFloat;

    //sizeof funtion tells us how many bytes are the specific data type 
 /*
    cout << "int: " << sizeof(sampleInt) << " bytes" <<  endl;
    cout << "long: " << sizeof(sampleLong) << " bytes" <<  endl;        // long or long long only works with int data type
    cout << "long long: " << sizeof(sampleLongLong) << " bytes" <<  endl;
    cout << "char: " << sizeof(sampleChar) << " bytes" <<  endl;
    cout << "string: " << sizeof(sampleString) << " bytes" <<  endl;
    cout << "double: " << sizeof(sampleDouble) << " bytes" <<  endl;
    cout << "float: " << sizeof(sampleFloat) << " bytes" <<  endl; 
*/

    // pointer
    int a = 10;
    int *aPtr = &a;

    *aPtr = 25;     //this way we can change the value of 'a' without calling for 'a'

    // cout << a << endl;

    //cout << aPtr << endl;       //prints address
    aPtr++;
    //cout << aPtr << endl;


    int arr[] = {2, 3, 5};

    //cout << sizeof(arr) << endl;
    //cout << sizeof(arr[0]) << endl;

    for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        //cout << *(arr+i) << endl;
    }


    // call by value
    int x = 10;
    sampleFunc(x);
    //cout << "x: " << x << endl;


    // call by reference (address)          
    int y = 10;
    // int *yPtr = &y;
    refFunc(&y);
    cout << "y: " << y << endl;


    int i = 10, j = 20;
    swapInt(&i, &j);
    //cout << i << " " << j << endl;


    int m = 3;          
    refFunc2(m);
    //cout << "m: " << m << endl;


    int u = 5;
    int *uPtr = &u;
    int **uPtr2 = &uPtr;

    cout << **uPtr2 << endl; // dereferencing

    return 0;
}
