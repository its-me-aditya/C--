#include<iostream>
using namespace std;
int main()
{
    int a[1000000],sum =0,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    sum=sum+a[i];
    cout<<sum;
}
