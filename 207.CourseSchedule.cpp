class Solution {
public:
    unordered_map<int, vector<int>> m;
    bool canFinish(int numCourses, vector<vector<int>>& prq) {
       
        for(int i=0;i<prq.size();i++){
            m[prq[i][1]].push_back(prq[i][0]);
        } // make edges
        set <int> visited;

        for(int i=0;i<numCourses;i++){
            if(!dfs(i,visited))
                return false;
        }

        return true;
    }
   bool dfs(int course, set<int> &visited){

        if(visited.find(course)!=visited.end()) // cycle detection
            return false;

        if(m[course].empty())
            return true;

        visited.insert(course);

        for (int i = 0; i < m[course].size(); i++) {
            int nextCourse = m[course][i];
            if (!dfs(nextCourse, visited)) {
                return false;
            }
        }

        m[course].clear();
        visited.erase(course);
        return true;
        
    }
};