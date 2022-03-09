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
    
    
    int a[1000][1000];
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>a[i][j];
        }
    }
    
    int b[1000][1000];
    for(int i=0; i<=n-1; i++){
        b[i][0]=a[i][0];
    }
    
    for(int i=0; i<=n-1; i++){
        for(int j=1; j<=n-1; j++){
            b[i][j]=b[i][j-1]+a[i][j];
        }
    }
    int c[1000][1000];
    
    for(int j=0; j<=n-1; j++){
        c[0][j]=b[0][j];
    }
    
    for(int j=0; j<=n-1; j++){
        for(int i=1; i<=n-1; i++){
            c[i][j]=c[i-1][j]+b[i][j];
        }
    }
    
    int d[1000][1000];
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i==0){
                d[i][j]=0;
            }
            else if(j==0){
                d[i][j]=0;
            }
            else{
                d[i][j]=c[i-1][j-1];
            }
        }
    }
      for(int i=0; i<=n; i++){
     for(int j=0; j<=n; j++){
            cout<<d[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    int sum=0;
    for(int l1=1; l1<=n; l1++){
        for(int l2=1; l2<=n; l2++){
            for(int b1=l1; b1<=n; b1++){
                for(int b2=l2; b2<=n; b2++){
                    
                   
                    
                    sum+=(d[b1][b2]-d[l1-1][b2]-d[b1][l2-1]+d[l1-1][l2-1]);
                    cout<<l1<<" "<<l2<<"  "<<b1<<" "<<b2<<"  "<<d[b1][b2]-d[l1-1][b2]-d[b1][l2-1]+d[l1-1][l2-1]<<endl;
                }
            }
        }
    }
   
   
   cout<<sum;


	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
