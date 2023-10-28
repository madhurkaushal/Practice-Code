#include<iostream>
using namespace std;

int power (int n, int m)
{
    int ans;
   // Base case 
   if (m==0)
   {
    return 1;
   }
   if (m == 1)
   {
    return n;
   }
   else
   {
    ans = n * power ( n , m-1);
   }
   return ans; 
}
int main()
{
    int n,m, ans;
    cout<<"Enter the number  \n";
    cin >> n ;
    cout<<"Enter the power  \n";
    cin >> m ;
    ans = power(n,m);
    cout<< " The power of " << n << " is :";
    cout << ans << endl; 
}