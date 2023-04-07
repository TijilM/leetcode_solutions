class compare{
    public:
    bool operator()(int a,int b){
        int c1=count(a);
        int c2=count(b);
        return (c1==c2)? a < b: c1 < c2;

    }
    int count(int a){
        int k=0;
        while(a){
            k+=(a&1);
            a=a>>1;
        }
        return k;
    }
};
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare());
        return arr;
    }
};