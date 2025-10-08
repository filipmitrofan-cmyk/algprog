#include <iostream>

using namespace std;
int cifmax(int a)
{
    int m=a%10;
    a/=10;
    while(a>0)
    {
        if(m<a%10)
            m=a%10;
        a/=10;
    }
    return m;
}
int main()
{
    int a;
    cin>>a;

    cout<<cifmax(a);
    return 0;
}
