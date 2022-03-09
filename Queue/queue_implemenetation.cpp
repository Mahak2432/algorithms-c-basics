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

class Queue{
    
    int *arr;
    int f,r,ms,cs;
    
    public:
    
    Queue(int ds=5){
        arr=new int[ds];
        f=0;
        ms=ds;
        cs=0;
        r=ms-1;
        
    }
    
    bool full(){
        return cs==ms;
    }
    
    bool empty(){
        return cs==0;
    }
    
    void push(int data){
        
        if(!full()){
            r=(r+1)%ms;
            arr[r]=data;
            cs++;
        }
    }
    
    void pop(){
        
        if(!empty()){
            f=(f+1)%ms;
            cs--;
        }
    }
    
    int front(){
        return arr[f];
    }
    
    ~Queue(){
        if(arr!=NULL){
            delete []arr;
        }
    }
};

int32_t main()
{

 Queue q;
 
 for(int i=0; i<5; i++){
     q.push(i);
 }
 

 
 while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();
 }

	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
