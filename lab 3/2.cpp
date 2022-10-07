#include<iostream>
#include<string>
#include<conio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


void print(int i){
    cout<< ' '<< i +5;
}
int main(){
    int arr[]={ 20,25,25,50,40,22,25,45,42,44,33,35,44,48};
int k=sizeof(arr)/sizeof(arr[0]);


//a
all_of(arr,arr+k,[](int i){ return i%2;})?
cout<< " all are even elements":
cout<< " there are also odd elements"<< endl;

//c
all_of(arr,arr+k,[](int i){return i<20;})?
cout<< "all marks are above 20":
cout<< " some mark are below 20"<< endl ;

//d
any_of(arr,arr+k,[](int i){return i==50;})?
cout<< "there is an element called 50" :
cout << " there is no element by the name of 50 ";
cout<<endl;
//e
any_of(arr,arr+k,[](int i){return i<0;})?
cout<< " there is negative numbers ":
cout << " there is no negative number";
cout<<endl;
//f
for_each(arr,arr+k,print) ;
cout<<endl;


 // g
int find=44;
for(int i=0;i<k;i++){
    if(arr[i]==find){

    }
}

//h
 int* m=min_element(arr,arr+k);
 int * n=max_element(arr,arr+k);
 cout<<"the average is " << (*m+*n)/2 ;

//i
sort(arr,arr+k);
for(int i=0;i<k;i++){
    cout<< arr[i]<<"," ;
}
cout<< endl;
//j
for (int i = 0; i < 14; i++)
{
  for (int j = 1; j < 14; j++)
  {
    cout <<  arr[i] << " - "<< arr[j] << " " << arr[i]-arr[j] << '\n';
    break;

  }

}

//k
int arr2[]={44,43,25, 39,33,38,30,44,35,22,38,49,33,41};
int w= sizeof(arr2)/sizeof(arr2[0]);
vector<int> v(25);
vector<int>::iterator it,st;
sort(arr2,arr2+w);
it=set_union(arr,arr+k,arr2,arr2+w,v.begin());
for(st= v.begin();st!=it;++st){
      std::cout << ' ' << *st<< ',';
}
cout<<'\n';

//I
int arr3[]={1,3,2,5};
sort(arr,arr+k);
do{
    cout<< '['<< arr3[0]<<","<< arr3[1]<<","<< arr3[2]<<","<< arr3[3]<<']'<<endl;
}while(next_permutation(arr3,arr3+4));
}


