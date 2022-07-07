class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int k) {
        vector<vector<int>> m;
        int a=mat.size();
        int b=mat[0].size();
        int c=0;
        int d=0;
        int cunt=0;
         vector<int> v;
        if((a*b)<(r*k)) return mat;
        for(int i=0;i<a;i++)
        {
           
            for(int j=0;j<b;j++)
            {
                int z=mat[i][j];
                v.push_back(z);
                c++;
                if(c>=k)
                {
                    c=0;
                    d++;
                    m.push_back(v);
                    v.clear();
                } 
                if(d>=r && (i<a-1 || j<b-1)) cunt++;
            }
        }
        if(cunt>0 ) return mat;
        return m;
    }
};