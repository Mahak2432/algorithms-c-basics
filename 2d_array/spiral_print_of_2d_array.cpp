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
void spiral_print(int a[][1000],int m,int n){
    
    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;
    
    while(sr<=er and sc<=ec){
        for(int i=sc; i<=ec; i++){
            cout<<a[sr][i]<<" ";
            
        }
        sr++;
        
        for(int i=sr; i<=er; i++){
            cout<<a[i][ec]<<" ";
          
        }
          ec--;
        
        if(sr<er){
            for(int i=ec; i>=sc; i--){
                cout<<a[er][i]<<" ";
              
            }
        er--;
        }
        
        if(sc<ec){
            for(int i=er; i>=sr; i--){
                cout<<a[i][sc]<<" ";
                
            }
        sc++;
        }
    }
}


int32_t main()
{
  
    int a[1000][1000]={0};
    
    int m,n;
    cin>>m>>n;
    
    int val=1;
    
    for(int row=0; row<=m-1; row++){
        for(int col=0; col<=n-1; col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    
   spiral_print(a,m,n);
 
   

  	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
