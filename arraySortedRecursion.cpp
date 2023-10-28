#include <iostream>
using namespace std;

bool isFound(int arr[], int key, int size)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }

    bool remainingElement = isFound(arr + 1, key, size - 1);
    return remainingElement;
}
bool isSorted(int arr[], int size)
{
    bool remainingElements;
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {

        remainingElements = isSorted(arr + 1, size - 1);

        return remainingElements;
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 8, 10, 12, 14, 16,18,20,22};
    int size = 11;
    int key;

    // To check if the array is sorted .
    bool ans = isSorted(arr, size);
    if (ans == true)
    {
        cout << " The array is sorted \n";
    }
    else
    {
        cout << "The array is not sorted \n";
    }

    

    // Finding if the key element is present in the array
    cout << "\n Emter the value you want to search ";
    cin >> key;
    bool ans2 = isFound(arr, key, size);
    if (ans2 == true)
    {
        cout << " The key is found \n";
    }
    else
    {
        cout << "The key is not found \n";
    }

    
}