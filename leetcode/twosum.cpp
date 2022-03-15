class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> memo;
        vector<int> pairs;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (memo.find(diff) != memo.end())
            {
                pairs.push_back(memo.find(diff)->second);
                pairs.push_back(i);
                break;
                
            }
            memo.insert(pair<int, int>(nums[i],i));
        }return pairs;
    }
};
