#include<iostream>
#include<string>
#include<conio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main(){
    vector<int>v;
deque <int> w; 
v.push_back(30);
v.push_back(345);
v.push_back(35);
v.push_back(45);
v.push_back(5);
int k=v.size();
for(int i=0;i<k;i++){
    cout<<v[i]<<",";
}

cout<<endl;
v.pop_back();
 cout<< "after poping"<< endl;
 k=v.size();
 for(int i =0;i<k;i++){
     cout<<v[i]<<",";
 }
 cout<<endl;


// // //v.push_front(456);
// // //v.push_front (765);
// // // push_front is not part of the vector as the insertion through back is allowed
// // //and insertion from front is  not allowed 



w.push_back(768);
w.push_front(23);
w.push_front(231);
w.push_front(223);
w.push_back(764);
w.push_back(762);
for(int i=0;i<w.size();i++){
    cout<<w[i]<<",";
}
cout<<endl;

w.pop_back();
w.pop_front();
for(int i =0;i<w.size();i++){
    cout<<w[i]<<",";
}
cout<<endl;

// // here in the dqueue we can insert and removee eelemetns from bth end while 
// // while the vector can only be pushed and popped into the back



}