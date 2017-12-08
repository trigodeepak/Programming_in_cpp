#include <iostream>
#include <string.h>
using namespace std;
//Program to count number of non incrreasing digits used p and c
int count(int n){
    int a = 10;
    int i,s=a;
    for(i=1;i<=n-1;i++)
    {   s=s*(a+i)/(i+1);
    }
    return s;
}

int main(int argc, char const *argv[])
{
  int n = 3;
  int ans=0,i;
  cout<<count(n);
  return 0;
}
