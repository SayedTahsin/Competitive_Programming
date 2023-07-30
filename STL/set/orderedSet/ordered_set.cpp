//*Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
template <typename DT>
using oset = tree<DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT, typename FUNC>
using o_set = tree<DT, null_type, FUNC, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2>
using omap = tree<DT1, DT2, less<DT1>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2, typename FUNC>
using o_map = tree<DT1, DT2, FUNC, rb_tree_tag, tree_order_statistics_node_update>;
/**
 * - less<data_type> 			--> Increasingly sorted set
 * - less_equal<data_type> 		--> Increasingly sorted multiset
 * - greater<data_type>			--> Decreasingly sorted set
 * - greated_equal<data_type> 	--> Decreasingly sorted multiset
 **/
void solve()
{
    o_set<int, less<int>> s;
    s.insert(9);
    s.insert(909);
    s.insert(90);
    s.insert(4);
    s.insert(1);
    cout << *s.find_by_order(3) << endl;
    cout << s.order_of_key(2) << endl;
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}