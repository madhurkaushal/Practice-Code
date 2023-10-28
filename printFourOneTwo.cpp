#include <iostream>
#include <string>
using namespace std;

void convertToString(int num, string arr[])
{
    int digit;
    if ( num == 0)
    {
        return ; 
    }

    digit = num % 10;
    num = num / 10;

    convertToString(num , arr);
    cout << arr [digit];
}
int main()
{
    string arr[10] = {"Zero ", "One ", "Two ", "Three ",
                      "Four ", "Five ", "Six ",
                      "Seven ", "Eight ", "Nine "};

    int num;
    cout << "Enter number ";
    cin>> num;
    convertToString(num , arr);
}
