#include<iostream>
#include<queue>
#include <algorithm>
#include <deque>
#include<array>
using namespace std;
 
 int main(){
     queue<int> q1,q2;
     if(q1.empty()){
         cout<< " it is empty";
     }
     q1.emplace(3);
     q1.emplace(6);
     q1.emplace(7);
     q2.emplace(5);
     q2.emplace(4);
     q2.emplace(34);

q1.swap(q2);
while(!q1.empty()){
    cout<< q1.front()<<endl;
    q1.pop();

}
q1.push(10);
q1.push(20);
q2.push(30);
q2.push(40);
q2.push(50);

q1.swap(q2);
while(!q1.empty()){
int k=q1.front();
q2.emplace(k);
q1.pop();
}

cout<< "the size of queue q1 is "<< q1.size()<< endl;
cout<< "the size of the queue q2 is " << q2.size()<< endl;



array<int,10> arr;

for(int i=0;i<5;i++){
   
   do
   {
       int n;
       cout<<" enter 1 to insert \n 2 to remove \n 3 to print  queue\n 4 to exit"
       cin>> n;
   } while ();
   


 }