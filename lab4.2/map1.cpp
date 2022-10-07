#include <iostream>
#include <map>

using namespace std;
int check(string month){
   if(month == "january")
    {
        return 1;
    }
    else if(month == "february")
    {
        return 2;
    }
    else if(month == "march")
    {
        return 3;
    }
    else if(month == "april")
    {
        return 4;
    }
    else if(month == "may")
    {
        return 5;
    }
    else if(month == "june")
    {
        return 6;
    }
    else if(month == "july")
    {
        return 7;
    }
    else if(month == "august")
    {
        return 8;
    }
    else if(month == "september")
    {
        return 9;
    }
    else if(month == "october")
    {
        return 10;
    }
    else if(month == "november")
    {
        return 11;
    }
    else if(month == "december")
    {
        return 12;
    }
    else
    {
        printf("Invalid input!");
        return 0;
    }

  
}
string stringify_mon(int n){
  switch(n){
      case 1: return "january";
      case 2: return "february";
      case 3: return "march";
      case 4: return "april";
      case 5: return "may";
      case 6: return "june";
      case 7: return "july";
      case 8: return "august";
      case 9: return "september";
      case 10: return "october";
      case 11: return "november ";
      case 12: return "december";
  }
}
int main()
{
  map<int, int> calender;
  calender.insert(pair<int, int>(1, 30));
  calender.insert(pair<int, int>(2, 28));
  calender.insert(pair<int, int>(3, 31));
  calender.insert(pair<int, int>(4, 30));
  calender.insert(pair<int, int>(5, 31)); 
  calender.insert(pair<int, int>(6, 30));
  calender.insert(pair<int, int>(7, 31));
  calender.insert(pair<int, int>(8, 31));
  calender.insert(pair<int, int>(9, 30));
  calender.insert(pair<int, int>(10, 31));
  calender.insert(pair<int, int>(11, 30));
  calender.insert(pair<int, int>(12, 31));
  cout<<"enter the month ";
  string month;
  getline(cin,month);
  int mon = check(month);
  cout<<"\n";
  map<int, int>::iterator itr;
  for (itr = calender.find(mon-1); itr != calender.find(mon+2); ++itr) {
        cout << '\t' << stringify_mon(itr->first)
             << '\t' << itr->second << " days" <<'\n';
    }
    cout << endl;
return 0;
}
   