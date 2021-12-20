#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int ans=0;
        int crr=0;
        if(s<=n)
        ans=s;
        else {
            crr=s-n;
            ans=n-crr;
        }
        cout<<ans<<endl;
    }
    return 0;
}
