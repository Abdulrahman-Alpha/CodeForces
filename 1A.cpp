#include<iostream>
using namespace std;
long long int n,m,a,b;
int main()
{
    cin>>n>>m>>a;
    b=((n+a-1)/a)*((m+a-1)/a);
    cout<<b;
}