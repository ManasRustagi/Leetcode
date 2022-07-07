class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int len=0;
        int n=s.length();
        vector<int> a(256,-1);
        while(r<n)
        {
            if(a[s[r]]!=-1) l=max(l,a[s[r]]+1);
            a[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};