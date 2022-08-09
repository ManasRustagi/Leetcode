class Solution {
public:
    void Recursion(int ind,vector<int> &a,vector<vector<int>> &b,vector<int> arr,int target)
    {
        if(target==0)
        {
            b.push_back(a);
            return;
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]<=target)
            {
                a.push_back(arr[i]);
                Recursion(i+1,a,b,arr,target-arr[i]);
                a.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<int> a;
        vector<vector<int>> b;
        sort(cand.begin(),cand.end());
        Recursion(0,a,b,cand,target);
        return b;
    }
};