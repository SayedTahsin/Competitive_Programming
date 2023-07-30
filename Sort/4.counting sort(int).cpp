// Counting sort which takes negative numbers as well
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector<int> count(range), output(arr.size());
    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min]++;
    printArray(arr);
    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
    printArray(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    printArray(arr);
    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
    printArray(arr);
}

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    vector<int> arr = {5,1,1,26,2,34,2,7,22};
    countSort(arr);
    printArray(arr);
    return 0;
}
