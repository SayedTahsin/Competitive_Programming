#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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

int main()
{
    oset<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(10);
    cout << s.order_of_key(10) << endl;
    cout << *s.find_by_order(2) << endl;
}