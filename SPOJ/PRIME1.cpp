#include <iostream>
#include <cmath>
using namespace std;

void prime(long int a,long int b){
	for(long int i = a;i<=b;i++){
		int count =0;
		for(long int j=2;j<=sqrt(i);j++){
			if (i%j==0){
				count++;
				break;
			}
		}
		if (count ==0 && i!=1)
		cout<<i<<endl;
	}
}
int main() {
	int t;
	cin>>t;
	for (int i = 0;i<t;i++){
		long int a,b;
		cin>>a>>b;
		prime(a,b);
		cout<<endl;
	}
	return 0;
}
