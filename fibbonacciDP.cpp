/*Find the nth number of fibbonacci series*/
#include <iostream>
#include <vector>
using namespace std;
long long  fibboRecursion(int n)
{

    // base case
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibboRecursion(n - 1) + fibboRecursion(n - 2);
}

// Using  recurssion and memoisation
long long fibboDynamic(int n, vector<long long> &dp)
{
    // base case
    if (n <= 1)
    {
        return n;
    }
    // Step 3
    if (dp[n] != -1)
    {
        return dp[n];
    }
    // Step 2
    dp[n] = fibboDynamic(n - 1, dp) + fibboDynamic(n - 2, dp);
    return dp[n];
}

// Using tabulation finding the nth fibbinacci

long long fibboDynamicTabulation(int n, vector<long long> &dp)
{
    dp[0] = 0;
    dp[1] = 1;

    int i;
    for (i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cout << "Enter the nth number ";
    cin >> n;
    // Solving the fibbo series problem using recurssion
    long long ans = fibboRecursion(n);
    cout << "The " << n << "th term of the fibbonacci series found using recurssion is " << ans << endl;
    // Solving using Dynamic Programming Memoisation
    // Step 1 : Creating a DP array for memoisation
    vector<long long> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    ans = fibboDynamic(n, dp);
    cout << "The " << n << "th term of the fibbonacci series found using memoisation is " << ans << endl;

    // Solving using bottom up approach or Tabulation method
    
    ans = fibboDynamicTabulation(n, dp);
    cout << "The " << n << "th term of the fibbonacci series found using tabulation is " << ans << endl;
}