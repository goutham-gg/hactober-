#include<iostream>
#include<queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include<stack>
using namespace std;
 
 int main(){
     int n;
     cin >> n;
     priority_queue<int> pq;
     for(int i=0;i<n;i++){
         int k;
         cin >> k;
         pq.push(k);

     }

     cout<< " the max number is "<< pq.top()<< endl;

int w;
while(!pq.empty()){
    w =pq.top();
    pq.pop();
}

cout<< " the minimum element is " << w <<endl;
 }
