class Solution {
public:
    void Brackets(vector<string> &k,char out[],int n,int idx,int open,int close)
    {
        if(idx==2*n)
        {
            out[idx]='\0';
            cout<<out<<endl;
            k.push_back(out);
        }
        if(open<n)
        {
            out[idx]='(';
            Brackets(k,out,n,idx+1,open+1,close);
        }
        if(close<open)
        {
            out[idx]=')';
            Brackets(k,out,n,idx+1,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> k;
        char out[100];
       
        Brackets(k,out,n,0,0,0);
        return k;
    }
};