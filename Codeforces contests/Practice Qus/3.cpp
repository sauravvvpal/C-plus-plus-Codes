#include<bits/stdc++.h>
using namespace std;
int n,m,f[100005],x[100005],y[100005];
char s[100005];
int main()
{
    cin>>n>>m;
    cin>>(s+1);
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        f[i]=1e9;
    }
    for(int i=n;i>=1;i--)
    {
        if(x[i]+y[i]<f[i])
        {
            f[i]=x[i]+y[i];
            for(int j=2*x[i];j<=f[i];j+=x[i])
            {
                int k=j-x[i];
                int t=min(f[i]-j,k);
                if(f[i-t]>j+k-2*t)
                    f[i-t]=j+k-2*t;
            }
        }
    }
    int now=1;
    for(int i=1;i<=m;i++)
    {
        if(s[i]=='A')
        {
            if(f[now]-x[now]-y[now]<=0)
                break;
            now+=f[now]-x[now]-y[now];
        }
        if(s[i]=='B')
        {
            if(f[now]-x[now]+y[now]<=0)
                break;
            now+=f[now]-x[now]+y[now];
        }
        if(s[i]=='C')
        {
            if(f[now]+x[now]-y[now]<=0)
                break;
            now+=f[now]+x[now]-y[now];
        }
        if(s[i]=='D')
        {
            if(f[now]+x[now]+y[now]<=0)
                break;
            now+=f[now]+x[now]+y[now];
        }
    }
    cout<<x[now]<<" "<<y[now];
    return 0;
}