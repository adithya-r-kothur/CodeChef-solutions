#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<(n+m+2)<<endl;

        if(n%2 == 0) //n is even 
        {
            if(n<m)
            {
                cout<<"1";
                while(m)
                {
                    cout<<"0"<<"1";
                    m--;
                }
            }
            else if(m<n)
            {
                cout<<"0";
                while(n)
                {
                    cout<<"1"<<"0";
                    n--;
                }
            }
            else
            {
                cout<<"1";
                while(n+1)
                {
                    cout<<"0"<<"1";
                    n--;
                }
            }
            cout<<endl;
        }
        else if (n%2 != 0) // n is odd
        {
             if(n>m)
             {
                 cout<<"0";
                 while(n)
                 {
                    cout<<"1"<<"0";
                    n--;
                 }
             }
             else if(m>n)
             {
                 cout<<"1";
                 while(m)
                 {
                     cout<<"0"<<"1";
                     m--;
                 }
             }
              else
            {
                cout<<"0";
                while(n+1)
                {
                    cout<<"1"<<"0";
                    n--;
                }
            }
            cout<<endl;
        }

        }
       
    
    return 0;
}