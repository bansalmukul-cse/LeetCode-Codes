class Solution {
public:
	int numTilings(int N) {
		int mod=1e9+7;
		vector<long> dp1(N+1);
		vector<long> dp2(N+1);
		vector<long> dp3(N+1);
		dp1[1]=1;
		dp1[0]=1;
		dp2[0]=1;
		dp3[0]=1;
		dp2[1]=0;
		dp3[1]=0;
		for(int i=2;i<=N;i++){
			dp1[i]=(dp1[i-1]+dp1[i-2]+dp3[i-1]+dp2[i-1])%mod;
			dp2[i]=(dp1[i-2]+dp3[i-1])%mod;
			dp3[i]=(dp1[i-2]+dp2[i-1])%mod;
		}

		return dp1[N];


	}
};
