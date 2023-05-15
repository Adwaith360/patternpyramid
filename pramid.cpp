 #include<bits/stdc++.h>

 using namespace std;

 int main()
 {

 int i, j, n;
 cin>>n;
 int k;


 for (i=0;i<n;i++)
 	{

 	for(j=0;j<n-i;j++)
 	{
 		cout<<" ";
 	}
 	k=1;
 	while(j<n)
 	{
 	cout<<k;
 	k++;
 	j++;

 	}
 	while(k>=1)
 	{cout<<k;
 	 	k--;}
cout<<endl;
 	}
 	
 }