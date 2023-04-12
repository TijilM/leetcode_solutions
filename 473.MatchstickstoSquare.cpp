class Solution {
public:
    int a,b,c,d;
    bool myfunc(vector<int> & match, int i){
        if(i==match.size()){
            if(a==0 and b==0 and c==0 and d==0)
                return true;
            return false;
        }
        if(match[i]<=a){
            a-=match[i];
            if(myfunc(match,i+1)) return true;
            a+=match[i];
        }
        if(match[i]<=b){
            b-=match[i];
            if(myfunc(match,i+1)) return true;
            b+=match[i];
        }
        if(match[i]<=c){
            c-=match[i];
            if(myfunc(match,i+1)) return true;
            c+=match[i];
        }
        if(match[i]<=d){
            d-=match[i];
            if(myfunc(match,i+1)) return true;
            d+=match[i];
        }
        return false;
    }
    bool makesquare(vector<int>& match) {
        if(match.size()<4)
            return false;
        int sum=0;
        for(int i:match)
            sum+=i;
        if( sum % 4 )
            return false;
        int length=sum/4;
        a=length,b=length,c=length,d=length;
        sort(match.rbegin(),match.rend());
        return myfunc(match,0);
        
    }
};