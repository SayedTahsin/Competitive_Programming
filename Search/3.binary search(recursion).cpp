#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int s, int l, int num)
{
    if (s <= l)
    {
        int mid = (s + l) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binary(arr, s, mid - 1, num);
        if (arr[mid] < num)
            return binary(arr, mid + 1, l, num);
    }
    else
        return -1;
}
int main()
{
    int n, arr[100], l, f, num;
    cout << "Array Size: ";
    cin >> n;
    cout << "Array Input: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << "Element TO search: ";
    cin >> num;

    int r = binary(arr, 0, n - 1, num);

    if (r == -1)
        cout << "Element not Found.\n";
    else
        cout << "Element found." << endl;
    return 0;
}
