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



node*take_input(){
    
    int d;
    cin>>d;
    node*head=NULL;
    
    while(d!=-1){
        insertathead(head,d);
        cin>>d;
    }
    
    node*temp=head;
    node*temp1;
    int cnt=1;
    while(temp->next!=NULL){
        temp=temp->next;
        if(cnt==2){
            temp1=temp;
        }
        cnt++;
    }
    temp->next=temp1;
    return head;
}


ostream& operator<<(ostream &os,node*head){
    print(head);
    return os;
}

istream& operator>>(istream &is, node*&head){
    head=take_input();
    
    return is;
}

bool detect_cycle(node*&head){
    
    node*slow=head;
    node*fast=head;
    
    
    while(fast!=NULL and fast->next!=NULL){
        
        slow=slow->next;
        fast=fast->next->next;
        
        if(fast==slow){
            
            slow=head;
            node*temp;
            while(slow!=fast){
                temp=fast;
                fast=fast->next;
                slow=slow->next;
                
            }
            
            temp->next=NULL;
            
            
            return true;
        }
        
       
    }
     return false;
}

int32_t main()
{

node*head;

cin>>head;


if(detect_cycle(head)){
    
    cout<<"cycle present"<<endl;
}
else{
    cout<<"cycle not present"<<endl;
}


cout<<head;






	
	return 0;
}
