#include <bits/stdc++.h>
using namespace std;
//complexity O(2 power n)
int fibonacci(int n){
    if(n==0|n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}