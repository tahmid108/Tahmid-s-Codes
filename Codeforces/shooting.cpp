#include<bits/stdc++.h>
using namespace std;

struct Comp {
  bool operator()(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second > b.second;
  }

};


int main()
{
	int n;
	vector < pair<int,int> > a;
	
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin >> temp;
		a.push_back(make_pair(temp,i));
	}
	
	Comp comp_functor;
    std::sort(a.begin(), a.end(), comp_functor);
	
	
	int ans1=0;
	int f =0;
	vector < int > ans;
	for(int i=a.size()-1;i>=0;i--)
	{
	//	cout << a[i].first << endl;
		ans1= ans1 + a[i].first * f + 1;
	//	cout << ans1 << endl;
		ans.push_back(a[i].second+1);
		f++;
	}
	

	cout << ans1 << endl;
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		cout << ans[i] << endl;
		else
     	cout << ans[i] << " ";
    }

	
}
