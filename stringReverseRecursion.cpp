#include <iostream>
#include <string>
using namespace std;

// Reversing the string using loops
string reverseString(string &name, int s, int e)
{
    // Solving using loops
    int i = s, j = e;
    char temp;
    while (i < j)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
    return name;
}

// Reversing the string using Recurssion

string reverseStringRecursion(string &name, int s, int e)
{
    int i = s, j = e;
    char temp;
    // Base Case
    if (i > j)
    {
        return name;
    }

    // Base Case for swapping
    temp = name[i];
    name[i] = name[j];
    name[j] = temp;
    i++;
    j--;

    return reverseStringRecursion(name, i, j);
}
int main()
{
    string name = "madhur";
    string reversedName;
    reversedName = reverseStringRecursion(name, 0, name.length() - 1);
    cout << " The reversed string is  : " << reversedName << endl;
}