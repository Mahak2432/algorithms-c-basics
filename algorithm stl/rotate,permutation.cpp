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

int32_t main()
{
 
 int arr[]={10,20,30,40,50};
 
 int n=sizeof(arr)/sizeof(int);
 
 rotate(arr,arr+2,arr+n);
 
 for(int i=0; i<=n-1; i++){
    cout<<arr[i]<<" ";
 }

 cout<<endl;
 
   vector<int>v{10,20,30,40,50};
   
   rotate(v.begin(),v.begin()+3,v.end());
   
   for(int i=0; i<v.size(); i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
   //next permutation
   
   next_permutation(v.begin(),v.end());
   //this will give next bigger no. that can be made using digits of vector 
   for(int x:v){
       cout<<x<<" ";
   }
   
   
  	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
