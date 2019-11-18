#include<iostream>
#include<cstring>
using namespace std;
struct Book{
      char title[50];
      char author[50];
      char subject[100];
      int id;
}book1,book2;
int main()
{
    strcpy(book1.title,"book of c");   //book 1
    strcpy(book1.author,"MMM");
    book1.id=118;
    strcpy(book1.subject,"structure");

    strcpy(book2.title,"book of c++");    //book 2
    strcpy(book2.author,"MMM");
    book2.id=118;
    strcpy(book2.subject,"Array");

    cout<<"BOOK 1 Title: "<<book1.title<<endl;
    cout<<"BOOK 1 Author: "<<book1.author<<endl;
    cout<<"BOOK 1 Subject: "<<book1.subject<<endl;
    cout<<"BOOK 1 ID: "<<book1.id<<endl;

    cout<<"\nBOOK 2 Title: "<<book2.title<<endl;
    cout<<"BOOK 2 Author: "<<book2.author<<endl;
    cout<<"BOOK 2 Subject: "<<book2.subject<<endl;
    cout<<"BOOK 2 ID: "<<book2.id<<endl;

}

