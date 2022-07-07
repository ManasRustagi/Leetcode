class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        int l=0;
        int r=0;
        int l1=s1.length();
        int l2=s2.length();
        if(l1>l2) return false;
        while(r<l1)
        {
            h1[s1[r]-'a']+=1;
            h2[s2[r]-'a']+=1;
            r++;
        }
        r--;
        while(r<l2)
        {
            if(h1==h2)
            {
                return true;
            }
            r++;
            if(r!=l2)
            h2[s2[r]-'a']+=1;
            h2[s2[l]-'a']-=1;
            l++;
        }
        return false;
    }
};