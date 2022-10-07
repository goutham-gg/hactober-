#include<iostream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;
 
 int main(){
     set<int> s1;
     s1.insert(23);
     s1.insert(20);
     s1.insert(21);
     s1.insert(22);
    set<int>:: iterator itr;
int k;


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
       if(it1!=s1.end()){
         s1.insert(ins);
         cout<< ins << " is inserted"<< endl;
         }
      else{
          cout<< " the "<<ins <<" already present";
        }

        
    }
    if(i==2){
        int serch;
        cout<< " enter the number to search"<< endl;
        cin>>serch;
        auto it=s1.find(serch);

       if(it!=s1.end()){
         cout<< *it << "is found"<< endl;
         }
        else{
           cout<< serch << "is not found"<< endl;
       }
    }
    else{
        cout<< "the wrng input" << endl;
    }
   
}

 }