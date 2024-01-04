#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vector<int>::iterator it;
    vec.push_back(5);
    vec.push_back(25);
    vec.push_back(2);
    vec.push_back(10);
    vec.push_back(3);
    vec.push_back(45);

    sort(vec.begin(), vec.end());

    // binary search returns either true or false
    bool element = binary_search(vec.begin(), vec.end(), 10); // true
    element = binary_search(vec.begin(), vec.end(), 20); //false

    // cout << element << endl;

    set<int> st;
    set<int>::iterator it2;
    st.insert(45);
    st.insert(100);
    st.insert(2);
    st.insert(6);
    st.insert(200);
    st.insert(36);

    it2 = st.lower_bound(6); // lower bound means >= O(logN)
    it2 = st.upper_bound(6); // upper bound means > O(logN)
    //cout << *it2 << endl;


    vector<int> vec2;
    vector<int>::iterator itr1;
    vector<int>::iterator itr2;
    vec2.push_back(5);
    vec2.push_back(25);
    vec2.push_back(2);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(3);
    vec2.push_back(45);
    vec2.push_back(250);

    sort(vec2.begin(), vec2.end());

    /* for(int x:vec2)
    {
        // cout << x << " ";
    } // O(N)
    // cout << endl; */

    itr1 = lower_bound(vec2.begin(), vec2.end(), 100);          // setting up bounds in vec is different then set
    itr2 = upper_bound(vec2.begin(), vec2.end(), 100);          // could be same but set is easy to set up just putting one num

    cout << "Value: " << itr2 - itr1 << endl;


    // Problem:

    /*
    (2, 5)
    (10, 15)
    (10, 20)
    (16, 35)
    (40, 300)

    number = 38 -> doesn't exist
    */


    set<pair<int, int> > pairedSet;
    set<pair<int, int> >::iterator iter1;

    pairedSet.insert({2, 5});
    pairedSet.insert({10, 15});
    pairedSet.insert({16, 35});
    pairedSet.insert({40, 300});
    pairedSet.insert({301, 500});

    int n;
    cout << "Enter number: ";
    cin >> n;

    iter1 = pairedSet.upper_bound({ n, INT_MAX }); //O(logN)

    if(iter1 == pairedSet.begin())              //it checks if the number is less than (2,5)
    {
        cout << "Doesn't exist" << endl;
        return 0;
    }

     cout << iter1->first << " " << iter1->second << endl;

    iter1--;

    if((iter1->first <= n) && (n <= iter1->second)) {
        cout << "Exists: " << iter1->first << " " << iter1->second << endl;

    } else {
        cout << "Doesn't exist" << endl;
    }  

    return 0; 
}
