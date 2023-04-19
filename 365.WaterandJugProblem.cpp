class Solution {
public:
    bool canMeasureWater(int jug1, int jug2, int tar) {
        if(tar==0)
            return true;
        if(tar> jug1+jug2)
            return false;
        return tar%gcd(jug1,jug2)==0;
    }
};