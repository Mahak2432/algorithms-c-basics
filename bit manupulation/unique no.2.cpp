// except two nos. all are reapting twice
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

// every no. occurs twice accept two no. find them
int32_t main()
{
   int n;
   cin>>n;
   
   int xor_=0;
   int arr[100000]={0};
   
   for(int i=0; i<n; i++){
       int no;
       cin>>no;
       
       xor_=(xor_^no);
       arr[i]=no;
   }
   
   int pos=0;
   int temp=xor_;
   while((temp&1)!=1){
       pos++;
       temp>>1;
   }
   
   int mask=(1<<pos);
    
   int a=0;
   
   for(int i=0; i<n; i++){
       if((arr[i]&mask)==1){
           a=(a^arr[i]);
       }
   }
   int b=(xor_^a);
   
   cout<<min(a,b)<<" "<<max(a,b);

	
	return 0;
}