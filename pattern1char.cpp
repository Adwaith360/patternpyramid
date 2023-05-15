#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j;
	int n;
	cin>>n;
	

	for (i=0;i<n;i++)
		{for(j=0;j<n;j++)
			{
				char ch='A'+j+ (n*i);
				cout<<ch;
			 
					}
			cout<<endl;
			}



}
//output result
// ABCD
// EFGH
// IJKL
// MNOP
