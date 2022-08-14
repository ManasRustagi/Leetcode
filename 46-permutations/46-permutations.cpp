class Solution {
public:
    void Recursion(int freq[],vector<int> nums,vector<int> & a,vector<vector<int>> &b)
    {
        if(a.size()==nums.size())
        {
            b.push_back(a);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                a.push_back(nums[i]);
                freq[i]=1;
                Recursion(freq,nums,a,b);
                freq[i]=0;
                a.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<int> a;
        vector<vector<int>> b;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        Recursion(freq,nums,a,b);
        return b;
    }
};