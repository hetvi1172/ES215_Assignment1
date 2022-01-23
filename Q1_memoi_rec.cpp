#include <bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int lookup[MAX];
void _initialize(){
    for(int i=0; i<MAX; i++){
        lookup[i]=NIL;
    }
}

int fib(int n){
    if(lookup[n]==NIL){
        if(n<=1){
            lookup[n]=n;
        }
        else{
            lookup[n]=fib(n-1)+fib(n-2);
        }
    }
    return lookup[n];
}

int main(){
    int n;
    cin>>n;
    _initialize();
    for(int i=0; i<=n; i++){
        int ans=fib(i);
        cout<<ans<<" ";
    }
    return 0;
}