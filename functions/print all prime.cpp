#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


void printprime(int N){
    
    for(int i=2; i<=N; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    
}


int32_t main()
{
	
	int n;
	cin>>n;
	
	printprime(n);

	



	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	return 0;
}
