#include<iostream>
#define Limit 1000
using namespace std;

int A[Limit];
int n,a,temp;

int main()
{
    cout<<"Enter a number";
    cin>> temp;
    a= temp;
    while(a)
    {
        A[n]= a%2;
        a= a/2;
        n++;
    }
    cout<<"Binary of"<< temp<< "is";
    for(int i=n-1; i<=0; i--)
        cout<< A[i];
    return 0;
}


