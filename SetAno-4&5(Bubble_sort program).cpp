#include <iostream>
using namespace std;
  int i,j,temp;
  int A[] = {3,2,0,15,18,11,1,4,7,9,8,6};

 void display()
 {
   for(int i=0; i<12; i++)
    {
      cout << A[i] << ", ";
    }
 }
int main()
{
  for(int i=0; i<12; i++)
    {
     for(int j=0; j<11; j++)
     {
       if(A[j] < A[j+1])
       {
	     temp = A[j];
         A[j] = A[j+1];
	     A[j+1] = temp;
       }
     }
  }
  display();
    cout<<"\n\n  (By Descending order.) \n";

  return 0;
}
