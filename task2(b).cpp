#include <iostream>

using namespace std;

int main()
{
    int n,q; //n is length of arr and q is the number of queries
    cin >> n;
    cin>>q;
    int l[q],r[q],value[q];
    int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<q;i++)
    {
        cin>>l[i]>>r[i]>>value[i];
      for(int j=l[i];j<=r[i];j++)
        {
            arr[j]+= value[i];
        }
    }
    int max=arr[0];
     for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max = max + arr[i];
            arr[i] = max - arr[i];
            max = max - arr[i];
        }
    }
    cout<<max;
}
