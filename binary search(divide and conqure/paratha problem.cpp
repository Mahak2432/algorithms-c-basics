#include<iostream>
using namespace std;

bool possible(int a[],int cook,int p, int tim){
    int cnt=0;
    
    for(int i=0; i<cook; i++){
        int r=2;
        int ans=a[i];
        
        while(ans<=tim){
            ans=ans+(a[i]*r);
            r++;
            cnt++;
            if(cnt==p){
               return true;
            }
            
        }
      
    }
    return false;
}

	


int main() {

int t;
cin>>t;


for(int i=0; i<t; i++){
    int p;
cin>>p;

int cook;
cin>>cook;

int a[1000];
for(int i=0; i<cook; i++){
    cin>>a[i];
}

int s=0;
int e=(a[cook-1]*(p)*(p+1))/2;
int ans=0;
while(s<=e){
    int mid=(s+e)/2;
  
    
    if(possible(a,cook,p,mid)){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
cout<<ans<<endl;
}
  

	return 0;
}