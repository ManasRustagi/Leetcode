class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int r=0,l=0;
        while(l<n)
        {
            while(r<n && s[r]!=' ') r++;
           reverse(s.begin()+l,s.begin()+r);
            r++;
            l=r;
        }
        return s;
    }
};