// find the winner in the game
// this program is incomplete


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int lead[n];
    int leader[n];
    for(int i=0;i<n;i++)
    {
        int si,pi;
        cin>>si>>pi;
        lead[i] = abs(si-pi);
        if(si>pi)
        {
            leader[i] = 1;
        }
        else
        {
            leader[i] = 2;
        }


    }

    int maxlead=0;

    for(int i=0;i<n;i++)
    {
        maxlead =max(maxlead,lead[i]);
    }


    
    return 0;
}