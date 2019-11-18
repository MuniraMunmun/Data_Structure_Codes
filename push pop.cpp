#include<iostream>
using namespace std;
int stack[5];
int sp = -1;
int limit=5;
bool overflow()
{
    if(sp == limit)
        return 1;
    else
        return 0;
}
bool underflow()
{
    if(sp == -1)
        return 1;
    else
        return 0;
}
void push()
{
    int a;
    if(overflow())
        cout<<"Overflow"<<endl;
    else
    {
        cin>>a;
        ++sp;
        stack[sp]=a;
    }
}

void pop()
{
    if(underflow())
        cout<<"Underflow"<<endl;
    else
    {
        cout<<stack[sp]<<endl;
        sp--;
    }
}
int main()
{
    pop();

    push();
     push();
      push();
       push();
        push();
         push();
          push();
    pop();
     pop();
      pop();
       pop();
        pop();
}
