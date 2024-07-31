#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
        vi v={1,5,0,10,14};
        int n=v.size();
        if(n<5) cout<< 0;
        sort(v.begin(),v.end());
        vi s=v;
        int steps=0;
        int l=0,r=n-1;
        //case 1
        while(steps<3){
            if(v[l]<v[3]){
                v[l]=v[3];
                steps++;
                l++;
                }
            else if(v[r]>v[r-3]){
                v[r]=v[r-3];
                r--;
                steps++;
            }
        }
        int ans1=v[n-1]-v[0];

        //case 2
        l=0;r=n-1;steps=0;
        while(steps<3){
            if(s[r]>s[r-3]){
                s[r]=s[r-3];
                r--;
                steps++;
            }
            else if(s[l]<s[3]){
                s[l]=s[3];
                steps++;
                l++;
                }
        }
        int ans2=s[n-1]-s[0];
        cout<<ans1<<" "<<ans2;
}