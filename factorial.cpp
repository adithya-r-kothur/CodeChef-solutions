#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int num;
        cin>>num;
        int long  ans=1;
        while(num>0)
        {
            ans*=num;
            num--;
        }
        cout<<ans<<endl;

    }
    return 0;
}