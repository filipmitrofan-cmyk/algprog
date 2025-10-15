#include<iostream>
using namespace::std;
int main()
{
  int i,a[50],x,n;
  cin>>n>>x;
  for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++)
        { 
        if(x==a[i])
            cout<<i<<" ";}

  return 0;
}
