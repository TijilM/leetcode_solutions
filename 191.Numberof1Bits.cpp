class Solution {
public:
    int hammingWeight(uint32_t n) {
        int tijil=0;
        int bit=0;
        while(n!=0){
            bit = n & 1;
            if(bit == 1)
                tijil++;
            n= n>>1;
        }
        
         return tijil;
    }
   
};