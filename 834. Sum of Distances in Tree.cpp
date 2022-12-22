
const int maxn = 10010;

class Solution {
public:
    // variables and functions to construct a tree 
    //( You can use other method instead this to construct a tree)
    int head[maxn], cnt;
    struct edge{
        int to, next;
    }edge[maxn<<1];
    void init_graph(int n) {
        cnt = 0; memset(head, -1, (n+5) * sizeof(head[0]));
    }
    void add_edge(int u, int v) {
        edge[cnt].to = v; edge[cnt].next = head[u]; head[u] = cnt ++;
    }

    // son_dist : the sum of distance to each child node.
    // fa_dist : the sum of distance to each father node.
    // num_sons : the number of children of each node.
    int ans[maxn], son_dist[maxn], fa_dist[maxn], num_sons[maxn];
		
    // First, calculate son_dist and num_sons.
    void dfs1(int u, int top) {
        num_sons[u] = son_dist[u] = 0;
        // go through the tree like this: top -> u -> v
        for (int k=head[u]; k!=-1; k=edge[k].next) {
            int v = edge[k].to;
            if (v == top) continue ;
            dfs1 (v, u);
            num_sons[u] += num_sons[v] + 1;
            son_dist[u] += son_dist[v] + num_sons[v] + 1;
        }
    }
    // Second, calculate fa_dist by using the info we get in dfs1 (son_dist, num_sons)
    void dfs2(int u, int top, int N) {
        fa_dist[u] = 0;
        if (top != -1)
            fa_dist[u] = fa_dist[top] + (son_dist[top] - son_dist[u] - num_sons[u] - 1) + (N - num_sons[u] - 1);
        // go through the tree like this: top -> u -> v
        for (int k=head[u]; k!=-1; k=edge[k].next) {
            int v = edge[k].to;
            if (v == top) continue ;
            dfs2 (v, u, N);
        }
    }
    
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        // construct the tree structure
        int edge_num = edges.size();
        init_graph(N);
        for (int i=0; i<edge_num; i++) {
            int x = edges[i][0], y = edges[i][1];
            add_edge(x, y); add_edge(y, x);
        }
        // calculate son_dist, num_sons and fa_dist
        dfs1(0, -1);
        dfs2(0, -1, N);
        vector<int> ans_vec;
        // For each node, ans = son_dist + fa_dist
        for (int i=0; i<N; i++) {
            //cout << i << " " << son_dist[i] << " " << fa_dist[i] << endl;
            ans_vec.push_back(son_dist[i] + fa_dist[i]);
        }
        return ans_vec;
    }
};
