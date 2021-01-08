#include<bits/stdc++.h> 
using namespace std; 
  
#define MAX 1000001 
  
// phi[i] stores euler totient function for i 
// result[j] stores result for value j 
long long phi[MAX], result[MAX]; 
  
// Precomputation of phi[] numbers. Refer below link 
// for details : https://goo.gl/LUqdtY 
void computeTotient() 
{ 
    // Refer https://goo.gl/LUqdtY 
    phi[1] = 1; 
    for (int i=2; i<MAX; i++) 
    { 
        if (!phi[i]) 
        { 
            phi[i] = i-1; 
            for (int j = (i<<1); j<MAX; j+=i) 
            { 
                if (!phi[j]) 
                    phi[j] = j; 
  
                phi[j] = (phi[j]/i)*(i-1); 
            } 
        } 
    } 
} 
  
// Precomputes result for all numbers till MAX 
void sumOfGcdPairs() 
{ 
    // Precompute all phi value 
    computeTotient(); 
  
    for (int i=1; i<MAX; ++i) 
    { 
        // Iterate throght all the divisors 
        // of i. 
        for (int j=2; i*j<MAX; ++j) 
            result[i*j] += i*phi[j]; 
    } 
  
    // Add summation of previous calculated sum 
    for (int i=2; i<MAX; i++) 
        result[i] += result[i-1]; 
} 
  
// Driver code 
int main() 
{ 
    sumOfGcdPairs(); 
    
    int tc;
    cin >> tc;
    while(tc--)
    {
    	int n;
    	cin >> n;
    	cout << result[n] << endl;
	}
    
} 
