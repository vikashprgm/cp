#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n;
        vi arr;
        while(n--){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        int maxpage=1;
        for(int i=0;i<p-1;i++){
            maxpage=max(maxpage,arr[i]);
        }
        cout<<maxpage+arr[p-1]<<endl;
    }
}