#include <iostream>
#include <string.h>
using namespace std;
int max_int(int a,int b){
    return a>=b?a:b;
}
int longest_palindromic_subsequence(char *a,int n)
{
  int c[n][n];
  int i,j,k;
  for(i=0;i<n;i++)
  { for (j = 0; j < n; ++j)
  { c[i][j] = 0;
  }}

  for(k=1;k<=n;k++)
  { j = k-1;
    for(i=0;i<n-k+1;i++,j++)
      {   if(i == j){
            c[i][j] = 1;}
          else if(a[i] == a[j]){
                c[i][j] = 2+c[i+1][j-1];
            }
            else
                c[i][j] = max_int(c[i+1][j],c[i][j-1]);
      }
  }
//To print the matrix
  for(i=0;i<n;i++)
  { for (j = 0; j < n; ++j)
    cout<<c[i][j]<<" ";
    cout<<"\n";
  }
  return c[0][n-1];
}
int main(int argc, char const *argv[])
{
  char *a = "agbdba";
  int n = strlen(a);
  int answer = longest_palindromic_subsequence(a,n);
  cout<<"Answer is : "<<answer;
  return 0;
}
