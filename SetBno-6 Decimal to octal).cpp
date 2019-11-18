#include <iostream>
using namespace std;
  int Octal(int dec)
   {
     if(dec== 0)
      return 0;
    Octal(dec/8);
    cout<<dec% 8;
   }
int main()
{
    cout<<"\nOctal is: "<<endl;
     Octal(100);
  return 0;
}
