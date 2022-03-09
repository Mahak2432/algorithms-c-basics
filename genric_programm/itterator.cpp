#include<bits/stdc++.h>
using namespace std;

#define int             long long int


template<class forward_iterator,class T>
forward_iterator search(forward_iterator start,forward_iterator end,T key){
    
    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    
    return end;
}

int32_t main()
{


list<int> l;

l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(5);

auto it=search(l.begin(),l.end(),5);

if(it==l.end()){
    cout<<"element_not present";
}
else{
    cout<<(*it);
}


	return 0;
}