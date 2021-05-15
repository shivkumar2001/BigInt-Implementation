#include <bits/stdc++.h>
#include "myheader.h"
using namespace std;
int main()
{
  BigInteger res=1,i;
  int x;
  cout<<" enter number whose factorial you want to find out";
  cin>>x;
  for(i=1;i<=x;i++)
  	   res=res*i;
cout<<"factorial of  "<<x<<" is ";
string s=res.getNumber();
   cout<<s;
	return 0;
}
