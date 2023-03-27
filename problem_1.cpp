#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array :";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"enter the value of the k  : ";
    cin>>k;

    int *ptr = arr;

    cout<<*(ptr + (k-1))<<endl;

    return 0;

}