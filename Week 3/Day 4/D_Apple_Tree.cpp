#include <bits/stdc++.h>
#define nl << "\n"
using namespace std;
const int N = 1e6 + 5;
vector<int> adj[N];
int leafs[N];
void dfs(int src, int par)
{
    if (adj[src].size() == 1 and adj[src][0] == par)
    {
        leafs[src]++;
        return;
    }
    for (int child : adj[src])
    {
        if (child != par)
        {
            dfs(child, src);
            leafs[src] += leafs[child];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
            leafs[i] = 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int u, v;
            cin >> u >> v;
            cout << 1ll * leafs[u] * leafs[v] nl;
        }
    }

    return 0;
}