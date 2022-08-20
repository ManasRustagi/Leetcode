class Solution {
public:
    bool IsOkay(int r,int c,vector<string> a,vector<vector<string>> b,int n)
    {
        int dumr=r;
        int dumc=c;
        while(r>=0 && c>=0)
        {
            if(a[r][c]=='Q')
            {
                return false;
            }
            r--;
            c--;
        }
        c=dumc;
        while(c>=0)
        {
            if(a[dumr][c]=='Q')
                return false;
            c--;
        }
        r=dumr;
        c=dumc;
        while(r<n && c>=0)
        {
            if(a[r][c]=='Q')
                return false;
            r++;
            c--;
        }
        return true;
    }
    void Recursion(int col,vector<string> &a,vector<vector<string>> &b,int n
                  ,vector<int> leftrow, vector<int> lowerdiagonal, vector<int> upperdiagonal)
    {
        if(col==n)
        {
            b.push_back(a);
            return;
        }
        for(int r=0;r<n;r++)
        {
            if(leftrow[r]==0 && lowerdiagonal[r+col]==0 && upperdiagonal[n-1+col-r]==0)
            {
                a[r][col]='Q';
                leftrow[r]=1;
                lowerdiagonal[r+col]=1;
                upperdiagonal[n-1+col-r]=1;
               Recursion(col+1,a,b,n,leftrow,lowerdiagonal,upperdiagonal);
                leftrow[r]=0;
                lowerdiagonal[r+col]=0;
                upperdiagonal[n-1+col-r]=0;
                a[r][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> a(n);
        vector<vector<string>> b;
        string c(n,'.');
        for(int i=0;i<n;i++){
            a[i]=c;
        }
        vector<int> leftrow(n,0), lowerdiagonal(2*n-1,0), upperdiagonal(2*n-1,0);
        Recursion(0,a,b,n,leftrow,lowerdiagonal,upperdiagonal);
        return b;
    }
};