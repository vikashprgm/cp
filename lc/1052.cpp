#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unhappytohappy(vector<int>c,vector<int>h,int l,int r){
        int happy=0;
        for(int i=l;i<=r;i++){
            if(h[i]==1) happy+=c[i];
        }
        return happy;
    }
    int main() {
        vector<int>c={4,10,10};
        vector<int>h={1,1,0};
        int m=2;
        int sum=0;
        for(int i=0;i<c.size();i++){
            if(h[i]==0) sum+=c[i];
        }
        int l=0,r=m-1;
        int ans=sum;
        while(r<c.size()){
            int happy=unhappytohappy(c,h,l,r);
            ans=max(ans,sum+happy);
            cout<<ans;
            l++;
            r++;
        }
    }