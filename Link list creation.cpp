#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *list= NULL, *nptr,*tptr;

void NewNode(int iteam)
{
   nptr= new(node);
   nptr->data= iteam;
   nptr->next= NULL;

    if(list== NULL)
    {
        list= nptr;
        tptr= nptr;
    }
    else
     {
         tptr->next= nptr;
         tptr=nptr;
    }
}
void PrintList()
{
  struct node *ptr= list;
  while(ptr!=NULL)
  {
      cout<<ptr->data<<" ";
      ptr= ptr->next;
  }
}
int main()
{
    NewNode(1);
    NewNode(2);
    NewNode(3);
    PrintList();
}
