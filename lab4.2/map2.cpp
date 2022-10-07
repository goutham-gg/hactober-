#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool cmp1(pair<string, int> &a,
          pair<string, int> &b)
{
    return a.first < b.first;
}
bool cmp2(pair<string, int> &a,
          pair<string, int> &b)
{
    return a.first > b.first;
}
bool cmp3(pair<string, int> &a,
          pair<string, int> &b)
{
    return a.second < b.second;
}
bool cmp4(pair<string, int> &a,
          pair<string, int> &b)
{
    return a.second > b.second;
}
void print_vector(vector<pair<string, int>> &v)
{
    for (auto &itr : v)
    {
        cout << itr.first << " " << itr.second << endl;
    }
}
void pushing(vector<pair<string, int>> &v, map<string, int> temp)
{
    for (auto &itr : temp)
    {
        v.push_back(itr);
    }
}

void sort(map<string, int> temp)
{
    vector<pair<string, int>> v1; 
    vector<pair<string, int>> v2; 
    vector<pair<string, int>> v3; 
    vector<pair<string, int>> v4; 
    pushing(v1, temp);
    pushing(v2, temp);
    pushing(v3, temp);
    pushing(v4, temp);
    cout << "Ascending order of name" << endl;
    sort(v1.begin(), v1.end(), cmp1);
    print_vector(v1);
    cout << "Descending order of name" << endl;
    sort(v1.begin(), v1.end(), cmp2);
    print_vector(v1);
    cout << "Ascending order of ROLLNO" << endl;
    sort(v1.begin(), v1.end(), cmp3);
    print_vector(v1);
    cout << "Descending order of ROLLNO" << endl;
    sort(v1.begin(), v1.end(), cmp4);
    print_vector(v1);
}

int main()
{
    map<string, int> mymap;
    mymap["james"] = 3421;
    mymap["rakesh"] = 37268;
    mymap["arnold"] = 12452;
    mymap["messi"] = 23411;
    sort(mymap);

    return 0;
}