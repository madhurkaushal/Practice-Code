#include<iostream>
using namespace std;

int factorial (int n)
{
    // base case 
    if ( n == 1)
    {
        return 1;
    }

    else 
    {
        return n * factorial(n-1);
    }
}
int main()
{
    int n, ans;
    cout<<"Enter the number whose factorial you want \n";
    cin >> n ;
    ans = factorial(n);
    cout<< " The factorial of " << n << " is :";
    cout << ans << endl; 
}