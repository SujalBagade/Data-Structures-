#include<iostream>
using namespace std;
void TOH(int n, int a, int b, int c)
{
    static int x=0;
    
    if(n>0)
    {
        TOH(n-1, a, c, b);
        cout<<"From"<<a<<" to "<<c<<endl;
        x=x+1;
        TOH(n-1, b, a, c);
    }
    cout<<x<<endl;
}
int main()
{
    TOH(64,1,2,3);
    return 0;
}
