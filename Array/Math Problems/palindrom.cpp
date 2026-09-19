class Solution {
public:
    bool isPalindrome(int x) {

    if(x < 0){
        return false;
    }
        int rev = 0;
         int original = x;

        while( x != 0){
            int digit = x%10;

            if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
          
          rev = (rev * 10)+digit;

          x = x/10;

        }
        if(rev == original){
            return true;
        }
        return false;
      
    }
};