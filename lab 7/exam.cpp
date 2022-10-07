#include <bits/stdc++.h>

using namespace std;
void bus(vector<int> V, int k1)
{
    int sum = accumulate(V.begin(), V.end(), 0);
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = i + 1; j < V.size(); ++j)
        {
            if (V[i] == (-V[j]) && V[i] < 0)
            {
                cout << "-1" << endl;
                return;
            }
        }
    }

    if (sum != 0)
    {
        cout << "-1" << endl;
        return;
    }
    int sum1 = 0;
    int count;
    vector<int> num;
    int begi = 0;
    while (begi != V.size())
    {
        int i = 0;

        for (int j = i + 1; j < V.size(); ++j)
        {
            sum = V[i] + V[j];
            if (V[i] == (-V[j]) && sum1 == 0)
            {
                count++;
                num.push_back(j - 1);
                begi = j;
                break;
            }
        }
        i++;
        begi++;
    }
    if (count)
    {
        cout << count << endl;
    }
    for (auto i = num.begin(); i != num.end(); ++i)
    {
        cout << *i;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int inp;
            cin >> inp;
            v1.push_back(inp);
        }
        bus(v1, k);
    }
}