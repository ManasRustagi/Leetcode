class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int k=0;
        if(n%2==0)
          k=n/2;
        else
            k=(n+1)/2;
        for(int i=0;i<k;i++)
        {
            char temp=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=temp;
        }
    }
};