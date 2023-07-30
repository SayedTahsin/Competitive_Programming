#include <bits/stdc++.h>
using namespace std;
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
    int arr[11];
    srand(time(NULL));
    for (int i=0; i<10; i++)
        arr[i] = rand()%100;
    qsort(arr, 10, sizeof(int), compare);
    for (int i = 0; i < 10; i++)
        cout<< arr[i] << " ";

    return 0;
}


