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
   int n;
   cin>>n;
   
   int a[1000];
   int cumsum[1000]={0};
   
   int currentsum=0;
   int maximumsum=0;
   int left;
   int right;
   
   cin>>a[0];
   cumsum[0]=a[0];
   for(int i=1; i<=n-1; i++){
       cin>>a[i];
       cumsum[i]=cumsum[i-1]+a[i];
   }
   
   for(int i=0; i<=n-1; i++){
       
       for(int j=i; j<=n-1; j++){
           
           if(i==0){
               currentsum=cumsum[j];
           }
           
           else{
               currentsum=cumsum[j]-cumsum[i-1];
               
           }
           
            
           
           
           if(currentsum>maximumsum){
               maximumsum=currentsum;
               left=i;
               right=j;
           }
           
       }
   }
   cout<<"maximum sum is"<<maximumsum<<endl;
   
   for(int k=left; k<=right; k++){
       cout<<a[k]<<",";
   }
  


  	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
