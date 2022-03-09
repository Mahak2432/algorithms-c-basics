#include<bits/stdc++.h>
using namespace std;




int main()
{
    int arr[]={1,10,11,9,100};
    int n=sizeof(arr)/sizeof(int);
    
    //search-->find
    
    int key;
    cin>>key;
    
    auto it=find(arr,arr+n,key);
    
    
    int index=it-arr;
    
    if(index==n){
        cout<<"element is not present"<<endl;
    }
    
    else{
       cout<<index<<endl;
    }
   


	return 0;
}
