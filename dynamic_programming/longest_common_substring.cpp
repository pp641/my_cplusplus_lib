#include<bits/stdc++.h>
using namespace std;
int LCS(string s1,string s2,int m,int n)
    {
        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i =0; i<=m;i++)
        {
            for(int j=0; j<=n;j++)
            {
                if(i ==0 || j == 0)
                        dp[i][j] = 0;
            }
        }


        int ans = INT_MIN;
        for(int i =1; i<=m;i++)
        {
            for(int j=1; j<=n;j++)
            {
                if(s1[i-1] == s2[j-1])
                        dp[i][j] = 1 + dp[i-1][j-1];
                else
                            dp[i][j] = 0;
                ans = max(dp[i][j],ans);
            }
        }
    return ans;
    }
int main()
{

    int m,n;
    string s1,s2;
    cin>>m>>n;
    cin>>s1>>s2;
    cout<<LCS(s1,s2,m,n);
}
