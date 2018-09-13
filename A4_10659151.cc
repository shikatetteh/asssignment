#include <iostream>

using namespace std;
int gcd(int m,int n){

if(n==0)
return m;
else
    return gcd(n ,m%n);

}

int main()
{
    int m,n;
    cout<<"Enter first number :";
    cin>>m;
    cout<<"Enter second number :";
    cin>>n;

    cout<<"The GCD is:";
    cout<<gcd(m,n);

    return 0;
}
