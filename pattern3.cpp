#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int i,j,n,k;

	cin>>n;

	for(i=0;i<n;i++)
	{
	for(j=1;j<=n-i;j++){
	 cout<<j;	
		}
		k=0;
	while(k<i*2){
	cout<<"*";
	k++;

		}
	for(j=n-i;j>=1;j--)
	{
		cout<<j;
	}

	cout<<endl;

		}
}