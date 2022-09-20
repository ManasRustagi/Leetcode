class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x == 0)
        {
            return true;
        }    
        if(x < 0)
        {
            return false;
        }
        int n = x;
        int ans = 0;
        
        while(n != 0)
        {    
            int digit = n % 10;
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                return false;
            } 
            ans = (ans * 10) + digit;
            if(ans == x || x == 1 )
            {
                return true;
            }
            n = n / 10;
        }    
       
        return false;
    }
};