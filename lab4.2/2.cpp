#include<iostream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
using namespace std;

int main(){
    multiset<int>s1;
    multiset<int>:: iterator it1;
int n;
cout<< "enter the number of iteration"<< endl;
cin>> n;
for(int i=0;i<n;i++){
    int n1=0;
    cout<<"press 1 to insert the digit"<< endl;
    cout<< "press 2  to search for elment"<< endl;
    cout<< "enter the digit" <<endl;
    cin>> n1;

    if(n1==1){
        int ins;
        cout<< "enter the digit to insert" << endl;
        cin >> ins;
        auto it1=s1.find(ins);
           s1.insert(ins);
         cout<< ins << " is inserted"<< endl;
        }      
    if(n1==2){
        int serch;
        int count;
        cout<< " enter the number to search"<< endl;
        cin>>serch;
        auto it=s1.find(serch);
        int count1=s1.count(serch);

         if(it!=s1.end())   {
         cout<< serch << "is found"<< count1<< "times in array" << endl;
         }
        else{
           cout<< serch<< "is not found"<< endl;
       }
    }
    else{
        cout<< "the wrng input" << endl;
    }
   
}
}
