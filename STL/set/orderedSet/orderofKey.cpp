// order_of_key: The number of items in a set that are strictly smaller than k
// find_by_order: It returns an iterator to the ith largest element
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
// Driver program to test above functions
int main()
{
     // Ordered set declared with name o_set
     o_set<int, less<int>> v;

     // insert function to insert in
     // ordered set same as SET STL
     v.insert(5);
     v.insert(1);
     v.insert(2);

     // Finding the second smallest element
     // in the set using * because
     //  find_by_order returns an iterator
     cout << *(v.find_by_order(1)) << endl;

     // Finding the number of elements
     // strictly less than k=4
     cout << v.order_of_key(4)
          << endl;

     // Finding the count of elements less
     // than or equal to 4 i.e. strictly less
     // than 5 if integers are present
     cout << v.order_of_key(5) << endl;

     // Deleting 2 from the set if it exists
     if (v.find(2) != v.end())
          v.erase(v.find(2));

     // Now after deleting 2 from the set
     // Finding the second smallest element in the set
     cout << *(v.find_by_order(1))
          << endl;

     // Finding the number of
     // elements strictly less than k=4
     cout << v.order_of_key(4)
          << endl;

     return 0;
}