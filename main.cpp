#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

void show(float t[1001][4],int n,int j){
	for(int i=0;i<n;i++){
		for(int k=0;k<j;k++){
			cout<<t[i][k]<<"	";
		}
		cout<<endl;
	}
}


int solve(){
	float m,b,n;
	cout<<"Anu-itas program by Arfian"<<endl;
	cout<<"M B N"<<endl;
	cin>>m>>b>>n;
	float A = m*b/(1-pow(1+b,-n));
	float t1[1001][4]={};
	float t2[1001][4]={};
	for(int i=0;i<n;i++){
		if(i==0){
			t1[0][0]=m;
			t1[0][1]=m*b;
			t1[0][2]=m/n;
			t1[0][3]=m*(1-1/n);
		}else{
			float c=t1[i-1][3];
			t1[i][0]=c;
			t1[i][1]=c*b;
			t1[i][2]=m/n;
			t1[i][3]=c-m/n;
		}
	}
	cout<<"HutPok	|Bunga	|angsuran	|sisa-hutang"<<endl;
	show(t1,n,4);
	cout<<endl;
	for(int i=0;i<n;i++){
		if(i==0){
			t2[0][0]=m;
			t2[0][1]=m*b;
			t2[0][2]=A-m*b;
			t2[0][3]=m*(1+b)-A;
		}else{
			float c=t2[i-1][3];
			t2[i][0]=c;
			t2[i][1]=c*b;
			t2[i][2]=A-c*b;
			t2[i][3]=c*(1+b)-A;
		}
	}
	cout<<"HutPok	|Bunga	|angsuran	|sisa-hutang"<<endl;
	show(t2,n,4);
	cout<<"A = "<<A<<endl;
}

signed main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
	  solve();
	  cout<<endl;
	  }
}

