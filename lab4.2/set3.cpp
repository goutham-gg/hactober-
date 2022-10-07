#include<iostream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include<vector>
#include <set>

using namespace std;

int main(){
    set<pair<int,string>> s1= {{1, "1-9"}, {30, "21-40"}, {25, "21-40"}, {60, "41-60"}, {75, "61-80"}, {41, "41-60"}};;
     vector<string> count1;
    vector<string> v  {"1-9","10-20","21-40","41-60","61-80","81-100"};

 for (auto it = s1.begin(); it != s1.end(); ++it)
    {
       
           string k= ((*it).second);
          count1.push_back(k);
    }

for(auto it1=v.begin();it1!=v.end();++it1){

    cout << *it1 << " number of people " << count(count1.begin(), count1.end(), *it1) << endl;
}

    }
        
