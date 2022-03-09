#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define from(i,n)       for(int i=0;i<(int)n;i++)
#define from_j(i,j,n)   for(int i=j;i<(int)n;i++)


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
}
int fast_count_bits(int n){
    int ans=0;
    while(n>0){
        ans+=1;
        n=n&(n-1);
    }
    return ans;
        
}

int count_bits(int n){
    int ans=0;
    while(n>0){
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}
int32_t main()
{

    int n;
    cin>>n;
    
    cout<<(count_bits(n))<<endl;
    cout<<fast_count_bits(n)<<endl;
    cout<<__builtin_popcountll(n)<<endl;
    
	return 0;
}
