#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	ll n=s.length();
		string k;
		k=s;
		for(int i=n/2;i<n;i++)
			s[i]=s[n-i-1];
		if(s>k)
			cout<<s<<endl;
		else{
			for(ll i=(n-1)/2;i>=0;i--){
				if(k[i]!='9'){
					k[i]++;
					break;
				}
				else{
					k[i]='0';
				}
			}
			for(ll i=n/2;i<n;i++){
				k[i]=k[n-i-1];
			}
			if(k[0]=='0'){
				k+='1';
				k[0]='1';
			}
			cout<<k<<endl;
		}
	}
}
