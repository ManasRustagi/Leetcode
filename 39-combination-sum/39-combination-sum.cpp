class Solution {
public:
    void Recursion(int ind,vector<int> &a,vector<vector<int>> &b, vector<int> arr,int target)
    {
        if(ind==arr.size())
        {
            if(target==0) b.push_back(a);
            return;
        }
        if(arr[ind]<=target)
        {
            a.push_back(arr[ind]);
            Recursion(ind,a,b,arr,target-arr[ind]);
            a.pop_back();
        }
        Recursion(ind+1,a,b,arr,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        vector<vector<int>> b;
        Recursion(0,a,b,candidates,target);
        return b;
    }
};