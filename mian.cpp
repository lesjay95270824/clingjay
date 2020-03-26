#include<iostream>

using namespace std;

long fib(int n)
{
if(n==0)
  return 0;
if(n==1)
return 1;
return fib(n-1)+fib(n-2);
}

int main()
{
 int n=50;
 long res=fib(n);
 cout<<"fib（"<<n<<"）="<<res<<endl;
 return 0;
}
