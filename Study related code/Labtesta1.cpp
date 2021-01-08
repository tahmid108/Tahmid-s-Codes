#include<bits/stdc++.h>
using namespace std;

void constructtree(int input[],int segtree[],int low,int high,int pos)
{
	if(low==high)
	{
		segtree[pos]=input[low];
		return;
	}
	int mid=(low+high)/2;
	constructtree(input,segtree,low,mid,2*pos+1);
	constructtree(input,segtree,mid+1,high,2*pos+2);
	
	segtree[pos]=(segtree[2*pos+1]+segtree[2*pos+2]);
	
}
int rangequery(int segtree[],int qlow,int qhigh,int low,int high,int pos)
{
	if(qlow<=low && qhigh>=high)
	{
		return segtree[pos];
	}
	if(qlow>high || qhigh<low)
	{
		return 0;
	}
	int mid= (low+high)/2;
	return (rangequery(segtree,qlow,qhigh,low,mid,2*pos+1)+rangequery(segtree,qlow,qhigh,mid+1,high,2*pos+2));
}

void update(int input[],int segtree[],int idx,int low,int high,int pos,int val)
{
	if(low==high)
	{
		input[idx]+=val;
		segtree[pos]+=val;
		return;
	}
	int mid=(low+high)/2;
	if(low<=idx && idx>=mid)
	update(input,segtree,idx,low,mid,2*pos+1,val);
	else
	update(input,segtree,idx,mid+1,high,2*pos+2,val);
	
	segtree[pos]=(segtree[2*pos+1]+segtree[2*pos+2]);
	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int N,c;
		cin >> N >> c;
	    int	input[N+1];
		for(int i=0;i<N;i++)
		{
			input[i]=0;
		}
		int segtree[2*N-1];
		constructtree(input,segtree,0,N-1,0);
		while(c--)
		{
			int a,b,c,d;
			cin >> a;
			if(a==0)
			{
				cin >> b >> c >> d;
				for(int k=b;k<=c;k++)
				update(input,segtree,k,0,N-1,0,d);
				
			}
			else if(a==1)
			{
				cin >> b >> c;
				cout <<rangequery(segtree,b,c,0,N-1,0)<<endl;
			}
		}
	}
}
