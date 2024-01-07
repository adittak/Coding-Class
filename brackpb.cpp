#include<bits/stdc++.h>
using namespace std;


/*
Input: exp = “[()]{}{[()()]()}” 
Output: Balanced
Explanation: all the brackets are well-formed

Input: exp = “[(])” 
Output: Not Balanced 
Explanation: 1 and 4 brackets are not balanced because 
there is a closing ‘]’ before the closing ‘(‘

*/


int main()
{
    deque<char> q;
    stack<char> st;
    string s = "[(){)]";

    // using queue
    for(int i=0;i<s.length();i++)
    {
        if(q.empty())
        {
            q.push_back(s[i]);
        }
        else if((q.back() == '(' && s[i] == ')') || (q.back() == '{' && s[i] == '}') || (q.back() == '[' && s[i] == ']'))
        {
            q.pop_back();
        }
        else q.push_back(s[i]);
    }

    // using stack
    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
        {
            st.pop();
        }
        else st.push(s[i]);
    }

    // if(q.empty()) cout << "Balanced" <<endl;
    // else cout << "Not balanced" <<endl;

    if(st.empty()) cout << "Balanced" <<endl;
    else cout << "Not balanced" <<endl;


    
    //deque is alternative of queue but this gives more actions to perform 

    deque<int>sample;
    queue<int>sample2;

    sample2.push(2);
    sample2.push(3);
    sample2.push(5);
    sample2.push(7);
    sample2.push(8);

    while(!sample2.empty())
    {
        cout << sample2.front() << " ";
        sample2.pop();
    }

    cout << endl;

    sample.push_front(2);
    sample.push_back(3);
    sample.push_front(5);

    sample.pop_back();
    sample.pop_front();

    for(int x:sample)
    {
        cout << x << " ";
    }

    return 0;
}
