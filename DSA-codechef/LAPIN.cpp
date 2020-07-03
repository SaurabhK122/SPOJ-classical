#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int n=0;
	    bool d = true;
	    cin>>s;
	    n=s.length();
	    multiset<char> s1;
	    multiset<char> s2;
	    if (n%2==0){
	        for(int i=0;i<n/2;i++){
	            s1.insert(s[i]);
	        }
	        for(int i=n/2;i<n;i++){
	            s2.insert(s[i]);
	        }
	    }
	    else{
	        for(int i=0;i<n/2;i++){
	            s1.insert(s[i]);
	        }
	        for(int i=n/2+1;i<n;i++){
	            s2.insert(s[i]);
	        }
	    }
	    for(auto x : s1){
	        if(s1.count(x)!=s2.count(x)){
	            d = false;
	            break;
	        }
	    }
	    if(d)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}

	return 0;
}
