#include<iostream>
#include<cstring>
using namespace std;
struct {
    int id;
    char name[30];
    int marks[40];
 }stu[2];

 int average(int list[4]);    //like 1.2.3.4
 {
  int test;
   for(int i=0;i<4;i++)
    {
      for(int j=0;j<4-1-i;j++)
      {
          if(list[j]<list[j+1])
          {
              test= list[j];
              list[j]=list[j+1];
              list[j+1]=test;
          }             //big to small like 4,3,2,1
      }
  }
  int avg;   //means, 4,3,2
  avg= (list[0]+list[1]+list[2])/3;    //means,9/3
  return avg;    //means, return 3
 }
 int main()
 {
     for(int i=0;i<2;i++)
        cout<<"Student id: ";
          cin>>stu[i].id;
        cout<<"Student name: ";
          cin>>stu[i].name;
          for(int j=0;j<4;j++)
            {
              cout<<"Marks: ";
                cin>>stu[i].mark[j];
            }
            for(int i=0;i<40;i++)
            {
                cout<<"Student ID: "<<stu[i].id<<endl;
                cout<<"Student Name: "<<stu[i].name<<endl;
                cout<<"Average marks:"<<average(stu[i].mark)<<endl;
            }
       }

