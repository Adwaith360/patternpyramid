#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int i,j,n;

	cin>>n;

	for (i=0;i<n;i++)
	{
	for (j=0;j<i;j++){
	cout<<" ";

	}
	while(j<n)
	{cout<<"*";
		j++;}

	cout<<endl;
	}
}