#include <iostream>
using namespace std;
  int Binary(int dec)
   {
     if(dec== 0)
      return 0;
    Binary(dec/2);
    cout<<dec% 2;
  }
int main()
{
    cout<<"\nBinary is: "<<endl;
     Binary(10);
  return 0;
}
