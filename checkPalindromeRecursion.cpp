#include <iostream>
#include <string>
using namespace std;

// Checking if the string is a palindrome using loops
bool checkPalindrome(string &name, int s, int e)
{
    // Solving using loops
    int i = s, j = e;
    while (i < j)
    {
        if (name[i] == name[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

// Checking if the string is a palindrome using Recursion
bool checkPalindromeRecursion(string &name, int s, int e)
{
    // base case
    int i = s, j = e;
    if (i > j)
    {
        return true;
    }

    if (name[i] != name[j])
    {
        return false;
    }

    else
    {
        i++;
        j--;
        return checkPalindromeRecursion(name, i, j);
    }
}

int main()
{
    string name = "madhur";

    if (checkPalindromeRecursion(name, 0, name.length() - 1))
    {
        cout << " The  string  :  " << name << " is a palindrome " << endl;
    }
    else
    {
        cout << " The  string  : " << name << " is not a palindrome " << endl;
    }
}