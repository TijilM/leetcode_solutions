/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<Node*, Node*> m;
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL) {
            return NULL;
        }
        Node * src = new Node(node->val);
        m[node]=src;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            for(auto nbr : curr->neighbors){
                if(m.find(nbr)==m.end()){
                    m[nbr] = new Node(nbr->val);
                    q.push(nbr);
                }
                m[curr]->neighbors.push_back(m[nbr]);
            }
        }
        return src;
    }
};