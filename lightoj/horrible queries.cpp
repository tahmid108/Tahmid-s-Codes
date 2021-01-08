#include<stdio.h>
#include<iostream>
#include<string.h>
#define size 10009
#define ll long long
using namespace std;

ll tree[size*4];
ll lazy[size*4];

ll update(ll a,ll b,ll x,ll y,ll node,ll val)
{
	if(lazy[node])
	{
		tree[node] += lazy[node]*((b-a)+1);
		if(a!=b)
		{
			lazy[node*2]+=lazy[node];
			lazy[node*2+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	
	if(b<x || a>y)
	{
		return 0;
	}
	
	if(a>=x && b<=y)
	{
		tree[node] += val * ((b - a) + 1);
		
		if(a != b) {
			lazy[node * 2] += val;
			lazy[node * 2 + 1] += val;
		}
		
		return 0;
	}
	
	update(a,(a+b)/2,x,y,node*2,val);
	update((a+b)/2+1,b,x,y,node*2+1,val);
	
	tree[node]=tree[node*2]+tree[node*2+1];
}

ll query(ll a,ll b,ll x,ll y,ll node)
{
	ll c,d;

	if(b<x || a>y || y<x)
	{
		return 0;
	}
	if(lazy[node])
	{
		tree[node] += lazy[node]*((b-a)+1);
		if(a!=b)
		{
			lazy[node*2]+=lazy[node];
			lazy[node*2+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(a>=x && b<=y)
	{
		return tree[node];
	}
	c=query(a,(a+b)/2,x,y,node*2);
	d=query((a+b)/2+1,b,x,y,node*2+1);
	
	return c+d;
	
}

int main()
{
	int tc;
	ll n,q,cs=1,x,y,v,c;
	scanf("%d",&tc);
	while(cs<=tc)
	{
		scanf("%lld",&n);
		scanf("%lld",&q);
		
		printf("Case %d:\n",cs);
		memset(tree, 0, sizeof(tree));
		memset(lazy, 0, sizeof(lazy));
		while(q--)
		{
			scanf("%lld",&c);
			scanf("%lld",&x);
			scanf("%lld",&y);
			if(c){
				printf("%lld\n",query(0,n-1,x,y,1));
			}
			else{
				scanf("%lld",&v);
				update(0,n-1,x,y,1,v);
			}
		}
		
		cs++;
	}
} 
