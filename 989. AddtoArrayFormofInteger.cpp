class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // long ans=0;
        // for(int num:num){
        //     ans*=10;
        //     ans+=num;
        // }
        // ans+=k;
        // vector<int> sol;
        // do{
        //     sol.push_back(ans%10);
        // }while(ans/=10);
        // reverse(sol.begin(),sol.end());
        // return sol;
        // working but interger overflow

        int n =num.size();
        int i=n-1;
        string str= to_string(k);
        int j =str.size()-1;
        int carry=0;
        vector<int> res;
        while(i>=0 || j>=0 || carry){
            int sum=0;
            if(i>=0){
                sum+=num[i];
            }
            if(j>=0){
                sum+=str[j]-'0';
            }
            sum+=carry;
            carry=sum/10;
            res.push_back(sum%10);
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};