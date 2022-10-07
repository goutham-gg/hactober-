
#include <bits/stdc++.h>;

class Solution
{
public:
    bool isAllLessThanZero(std::vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), std::greater<int>());
        return nums[0] >= 0;
    }

    int maxSubArray(std::vector<int> &nums, int start, int mid_idx, int end)
    {

        int leftMax = nums[mid_idx];
        int leftSum = 0;
        int rightMax = nums[mid_idx + 1];
        int rightSum = 0;
        printf("find left max\n");
        for (int i = mid_idx; i >= start; i--)
        {
            printf("%d\t", nums[i]);
            leftSum += nums[i];
            leftMax = std::max(leftMax, leftSum);
        }
        printf("\nfind right max\n");
        for (int i = mid_idx + 1; i <= end; i++)
        {
            printf("%d\t", nums[i]);
            rightSum += nums[i];
            rightMax = std::max(rightMax, rightSum);
        }

        int max = std::max(std::max(leftMax, rightMax), leftMax + rightMax);
        printf("\n========== max: %d =========\n", max);
        return max;
    }

    int DivideAndConquerGetMax(std::vector<int> &nums, int start, int end)
    {
        if (start == end)
            return nums[start];

        int mid_idx = std::floor((start + end) / 2);
        int leftMax = DivideAndConquerGetMax(nums, start, mid_idx);
        int rightMax = DivideAndConquerGetMax(nums, mid_idx + 1, end);

        int cross = maxSubArray(nums, start, mid_idx, end);

        printf("mid_idx:%d, leftMax:%d, rightMax:%d, start:%d, end:%d, cross:%d\n", mid_idx, leftMax, rightMax, start, end, cross);

        return std::max(std::max(leftMax, rightMax), cross);
    }
    int maxSubArrayDivideAndConquer(std::vector<int> &nums)
    {
        if (nums.size() <= 0)
        {
            return INT_MAX * (-1);
        }
        if (nums.size() == 1)
        {
            return nums[0];
        }
        printf("[\t");
        for (int i = 0; i < nums.size(); i++)
            printf("%d\t", nums[i]);
        printf("]\n");
        int mid_idx = std::floor(nums.size() / 2);
        int start = 0;
        int end = nums.size() - 1;

        printf("mid_idx:%d, start:%d, end:%d\n", mid_idx, start, end);

        return DivideAndConquerGetMax(nums, start, end);
    }
};

int main(int argc, char *argv[])
{
    Solution *s = new Solution();
    std::vector<int> nums3{4, -1, 2, 1, -5};
    printf("output3:%d\n", s->maxSubArrayDivideAndConquer(nums3));
}