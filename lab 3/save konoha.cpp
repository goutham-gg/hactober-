#include<iostream>
#include<queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include<stack>
using namespace std;
 int sum(priority_queue<int>& temp){
     int sum1 =0;
    while(!temp.empty()){
   int k=temp.top();
     sum1=sum1+k;
    temp.pop();
    }
    return sum1;
 }

 
 int main(){
     int t;
     cin>> t;
     for(int i=0;i<t;i++){
   priority_queue<int> s;
int n,z;
cin>> n,z;
for(int i=0;i=n;i++){
    int k;
    cin>> k;
    s.push(k);
}
int sum=sum(s);




 }
 }