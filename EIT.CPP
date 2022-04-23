#include<iostream>
using namespace std;

int main()
{
    int n, k ,t;
    cin>>n>>k;
    int ans=0;

    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0){
          ans++;
        }
    }

    cout<<ans;

    return 0;
}