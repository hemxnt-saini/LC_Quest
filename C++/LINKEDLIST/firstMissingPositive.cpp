class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int length = nums.size();
        int ans = 0;
        int flag = 1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                flag = 0;
            }
            if (nums[i] < 0)
            {
                i++;
            }
            else if (nums[i] + 1 != nums[i + 1])
            {
                ans = nums[i] + 1;
                break;
            }
        }

        if (flag == 1)
        {
            return 1;
        }
        else
        {
            return ans;
        }

        return nums[length - 1] + 1;
    }
};