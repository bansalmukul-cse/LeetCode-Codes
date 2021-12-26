#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int A[n];
	
	int maxf=0;
	map<int,int> mp;
	
	for(int i=0;i<n;i++){
		cin>>A[i];
		mp[A[i]]++;
		maxf = max(maxf,mp[A[i]]);
	}
	if(n<=2){
		cout<< 0 << endl;
		continue;
	}
	if(maxf == 1){
		cout << n-2 <<endl;
		continue;
	}
	cout<< n-maxf << endl; 
} 
		
	return 0;
	
}
