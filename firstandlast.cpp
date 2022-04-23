#include<iostream>
#include<cmath>
using namespace std;


int count_digit(int number) {
   return int(log10(number) + 1);
}

int main()
{
    int T;
    cin>>T;
    int num;
    int lastdigit=0;
    int firstdigit=0;
    int ans;
    for(int i=0; i<T;i++)

    {
        cin>>num;
        lastdigit=num%10;
        int f=0;
        while(num>0)
        { 
            f=num%10;
           num=num/10;
        }
        firstdigit=f;
        ans=firstdigit+lastdigit;
        cout<<ans<<endl;

    }
    return 0;
}