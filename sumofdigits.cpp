#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int d;
    int sum =0;
    for(int i=0;i<T;i++)
    {
      cin>>d;
     while(d>0){
        int r=d%10;
        sum+=r;
        d=d/10;
     }
    cout<<sum<<endl;
    sum=0;
    }
    return 0;
}