#include<bits/stdc++.h>
using namespace std;

void swap (int *t , int *p)
{
	int x= *t;
	*t =*p;
	*p = x;
}

int partition(int a[],int beg,int end)
{
	int pivot=a[end];
	int i=(beg-1);
	for(int j=beg;j<=end;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[end]);
	return i+1;
}

void quicksort(int a[],int beg,int end)
{
	if(beg<end)
	{
	
	int pivot=partition(a,beg,end);
	
	quicksort(a,beg,pivot-1);
	quicksort(a,pivot+1,end);
    }
    else 
    return ;
	
}

int main()
{
	cout << "NUMBER OF ELEMENTS:" << endl;
	int n;
	cin >> n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	quicksort(a,0,n-1);
	
	cout << "SORTED:\n";
	
	for(int i=0;i<n;i++)
    cout << a[i] << endl;
	
}
