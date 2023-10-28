#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
bool isPlaindrome(int x )
{
    if ( x < 0)
    {
        return false;
    } 
    else 
    {
       string str = to_string(x);
       string rev_str = string (str.rbegin() , str.rend());
        return str == rev_str;
    }
}
};

int main()
{
    Solution s;
    bool ans;
    ans= s.isPlaindrome(121);
    cout<< "The string is a palindrome : "<< ans; 
}