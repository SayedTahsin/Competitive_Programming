#include <bits/stdc++.h>
using namespace std;
int arr[] = {2, 1, 2, 26, 1, 2, 3, 2, 2};
int n = sizeof(arr) / sizeof(arr[0]);
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int pi = low;          // Index of smaller element

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pi]);
            pi++;
        }
    }
    swap(arr[pi], arr[high]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return pi;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        cout << endl;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
