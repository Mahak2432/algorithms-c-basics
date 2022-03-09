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

void magical_park(char a[][1000],int m,int n, int s, int k){
    
    bool success=true;
    
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            
            char ch=a[i][j];
            if(s<k){
                success=false;
                break;
            }
            if(ch=='*'){
                s+=5;
            }
            else if(ch=='.'){
                s-=2;
            }
            
            else{
                break;
            }
            if(j!=n-1){
                s--;
            }
        }    
    }
    if(success){
        cout<<"yes"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}


int32_t main()
{
  int m,n,s,k;
  
  cin>>m>>n>>s>>k;
  
  char a[1000][1000];
  
  for(int i=0; i<=m-1; i++){
      for(int j=0; j<=n-1; j++){
          cin>>a[i][j];
      }
  }
  magical_park(a,m,n,s,k);
   

  	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
