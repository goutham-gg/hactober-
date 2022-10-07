#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int> stud;
    map<string,int>::iterator itr;
    int n,n1=0;
    cin>> n;
    for(int i=0;i<n;i++){
        int k;
        string s;
        cin>> k >> s>> n1;
        if(k==1){
           
           
            cin>> s >> n1 ;
           auto  it = stud.find(s);
            if(it!=stud.end()){
                it->second = it->second+n1;
                }
            else{
            stud.insert(make_pair(s,n));
            cout<< " inserted";
        }
        }
        
        if(k==2){
            stud.erase(s);
        }
      if(k==3){
           auto it1=stud.find(s);
            if(it1!=stud.end()) {
               cout<< it1->second << endl;
             }
            else{
               cout<< '0'<< endl;
           }
        }
    }
    };