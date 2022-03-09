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
}class node{
    public:
    int data;
    node*next;
    
    node(int d){
        data =d;
        next=NULL;
    }
    
};

void insert(node*&head,int key){
    
    node*n=new node(key);
    
    n->next=head;
    node*temp=head;
    
    if(temp!=NULL){
        
        while(temp->next!=head){
            temp=temp->next;
            
        }
        temp->next=n;
        
    }
    else{
        n->next=n;
    }
    head=n;
}

node *getnode(node*head,int key){
    
    node*temp=head;
    
    while(temp->next!=head){
        
        if(temp->data==key){
            return temp;
            
        }
        temp=temp->next;
        
    }
    if(temp->data==key){
        return temp;
    }
    return NULL;
}


void delete_node(node*&head,int key){
    
    node*del=getnode(head,key);
    
    if(del==NULL){
        return;
    }
    
    if(head==del){
        head=head->next;
    }
    
    node*temp=head;
    
    while(temp->next!=del){
        temp=temp->next;
    }
    temp->next=del->next;
    delete del;
}

void print(node*head){
    
    node*temp=head;
    while(temp->next!=head){
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
   
}


int32_t main()
{


node*head=NULL;

insert(head,10);
insert(head,20);
insert(head,30);
insert(head,40);
insert(head,50);
insert(head,60);
print(head);
delete_node(head,10);

print(head);
delete_node(head,20);
print(head);

	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
