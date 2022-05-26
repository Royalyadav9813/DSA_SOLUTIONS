class Solution {
public:
    
    int count_of_bits(int num){
        int count=0;
        while(num>0){
            if(num&1==1){
            count++;
            }
            num=num>>1;
        }
        return count;
    }
    bool is_prime(int num){
      if(num<=1){
          return false;
      }
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        int count=0;
     for(int i=left;i<=right;i++){
         count=count_of_bits(i);
         cout<<count<<endl;
         if(is_prime(count)){
             ans+=1;
         }
         
     }  
      return ans;  
      
    }
};