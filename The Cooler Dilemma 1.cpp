#include<bits/stdc++.h> // bansal_mukul
#include <cmath>
#include<math.h>
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
		int x,y,m;
		cin>>x>>y>>m;
		
		int res = x*m;
		
		if(res>=y){
		    cout<<"NO"<<endl;
		}
		else{
		    cout<<"YES"<<endl;
		}
} 
		
	return 0;
	
}
