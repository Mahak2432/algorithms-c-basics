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
int cnt=0; 
void insertion_sort(int a[],int n){
    for(int i=1; i<=n-1; i++){
        
        int e=a[i];
        int j=i-1;
        while(j>=0 and a[j]>e){
            cnt++;
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;

    }
}    
        
     




int32_t main()
{
  int n;
  cin>>n;
  
  int a[1000];
  
  for(int i=0; i<=n-1; i++){
      cin>>a[i];
  }
  
  insertion_sort(a,n);
  for(int i=0; i<=n-1; i++){
      cout<<a[i]<<",";
  }
  cout<<endl<<cnt<<endl;

  	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
