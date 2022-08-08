class Solution {
public:
    void Recursion(int index,vector<int> &a,vector<int> nums,int n,vector<vector<int>> &b)
    {
        b.push_back(a);
        for(int i=index;i<n;i++)
        {
            if(i!=index && nums[i]==nums[i-1])continue;
            a.push_back(nums[i]);
            Recursion(i+1,a,nums,n,b);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> a;
        vector<int> b;
        sort(nums.begin(),nums.end());
        Recursion(0,b,nums,n,a);
        return a;
    }
};