#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    int i;
    cout << endl;
    for (i = s; i <= e; i++)
    {

        cout << arr[i] << " ";
    }
}
int binarySearch(int arr[], int key, int s, int e)
{
    print(arr, s, e);
    int mid, start;
    mid = s + (e - s) / 2;
    // base case for element not found
    if (s > e)
    {
        return -1;
    }
    // base case for element found
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, key, s, mid - 1);
    }

    else if (arr[mid] < key)
    {
        return binarySearch(arr, key, mid + 1, e);
    }
    else
    {
        return -1;
    }
}

int main()
{ // Binary search to find the elements
    int key;
    int arr[11] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
    cout << "\n Emter the value you want to search using binary search  ";
    cin >> key;
    int start = 0, end = 10;
    int ans3 = binarySearch(arr, key, start, end);
    if (ans3 == -1)
    {
        cout << "The element by binary search is not found" << endl;
    }
    else
    {
        cout << "The element by binary search found at loc " << ans3 << endl;
    }
}