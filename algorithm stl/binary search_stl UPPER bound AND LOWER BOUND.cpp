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
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    
    //search-->find
    
    int key;
    cin>>key;
    
    bool present=binary_search(arr,arr+n,key);
    
    if(present){
        cout<<"present";
    }
    else{
        cout<<"absent";
    }
    
    auto lb=lower_bound(arr,arr+n,key); //this will give  first element >=key 
    cout<<endl<<"lower bound of key is "<<lb-arr<<endl;
    
    //upper bound
    
    auto ub=upper_bound(arr,arr+n,key); //this will give first element >key
     cout<<"upper bound of key is "<<ub-arr<<endl;
     
    cout<<"frequency of key is "<<ub-lb<<endl;
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
