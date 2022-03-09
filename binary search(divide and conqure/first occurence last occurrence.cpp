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

int last_occurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    
    int ans;
    
    while(s<=e){
        int mid =(s+e)/2;
        
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
            
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    
    return ans;
}

int first_occurence(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    
    int ans;
    
    while(s<=e){
        int mid =(s+e)/2;
        
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
            
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    
    return ans;
}

int32_t main()
{
   int n;
 
   
   int arr[]={1,2,5,5,5,5,7,8};
   
   n=sizeof(arr)/sizeof(int);
   
   int key;
   cin>>key;
   
   cout<<first_occurence(arr,n,key)<<endl;
   cout<<last_occurence(arr,n,key)<<endl;
   
  	
	return 0;
}
