void solve()
{
    cout << "Case " << cs++ << ": ";
    int n;
    cin >> n;
    vector<pair<int, int>> g[n + 1];
    int u, v, w;
    while (cin >> u >> v >> w)
    {
        if (u + v + w == 0)
            break;
        g[u].pb({w, v});
        g[v].pb({w, u});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int vis[n + 1];
    FILL(vis, -1);
    pq.push({0, 0});
    int ans = 0;
    while (!pq.empty())
    {
        int p = pq.top().second;
        int pw = pq.top().first;
        pq.pop();
        if (vis[p] != -1)
            continue;
        vis[p] = pw;
        for (int i = 0; i < g[p].size(); i++)
        {
            int c = g[p][i].second;
            int cw = g[p][i].first;
            if (vis[c] == -1)
            {
                pq.push({cw, c});
            }
        }
        ans += pw;
    }
    priority_queue<pair<int, int>> pq2;
    FILL(vis, -1);
    pq2.push({0, 0});
    while (!pq2.empty())
    {
        int p = pq2.top().second;
        int pw = pq2.top().first;
        pq2.pop();
        if (vis[p] != -1)
            continue;
        vis[p] = pw;
        for (int i = 0; i < g[p].size(); i++)
        {
            int c = g[p][i].second;
            int cw = g[p][i].first;
            if (vis[c] == -1)
            {
                pq2.push({cw, c});
            }
        }
        ans += pw;
    }
    if (ans % 2 != 0)
        cout << ans << '/' << 2 << endl;
    else
        cout << ans / 2 << endl;
}
