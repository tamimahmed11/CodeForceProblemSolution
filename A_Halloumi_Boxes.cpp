#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(auto &x:a) cin>>x;
        vector<int>s=a;
        sort(s.begin(),s.end());
        if(k==1) cout<<(a==s?"YES":"NO")<<"\n";
        else cout<<"YES\n";
    }
}