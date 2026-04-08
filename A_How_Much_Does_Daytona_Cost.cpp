#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool flag=false;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(p==k)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}