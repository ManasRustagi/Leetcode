class Solution {
public:
    void Recursion(int index,vector<int> &a,vector<int> nums,vector<vector<int>> &b)
    {
        b.push_back(a);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1])continue;
            a.push_back(nums[i]);
            Recursion(i+1,a,nums,b);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> b;
        sort(nums.begin(),nums.end());
        Recursion(0,b,nums,a);
        return a;
    }
};