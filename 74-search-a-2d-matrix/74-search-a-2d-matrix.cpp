class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int i=0;
        int i1=m-1;
        int j=0;
        int j1=n-1;
        while(i<=i1 && j<=j1)
        {
            if(target>mat[i][j])
            {
                if(target>mat[i][j1]) i++;
                else j++;
            }
            else if (target==mat[i][j] || target==mat[i][j1]) return true;
            else return false;
        }
        return false;
    }
};