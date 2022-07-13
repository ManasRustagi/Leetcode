class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0)return 0;
    if(n == 1)return 1;
    vector<int> tmp(n+1);
    tmp[0] = 0;
    tmp[1] = 1;
    for(int i=1;i<=n;i++){
        if(2*i<=n)
            tmp[2*i] = tmp[i];
        if(2*i-1<=n)
            tmp[2*i-1] = tmp[i] + tmp[i-1];
    }
    int ans = 0;
    for(int i=0;i<=n;i++)
        ans = max(tmp[i], ans);
    return ans;
    }
};