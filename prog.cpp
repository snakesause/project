#include <iostream>
using namespace std;
int check(int j)
{   int cnt=0;
    while(j!=0)
	{
	    if((j%10)==4||(j%10)==7)
	    {
	        cnt++;
	        j=j/10;
	        cout<<j;
	    }
	}
	return cnt;
}
int main() {
	int n;
	cin>>n;
	int count=check(n);
	int len=0;
	for(int l=count;l>0;l/=10,len++);
	if(check(count)==len)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}












#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,z,k,n,*arr,sum,zn,flag;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>k>>z;
	    arr=(int*)malloc(n*sizeof(int));
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	    }
	    sum=0,zn=0,flag=0;
	    for(int j=0,n=0;j<k;j++)
	    {
	        
	        sum+=arr[n];
	        if(n>0&&zn<z&&flag==0)
	        {
	            n--;
	            zn++;
	            flag=1;
	        }
	        else
	        {
	            n++;
	            flag=0;
	        }
	        
	    }
	    cout<<sum<<endl;
	    free(arr);
	}
	return 0;
}
