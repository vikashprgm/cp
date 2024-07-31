//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--)
using ll=long long ;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int letters=0;
    int special=0;
    bool snow=false;
    bool shor=false;
    fo(s.size()) {
        if(s[i]!='?' && s[i]!='*') letters++;
        else {
            if(s[i]=='*') snow=true;
            special++;
        }

    }
    if(letters<=k && snow){
        bool c=true;
        int insertlimit=k-letters;
        string t="";
        char prev=s[0];
        for(int i=0;i<s.size();i++){
            if(s[i]!='?' && s[i]!='*') t+=s[i];
            else if(s[i]=='*' && c){
                while(insertlimit--){
                    t+=prev;
                }
                c=false;
                }
            prev=s[i];
        }
        cout<<t;
    }
    else if( (letters<k && !snow) || (letters>k && s.size()- 2*special>k) ){
        cout<<"Impossible";
    }
    else{//letters>k - abcd*e?fgh*ij, 5
        //decrease by special;
        int removelimit=letters-k;
        string t;
        t+=s[0];
        int n=s.size();
        for(int i=1;i<s.size();i++){
            if((s[i]=='?' || s[i]=='*') && removelimit>0){
                t.pop_back();
                removelimit--;
                continue;
            }
            if(s[i]!='?' && s[i]!='*') t+=s[i];
        }
        cout<<t;
    }
}