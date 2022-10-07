/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <vector>;
#include <list>;
#include <queue>;
#include <unordered_map>;
#include <iostream>;
#include <stdio.h>;
class Solution
{
public:
#define pii pair<int, int>
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        priority_queue<pii, vector<pii>, greater<pii>> linked;
        unordered_map<int, int> count;
        for (int i = 0; i < lists.size(); i++)
        {
            auto it = lists[i];
            while (it)
            {
                count[it->val]++;
                it = it->next;
            }
        }

        if (count.size() == 0)
        {
            return NULL;
        }

        for (auto n : count)
        {
            linked.push({n.first, n.second});
        }
        ListNode *ans = new ListNode();
        auto it = ans;
        bool first = true;
        while (!linked.empty())
        {

            auto node = linked.top();

            if (it == ans && first)
            {
                cout << node.first;
                it->val = node.first;
                node.second--;
                first = false;
            }
            int times = node.second;
            while (times--)
            {
                ListNode *t = new ListNode(node.first);
                it->next = t;
                it = it->next;
            }
            linked.pop();
        }

        return ans;
    }
}
}
;
