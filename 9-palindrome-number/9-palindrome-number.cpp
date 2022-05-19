class Solution {
public:
    bool isPalindrome(int x) {
       long int rem=0,reverse=0;
        int temp=x;
        while(x>0){
            int rem=x%10;
            reverse=reverse*10+rem;
            x=x/10;
        }
        if(temp==reverse){
            return true;
        }else{
            return false;
        }
    }
};