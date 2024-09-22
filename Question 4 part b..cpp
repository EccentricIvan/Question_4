#include <iostream>
using namespace std;
int main () {
int a=10;
int b=3;
char email [20];
strcpy(email, "example@email.com");

a /= b;
cout<<"assignet your email"<<email<<endl;

cout<<"enter your email";
cin>>email;
cout<<"your email is "<<email;
cout<<"a/b= \t"<<a<<endl;
return 0;
}

