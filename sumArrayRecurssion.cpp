#include <iostream>
using namespace std;

int sumElements(int arr[], int size)
{
    int total = arr[0];
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return total;
    }
    total = total + sumElements(arr + 1, size - 1);
    return total;
}

int main()
{
     int arr[11] = {2, 4, 6, 8, 10, 12, 14, 16,18,20,22};
    int size = 11;
    // Sum of elements
    int sumArray = sumElements(arr, size);
    cout << "The sum of elements of the array is : " << sumArray << endl;

}