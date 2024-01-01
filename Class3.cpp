#include<bits/stdc++.h>
using namespace std; 

int main()
{
    map<string, int> mp;
    map<string, int>::iterator it;

    mp["t"]=3;                    // another way to insert value in map veriable 

    multimap<string, int> multimp;      //use the multimap so that they can count everything and do not ingore the same input
    multimap<string, int>::iterator it2;

    multimp.insert(make_pair("b", 3));
    multimp.insert(make_pair("a", 4));
    multimp.insert(make_pair("c", 5));
    multimp.insert(make_pair("e", 7));
    multimp.insert(make_pair("b", 10));


    for(it2=multimp.begin(); it2!=multimp.end(); it2++)
    {
        cout << it2->first << " " << it2->second <<endl;
    }

    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(7);

    for(int x:vec)      // another form of using for loop
    {
        cout << x << " ";
    }
    //cout << endl;

    vector<string> vec2;
    vec2.push_back("hello");
    vec2.push_back("hi");
    vec2.push_back("test");
    vec2.push_back("hello");

    for(string x:vec2)        //same for string or any data types
    {
        cout << x << " ";
    }
    //cout << endl;


    set<int> st;
    //multiset<int> st2;
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(1);

    for(int x:st)
    {
        //cout << x << " ";        //here the output would be 1 2 3. Using multiset it can include the extra 2 meaning 1 2 2 3
    }

    string s = "C plus plus"; //distinct
    map<char, int> countingMap;
    map<char, int>::iterator it3;

    for(int i=0;i<s.length();i++)        //counting the letter frequences
    {
        countingMap[s[i]]++;
        //countingMap[s[i]] +=1;        //same as the previous line

    }

    for(it3=countingMap.begin();it3!=countingMap.end();it3++)        
    {
        //cout << it3->first << " " << it3->second << endl;
    }


    
    stack<int> stack1;            //stack stores the valus on top of eacg other as vertical. First comes and last out

    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    stack1.push(7);

    //stack1.pop();
    //int x = stack1.top();
    //cout << x << endl;

    while(!stack1.empty())
    {
        int x = stack1.top();
        //cout << x << endl;
        stack1.pop();            //use the pop() is necessary otherwise it will be infinate loop
    }


    
    queue<int> q;        //it is opposite of stack. It first comes and first out. It stoes the values horizontally unlike stack

    q.push(5);
    q.push(8);
    q.push(9);
    q.push(10);

    while(!q.empty())
    {
        //cout << q.front() << " ";
        q.pop();
    }

    priority_queue<int> q2;        //it gives the output in sorting and in decending order 
    q2.push(5);
    q2.push(10);
    q2.push(2);
    q2.push(100);
    while(!q2.empty())
    {
        cout << q2.top() << endl;
        q2.pop();
    }

    return 0;
}
