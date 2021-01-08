#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int getmid(int s, int e) { return s + (e -s)/2; }
int rsmutil(int *st,int ss,int se,int qs,int qe,int index)
{
//	cout << ss << " " << se << " " << qs << " " << qe << "  "<< index << endl;
	if(qs<=ss && qe>=se)
	return st[index];
	
	if (se < qs || ss > qe)  
        return 0;  
	
	int mid = getmid(ss,se);
	
	int f = rsmutil(st,ss,mid,qs,qe,2*index+1)+rsmutil(st,mid+1,se,qs,qe,2*index+2);
	
//	cout << f << endl;
	
	return f;
}


int rsm(int *st,int n,int qs,int qe)
{
	//cout << "rmq te dhukse" << endl;
	return rsmutil(st,0,n-1,qs,qe,0);
}

int updateValutil(int *st,int ss ,int se,int i , int diff,int si)
{
	st[si] = st[si] + diff;  
    if (se != ss)  
    {  
        int mid = getMid(ss, se);  
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);  
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);  
    }  
}
int updateVal(int a[],int *st,int i,int n,int new_val)
{
	int diff = new_val - a[i];
	
	a[i] = new_val;
	
	updateValutil(st,0,n-1,i,diff,0);
}

int cnsgtreeutil(int a[],int ss,int se,int *st,int si)
{
	if(ss==se)
	{
		st[si]=a[ss];
		return a[ss];
	}
	
	int mid = getmid(ss,se);
	
	st[si] = cnsegtreeutil(a,ss,mid,st,2*si+1)+cnsegtreeutil(a,mid+1,se,st,2*si+2);
	
	return st[si];
}

int *cnsgtree(int a[],int n)
{
	int x = (int)ceil(log2(n));
	
	int mx = 2*(int)pow(2,x)-1;
	
	int *st = malloc(mx*sizeof(st));
	
	cnsgtreeutil(a,0,n-1,st,0);
	
	return st;
}

int main()
{
	int tc;
	
	scanf("%d",&tc);
	
	int k=1;
	
	while(k<=tc)
	{
		int n,q;
		
		scanf("%d %d",&n,&q);
		
		int a[n+1];
		
		int i;
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		int *st = cnsgtree(a,n);
		
		printf("Case %d:\n",k);
		while(q--)
		{
			int f;
			scanf("%d",&f);
			
			if(f==1)
			{
				int v;
				scanf("%d",&v);
				printf("%d\n",a[v]);
				
				
				updateVal(a,st,v,n,0);
			}
			else if(f==2)
			{
				int w,v;
				scanf("%d %d",&v,&w);
				
				updateVal(a,st,v,n,a[v]+w);
			}
			else if(f==3)
			{
				int qe,qs;
				scanf("%d %d",&qs,&qe);
				
				printf("%d\n",rsm(st,n,qs,qe));
			}
			
			
		}
		k++;
	}
}
