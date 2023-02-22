class Solution {
public:
    vector<int> constructRectangle(int area) {
        int ans=0;
        int l=1,b=1;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0){
                l=area/i;
                b=i;
            }
        }
        return {l,b};
    }
};