#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<__builtin_popcountll(n)<<'\n';
    }
}