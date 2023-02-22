#include<bits/stdc++.h>
using namespace std;
int myans(int arr[],int n){
		int cur_max = 0, cur_min = 0, sum = 0, max_sum = arr[0], min_sum = arr[0];
        for (int i=0;i<n;i++) {
            cur_max = max(cur_max+arr[i], arr[i]);
            max_sum = max(max_sum, cur_max);
            cur_min = min(cur_min+arr[i], arr[i]) ;
            min_sum = min(min_sum, cur_min);
            sum += arr[i];
        }
        return sum == min_sum ? max_sum : max(max_sum, sum - min_sum);

}
int main() {
	int t;
	cin>>t ;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<myans(arr,n)<<endl;	
	}
	return 0;
}