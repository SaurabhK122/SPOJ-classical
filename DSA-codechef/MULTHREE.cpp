#include <bits/stdc++.h>
using namespace std;
bool sol(){
    long long n;
	int d0,d1;
	cin>>n>>d0>>d1;
	if(n==2) return ((d0+d1)%3==0)?1:0;
	else if(n==3) return ((d0+d1+(d0+d1)%10)%3==0)?1:0;
	int arr[4];
	int d2 = (d0+d1)%10;
// 	cout<<d0<<d1<<d2;
	arr[0] = (2*(d0+d1))%10;
	arr[1] = (4*(d0+d1))%10;
	arr[2] = (8*(d0+d1))%10;
	arr[3] = (6*(d0+d1))%10;
	long long sum = arr[0]+arr[1]+arr[2]+arr[3];
	sum = ((n-3)/4)*sum;
// 	cout<<" "<<(n-3)/4<<"*"<<"("<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<") ";
	for(int i=0;i<(n-3)%4;i++){
	    sum += arr[i];
	   // cout<<arr[i];
	}
// 	cout<<"---";
	sum += d0+d1+d2;
// 	cout<<"SUM= "<<sum<<endl;
	return (sum%3==0)?1:0;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    cout<<(sol()?"YES":"NO")<<endl;
	}
	return 0;
}
