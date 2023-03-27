#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int *ptr = arr;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(ptr + i);
    }

    cout<<endl<<sum<<endl;

    return 0;
}