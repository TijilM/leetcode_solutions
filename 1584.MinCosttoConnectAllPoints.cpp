class DSU{
    int *parent;
    int *rank;
    public:
    DSU(int v){
        parent=new int[v];
        rank=new int[v];
        for(int i=0;i<v;i++){
            parent[i]=-1;
            rank[i]=1;
        }
    }
    int find(int i){
        if(parent[i]==-1)
            return i;
        else
        return parent[i]=find(parent[i]);
    }
    void unite(int x,int y){
        int s1=find(x);
        int s2=find(y);
        if(s1!=s2){
            if(rank[s1]<rank[s2]){
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }
            else{
                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
        }
    }
};
class Solution {
    vector<vector<int>> edgelist;
    int n;
public:
    int kruksal(){
        sort(edgelist.begin(),edgelist.end());
        DSU s(n);
        int ans=0;
        for(auto edge : edgelist){
            int x=edge[1];
            int y=edge[2];
            if(s.find(x)!=s.find(y)){
                s.unite(x,y);
                ans+=edge[0];
            }
        }
        cout<<ans;
        return ans;
    }
    int minCostConnectPoints(vector<vector<int>>& ps) {
        n =ps.size();
        for (auto i = 0; i < n; ++i)
        for (auto j = i + 1; j < n; ++j) {
            edgelist.push_back({abs(ps[i][0] - ps[j][0]) + abs(ps[i][1] - ps[j][1]), i, j});
        }
        int ans = kruksal();
        return ans;
    }
};