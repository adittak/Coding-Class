#include<bits/stdc++.h>
using namespace std;

int main() {

// pair<string, int> pr;
// pr = make_pair("pair", 10);
// pr = make_pair("grow", 6);
// cout << pr.first << "\t" << pr.second;

// vector<pair<string, int> > vec;
// vector<pair<string, int> >:: iterator it;

// vec.push_back(make_pair("name", 10));
// vec.push_back(make_pair("hellow", 5));

// for(it = vec.begin(); it != vec.end(); it++){
//     cout << it->first << "\t" << it->second << endl;
// }


map<string, int> mp;
map<string, int> :: iterator it2;
mp.insert(make_pair("hellow" , 34));
mp.insert(make_pair("ggg" , 111));

mp["my"] = 3;
mp["name"] = 4;
mp["name"] = 2;


for(it2= mp.begin(); it2!= mp.end(); it2++){
    cout << it2->first << "\t" << it2-> second << endl;
}




    return 0;
}