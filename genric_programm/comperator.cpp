#include<bits/stdc++.h>
using namespace std;

#define int             long long int


template<class forward_iterator,class T,class comapare>
forward_iterator search(forward_iterator start,forward_iterator end,T key,comapare cmp){
    
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    
    return end;
};
class book{
    public:
    string name;
    int price;
    
    book(){
        
    }
    book(string name,int price){
        this->name=name;
        this->price=price;
    }
};
class bookcompare{
    public:
    
    bool operator()(book A,book B){
        if(A.name==B.name){
            return true;
        }
        return false;
    }
};


int32_t main()
{

book b1("c++",100);
book b2("python",120);
book b3("java",130);

book booktofind("c++",100);
bookcompare cmp;


list<book> l;

l.push_back(b1);
l.push_back(b2);
l.push_back(b3);
auto it=search(l.begin(),l.end(),booktofind,cmp);

if(it==l.end()){
    cout<<"book_not present";
}
else{
    cout<<"book found";
}


	return 0;
}