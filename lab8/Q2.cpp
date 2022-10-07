#include <bits/stdc++.h>
using namespace std;
vector<int> denominations = {1, 2, 5, 10, 20, 50, 100, 500};

void findMinimumCoins(int value)
{
    sort(denominations.begin(), denominations.end());
    std::vector<int> answer;
    for (int i = denominations.size() - 1; i >= 0; i--)
    {
        while (value >= denominations[i])
        {
            value = value - denominations[i];
            answer.push_back(denominations[i]);
        }
    }
    std::cout << "The value can be achieved in " << answer.size() << " coins are " << std::endl;
    for (int i = 0; i < answer.size(); i++)
    {
        std::cout << answer[i] << " ";
    }
}
int main()
{
    int k;
    cout << " enter the amount needed \n";
    cin >> k;

    findMinimumCoins(k);
    return 0;
}