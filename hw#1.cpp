#include<bits/stdc++.h>

using namespace std;

int main() {
int sizes;
int target;
int extension;
int numbers;

vector<int> num;

cout << "What's the size of the vector, targeted number, and extended number?" << "\n";
cin >> sizes;
cin >> target;
cin >> extension;


cout << "Now plug in the numbers" << "\n";
for(int i=0; i<sizes; i++){
    cin >> numbers;
    num.push_back(numbers);
}

sort(num.begin(), num.end());

vector<int>::iterator iter;
vector<int>::iterator iter2;


for(iter= num.begin(); iter !=num.end(); iter++){
    cout << *iter << "\t";
}

cout << endl;


/* for(iter= num.begin(); iter !=num.end(); iter++){
    if(*iter> target){
        iter2 = find(num.begin(), num.end(), *iter);
        num.insert(iter2 +1, extension);
    }
    cout << *iter << "\t";

}*/


return 0;
}
