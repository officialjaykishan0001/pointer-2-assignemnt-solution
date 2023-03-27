#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)

        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum = sum + *(*(arr + i ) + j);
            }
        }
    }

cout<<sum<<endl;

return 0;
}