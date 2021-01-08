#include<bits/stdc++.h>
#define maxn 1000007
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
	
	segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);
	
}
int rangequery(int segtree[],int qlow,int qhigh,int low,int high,int pos)
{
	if(qlow<=low && qhigh>=high)
	{
		return segtree[pos];
	}
	if(qlow>high || qhigh<low)
	{
		return maxn;
	}
	int mid= (low+high)/2;
	return min(rangequery(segtree,qlow,qhigh,low,mid,2*pos+1),rangequery(segtree,qlow,qhigh,mid+1,high,2*pos+2));
}
int main()
{
	int input[100],segtree[1000],n,val,location,start,end,minValue;
	cout << "NUMBER OF ELEMENTS:"<<endl;
	cin >> n;
	cout << "ENTER THE INPUT ARRAY:";
	for(int i=0;i<n;i++)
	{
		cin >> input[i];
	}
	constructtree(input,segtree,0,n-1,0);
	for(int i=0;i<2*n-1;i++)
	cout << segtree[i]<<endl;
	cout << "Query"<<endl;
	cin >> start >> end;
	int mini=rangequery(segtree,start,end,0,n-1,0);
	cout << endl << endl << mini << endl;
}
