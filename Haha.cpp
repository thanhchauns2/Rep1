#include<iostream>
using namespace std;
int B[20],n;
void in(){
	for(int i=1;i<=n;i++)
		if(B[i]) cout<<"H";
		else cout<<"A";
	cout<<endl;
}
int Test(){
	if(B[1]==0) return 0;
	if(B[n]==1) return 0;
	for(int i=2;i<=n;i++) if(B[i]&&B[i-1]) return 0;
	return 1;
}
void Try(int i){
	int j;
	for(j=0;j<=1;j++){
		B[i]=j;
		if(i==n){
			if(Test()) in();
		} else Try(i+1);
	}
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<=n;i++) B[i]=0;
		Try(1);
	}
}
