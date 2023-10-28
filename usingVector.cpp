#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int i ;
    for (i=0 ; i< 5;i++)
    {
        vec.push_back(i);
    }

    // printing 
    for (i=0;i<vec.size();i++)
    {
        cout<< vec[i] << endl;
    }
    cout<< "The capacity of the vector is :  " << vec.capacity()<<endl;

}