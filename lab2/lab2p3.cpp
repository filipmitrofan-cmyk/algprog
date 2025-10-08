#include <iostream>

using namespace std;
void same(int n)
{
    int u;
    u=n%10;
    n/=10;
    while(n>9)
    {
        n/=10;
    }
    if(u==n)
        cout<<"Da";
    else
        cout<<"Nu";
}
int main()
{
    int n;
    cin>>n;
    same(n);
    return 0;
}
