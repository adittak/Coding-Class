#include<bits/stdc++.h>
using namespace std;

bool rev(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(20);
    vec.push_back(8);
    vec.push_back(3);
    vec.push_back(6);
    vec.pop_back();

    // sort(vec.begin(), vec.end(), rev);
    // reverse(vec.begin(), vec.end());

    it = find(vec.begin(), vec.end(), 8);
    cout << *it <<endl;

    vec.insert(it+1, 25);

    for(it = vec.begin();it!=vec.end();it++)
    {
        cout << *it <<"\t";
    }

    if(vec.empty()) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    cout <<endl;

    list<int> lis;
    lis.push_back(4);
    lis.push_back(8);
    lis.push_back(3);
    lis.push_back(6);
    list<int>::iterator it2;

    lis.push_front(10);
    lis.pop_front();
    lis.pop_front();

    cout<<"List: "<<endl;

    for(it2 = lis.begin(); it2 != lis.end(); it2++)
    {
        cout<< *it2 << "\t";
    }
/////
    return 0;
}
