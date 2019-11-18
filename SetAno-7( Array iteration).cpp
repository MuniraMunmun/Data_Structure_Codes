#include <iostream>
using namespace std;
 int main()
 {
   int i,j,temp;
   int A[]= {3,2,0,15,18,11,1,4,7,9,8,6};

  for(int i=0; i<12; i++)
    {
      for(int j=0; j<12; j++)
      {
        if(A[j]< A[j+1])
        {
	      temp= A[j];
	      A[j]= A[j+1];
          A[j+1]= temp;
        }
      }
       //cout<<"Sorting process: \n"<<endl;
     for(int i=0; i<=12; i++)
      cout<< A[i]<< " ";
      cout<<endl;
    }
    return 0;
}
