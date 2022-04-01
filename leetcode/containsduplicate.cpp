class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> memo;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (memo.count(nums[i]) > 0)
            {
                return true;
            }
            memo.insert(nums[i]);
        }
        return false;
    }
};
