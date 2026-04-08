#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x=0;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            x=x+p;
        }

        if(x%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }


}