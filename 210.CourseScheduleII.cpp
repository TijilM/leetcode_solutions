class Solution {
public:
int n;
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        n=num;
        vector<int> adj[n];
        vector<int> inde(n);
        for(auto it : pre){
            adj[it[1]].push_back(it[0]);
            inde[it[0]]++;
        }
        vector<int> topo = toposort(adj,inde);
        if(num== topo.size())
            return topo;
        return {};
    }
    vector<int> toposort(vector<int> adj[],vector<int> inde){
        queue<int> q;
        for(int i=0;i<n;i++){
            if(inde[i]==0)
                q.push(i);
        }
        vector<bool> vis(n); 
        vector<int> temp;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            temp.push_back(node);
            for(auto it : adj[node]){
                inde[it]--;
                if(inde[it] == 0){
                    q.push(it);
                }
            }
        }
        return temp;
    }   
};