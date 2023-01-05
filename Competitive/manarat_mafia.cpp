#include<stdio.h>

vector<int>v[sz];
int cnt=0;
int vis[sz];
ll big(ll a,ll b)
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b%2)
            res=(res*y)%mod;
        y*=y;
        y%=mod;
        b/=2;
    }
    return res%mod;
}


void dfs(int n,int p)
{
    vis[n]=1;
    cnt++;
    for(auto x: v[n])
    {
        cout<<x<<endl;
        if(x-p&&!vis[x])
            dfs(x,n);
    }
}

int main()
{
    int i,j,a,b,c,n,k=0;
    ll ans=0,temp;
    si(n);
    si(k);
    for(i=1; i<n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(!c)
        {
            v[a].pb(b);
            v[b].pb(a);
        }
    }
    ans=big(n,k);
    cnt=0;



    for(i=1; i<=n; i++)
    {

        if(!vis[i])
        {
            cnt=0;
            dfs(i,i);
            temp=big(cnt,k);
            ans=(ans-temp+mod)%mod;
        }
    }
    pl(ans);
    return 0;
}