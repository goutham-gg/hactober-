#include<iostream>
#include<string>
#include<conio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include<stack>
using namespace std;


int main(){
    int n,k;
    cin>> n;
    stack<int> main;
    stack<int> temp;
   for(int i=0;i<n;i++){
       cin>> k;
       main.push(k);
   }
    while(!main.empty()){
        int t=main.top();
        main.pop();
        while(!temp.empty() && temp.top()<t){
       main.push(temp.top());
       temp.pop();
        }
        temp.push(t);
        }
    while(!temp.empty()){
        cout<<temp.top()<<",";
        temp.pop();
    }


}
