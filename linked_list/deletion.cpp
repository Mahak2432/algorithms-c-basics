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
class node{
    public:
    int data;
    node*next;
    
    node(int d){
        data =d;
        next=NULL;
    }
    
};

void insertathead(node*(&head),int d){
    
    if(head==NULL){
        head=new node(d);
        return;
    }
    
    node*n=new node(d);
    n->next=head;
    head=n;
}

void print(node*head){
    
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
    
}

int length(node*head){
    int cnt=0; 

    while(head!=NULL){
        cnt++;
        head=head->next;
    }
 
    return cnt;
}

void insertatend(node*&head,int d){
    
    if(head==NULL){
        head=new node(d);
        return;
    }
    
    node*tail=head;
    
    while(tail->next!=NULL){
        tail=tail->next;
    }
    
    tail->next=new node(d);
    return;
}
void insertatmiddle(node*&head,int d,int p){
    
    
    if(head==NULL or p==0){
        insertathead(head,d);
        return;
    }
    else if(p>length(head)){
        insertatend(head,d);
    }
    else{
        int jump=1;
        node*temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
        
    }
}

void deletehead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}


void deleteattail(node*&head){
    
    node*prev;
    
    node*tail=head;
    
    while(tail->next!=NULL){
        prev=tail;
        tail=tail->next;
    }
  
    delete tail;
    prev->next=NULL;
    
}

void deleteatmiddle(node*&head,int p){
    
    if(head==NULL){
        return;
    }    
    if(p==1){
        deletehead(head);
        return;
    }
         
    if(p>length(head)){
        deleteattail(head);
        return;
    }
          
    int jump=1;
    node*temp=head;
    node*prev;
    while(jump<=(p-1)){
  
        prev=temp;
        temp=temp->next;
        jump++;
    }
    prev->next=temp->next;
    delete temp;
}
int32_t main()
{

node*head=NULL;

insertathead(head,3);
insertathead(head,1);
insertathead(head,2);
insertathead(head,5);

print(head);

insertatmiddle(head,4,3);
insertatend(head,6);

print(head);



deletehead(head);
print(head);

deleteattail(head);
print(head);



deleteatmiddle(head,2);
print(head);

	return 0;
}
