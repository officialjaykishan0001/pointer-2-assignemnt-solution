#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int array [n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int *ptr = &array[n-1];


    for(int i=0;i<n;i++)
    {
        cout<<*ptr--<<" ";
    }
    cout<<endl;
    return 0;
}