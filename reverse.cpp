#include<iostream>
using namespace std;

int main()
{

    int T;
    cin>>T;
    int n;
    int lastdigit =0;

    for(int i=0; i<T;i++)
    {
    int ans=0;
        cin>>n;
        while(n>0)
        {
        lastdigit =n%10; 
           ans=ans *10 +lastdigit;
           n=n/10;
        }
        cout<<ans<<endl;
    }
    return 0;
}