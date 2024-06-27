#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prefix(vector<int>&arr,int low,int high,long long sum){
    for(int i=0;i<=high;i++){
        if(sum-arr[i]==arr[i]) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int p;
        cin>>p;
        int n=p;
        while(p--){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        int ans=0;
            if(n==1 && v[0]==0) {
                cout<<1<<endl;
                continue;
                }
            if(n==1 && v[0]!=0){
                cout<<0<<endl;
                continue;
                }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(prefix(v,0,i,sum)==true) ans++;
        }
    cout<<ans<<endl;
    }
}