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

int find_key(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        
        else if(arr[s]<=arr[mid]){
            
            if(key>=arr[s] and key<=arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key<=arr[e] and key>=arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}

int32_t main()
{
   int n;
   cin>>n;
 
   
   int arr[10000];
   
   for(int i=0; i<=n-1; i++){
       cin>>arr[i];
   }
   
   
   int key;
   cin>>key;
   
   cout<<find_key(arr,n,key)<<endl;
  
   
  	
	return 0;
}
