#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
{
    vector<vector<int>> res;
    priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, less<pair<double, pair<int, int>>>> pq;

    for (auto p : points)
    {
        pq.push({sqrt(p[0] * p[0] + p[1] * p[1]), {p[0], p[1]}});
        if (pq.size() > K)
            pq.pop();
    }
    while (!pq.empty())
    {
        vector<int> v = {pq.top().second.first, pq.top().second.second};
        res.push_back(v);
        pq.pop();
    }
    return res;
}

// int main(int argc, const char *argv[])
// {
//     // insert code here...
//     vector<vector<int>> points = {{1, 3}, {-2, 2}};
//     auto res = kClosest(points, 1);
