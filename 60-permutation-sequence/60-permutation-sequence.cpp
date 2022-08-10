class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        string ans="";
        vector<int> number;
        for(int i=1;i<n;i++)
        {
            fact=fact*i;
            number.push_back(i);
        }
        number.push_back(n);
        k=k-1;
        while(true)
        {
            ans=ans + to_string(number[k/fact]);
            number.erase(number.begin()+(k/fact));
            if(number.empty()) break;
            k=k%fact;
            fact=fact/number.size();
        }
        return ans;
    }
};