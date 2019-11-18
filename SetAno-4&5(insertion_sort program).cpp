
#include <iostream>
using namespace std;
  int i,j,key;
  int A[] = {3,2,0,15,18,11,1,4,7,9,8,6};

void display()
 {
   for(int i=0; i<12; i++)
    {
      cout <<  A[i] << ", ";
    }
 }
int main()
 {
    for(i =1; i<12; i++)
     {
       key = A[i];
       for(j=i-1; j>0; j--)
        {
         if(key> A[j])
          {
	        A[j+1]= A[j];
	        A[j]= key;
          }
        }
     }
     display();
    cout<<" \n\n   the sequence is wrong"<<endl;

  return 0;
}
