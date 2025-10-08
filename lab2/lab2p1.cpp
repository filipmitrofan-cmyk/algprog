#include <iostream>

using namespace std;
void sumacif(int a,int b)
{
    int s1{},s2{};
    while(a>0)
    {
        s1+=a%10;
        a=a/10;
    }
    while(b>0)
    {
        s2+=b%10;
        b=b/10;
    }
    cout<<s1<<" "<<s2<<endl;
    if (s1==s2)
        cout<<"Sumele sunt egale ";
    else
        cout<<"Sumele nu sunt egale ";

}
int main()
{
    int a,b;
    cin>>a>>b;
    sumacif(a,b);
    return 0;
}
