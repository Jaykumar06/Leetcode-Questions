class Solution {
    bool dfs(int u, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& recStack) {
        visited[u] = true;
        recStack[u] = true;

        for (int v : adj[u]) {
            if (!visited[v]) {
                if (dfs(v, adj, visited, recStack)) {
                    return true; // cycle found
                }
            } else if (recStack[v]) {
                return true; // back edge → cycle
            }
        }

        recStack[u] = false; // backtrack
        return false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        
        // Build adjacency list
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]); 
        }

        vector<bool> visited(numCourses, false);
        vector<bool> recStack(numCourses, false);

        // Check each course
        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, recStack)) {
                    return false; // cycle detected
                }
            }
        }
        return true; // no cycle → all courses can be finished
    }
};
