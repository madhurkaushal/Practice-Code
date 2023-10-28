#include <iostream>
using namespace std;

void printArray(int A[],int n)
{
    for ( int i=0;i<n ;i++)
    {
        cout<< A[i] << "  ";
    }
    cout<< endl;

}

void swapArray(int A[], int n)
{
    int temp=0;
    for (int i = 0; i < n; i= i + 2)
    {
        if (i + 1 < n)
        {
            temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
        }
        
    }
}


int main()
{
    int oddArray[] = {4, 3, 5, 4, 2, 3, 4};
    swapArray(oddArray,7);
    printArray(oddArray,7);
    int evenArray[] = {2, 3, 4, 2, 3, 5, 4, 3};
    swapArray(evenArray,8);
    printArray(evenArray,8);
}