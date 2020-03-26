#include<iostream>
#include<vector>
using namespace std;

vector<int> memo;
long fib(int n)
{
if(n==0)
  return 0;
if(n==1)
return 1;
  if(memo[n]==-1)
  {
   memo[n]=fib(n-1)+fib(n-2);
  }
return memo[n];
}

int main()
{
 int n=50;
  memo=vector<int>(n+1,-1)
 long res=fib(n);
 cout<<"fib（"<<n<<"）="<<res<<endl;
 return 0;
}
