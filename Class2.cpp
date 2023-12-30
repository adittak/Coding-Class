#include<bits/stdc++.h>

using namespace std; 

int main()
{
    //pair
    pair<string, int> pr;
    pr = make_pair("pair", 10);
    cout << pr.first << " " << pr.second <<endl;
    cout<<endl;

    
    //vector pair
    vector<pair<string,int> > vec;
    vector<pair<string,int> >::iterator it;      //make sure have the gap there "> >"

    vec.push_back(make_pair("sample", 3));
    vec.push_back(make_pair("test", 5));
    vec.push_back(make_pair("sample", 7));

    for(it=vec.begin();it!=vec.end();it++)
    {
        cout << it->first << " " << it->second <<endl;
    }

    cout<<endl;

    
    //map
    map<int, int> mp;
    map<int, int>::iterator it2;
    mp.insert(make_pair(5, 3));
    mp.insert(make_pair(7, 4));
    mp[2]=5;
    mp[6]=9;
    mp[6]=10;

    for(it2=mp.begin();it2!=mp.end();it2++)
    {
        cout << it2->first << " " << it2->second <<endl;
    }
}

