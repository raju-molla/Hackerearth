#include<bits/stdc++.h>
using namespace std;
int c=0;
int Binary_search(vector<int>&v, int n)
{
    int sum=0;
    c=0;;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]<=n){
            sum+=v[i];
            c++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while (q--)
    {
        int a;
        cin>>a;
        int ans=Binary_search(v,a);
       cout<<c<< " "<<ans<<endl;
    }
    
}
