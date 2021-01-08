#include<bits/stdc++.h>
using namespace std;

int findMaxGCD(int arr[], int n);

int main()
{
	int n;
	cin >> n;
	int   a[100001];
    int   mx=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	} 
  
    cout << findMaxGCD(a, n); 
	

}

int findMaxGCD(int arr[], int n) 
{  
    int high = 0; 
    for (int i = 0; i < n; i++) 
        high = max(high, arr[i]); 
  
     
    int count[high + 1]={0}; 
    for (int i = 0; i < n; i++) 
        count[arr[i]] = 1; 
   
    //int counter = 0; 
  
    for (int i = high; i >= 1; i--) 
    { 
        int j = i;
        int counter =0;
        while (j <= high) 
        { 
            if(count[j]==1)
             counter++;
            j+=i;
			
			if(counter==2)
			return i;	     
        } 
    } 
} 
