#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define INT_MX 1000000

int getmid(int s, int e) { return s + (e -s)/2; }
int minval(int x, int y) { return (x < y)? x: y; }

int rmqutil(int *st,int ss,int se,int qs,int qe,int index)
{
//	cout << ss << " " << se << " " << qs << " " << qe << "  "<< index << endl;
	if(qs<=ss && qe>=se)
	return st[index];
	
	if (se < qs || ss > qe)  
        return INT_MX;  
	
	int mid = getmid(ss,se);
	
	int f = minval(rmqutil(st,ss,mid,qs,qe,2*index+1),rmqutil(st,mid+1,se,qs,qe,2*index+2));
	
//	cout << f << endl;
	
	return f;
}

int rmq(int *st,int n,int qs,int qe)
{
	//cout << "rmq te dhukse" << endl;
	return rmqutil(st,0,n-1,qs,qe,0);
}

int cnsegtutil(int a[],int ss,int se,int *st,int si)
{
	if(ss==se)
	{
		st[si]=a[ss];
		return a[ss];
		
	}
	
	int x = getmid(ss,se);
	
	st[si] = minval(cnsegtutil(a,ss,x,st,si*2+1),cnsegtutil(a,x+1,se,st,si*2+2));
	
	return st[si];
}

int* cnsegt(int a[],int n)
{
	int x = (int)ceil(log2(n));
	
	int mx = 2*(int)pow(2,x)-1;
	
	int *st = malloc(mx * sizeof(*st));
	
	cnsegtutil(a,0,n-1,st,0);
	
	return st;
}

int main()
{
	int t;
	scanf("%d",&t);
	
	int k=1;
	while(k<=t)
	{
		int n,q;
		scanf("%d %d",&n,&q);
		
		int a[n+1];
		
		int i;
		for( i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		int *st = cnsegt(a,n);
		
		/*for(int i=0;i<sizeof(st);i++)
		cout << st[i] << endl;*/
		
		//cout << "Case " << k << ":\n";
		printf("Case %d:\n",k);
		
		while(q--)
		{
		    int qs,qe;
			scanf("%d %d",&qs,&qe);
			
			qs-- ;
			qe--;
			
			printf("%d\n",rmq(st,n,qs,qe)) ;
				
		}
		
		k++;
		
	}
	
	return 0;
}
