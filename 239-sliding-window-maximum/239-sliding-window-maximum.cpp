class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> a;
        int n=nums.size();
        deque<int> Q(k);
        int i;
        for(i=0;i<k;i++)
        {
            while(!Q.empty() && nums[i]>nums[Q.back()])
            {
                Q.pop_back();
            }
            Q.push_back(i);
        }
        
        for(;i<n;i++)
        {
            int e=nums[Q.front()];
            a.push_back(e);
            while(!Q.empty() && Q.front()<=i-k)
            {
                Q.pop_front();
            }
            while(!Q.empty() && nums[i]>=nums[Q.back()])
            {
                Q.pop_back();
            }
            Q.push_back(i);
        }
        a.push_back(nums[Q.front()]);
        return a;
    }
};