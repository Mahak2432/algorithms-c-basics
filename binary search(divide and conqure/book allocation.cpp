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
bool ispossible(int a[],int n,int m, int current_min){
    
    int studentused=1;
    int pages_reading=0;
    
    for(int i=0; i<=n-1; i++){
        
        if(pages_reading+a[i]>current_min){
            studentused++;
            pages_reading=a[i];
            
            
            if(studentused>m){
                return false;
            }
        }
        else{
            pages_reading+=a[i];
        }
    }
    return true;
    
}

int find_page(int a[],int n,int m){
    if(n<m){
        return -1;;
    }
    
    int sum=0;
    
    int ans=INT_MAX;
    
    for(int i=0; i<=n-1; i++){
        sum+=a[i];
    }
    int s=a[n-1];
    int e=sum;
    
    while(s<=e){
        int mid=(s+e)/2;
        
        if(ispossible(a,n,m,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    
    return ans;
}


int32_t main()
{
    
    int n,m;
    cin>>n>>m;
    
    int a[1000];
    
    for(int i=0; i<=n-1; i++){
        cin>>a[i];
    }
    
    cout<<"min number of pages "<<find_page(a,n,m);


	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
