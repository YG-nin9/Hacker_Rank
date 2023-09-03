#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int x = 1;
  int y = 1;
  int and,or,xor,mand,mor,mxor;
  mand = 0;
  mor = 0;
  mxor = 0;
  for (; x<=k; x++)
  {
      for(; y<=n;y++)
      {
        if (x>=y)
        {
            continue;
        }
        and = x&y;
        or = x|y;
        xor = x^y;
        if ((and > mand) && (and < k))
        {
            mand = and;
        }
        if ((or > mor) && (or < k))
        {
            mor = or;
        }
        if ((xor > mxor) && (xor < k))
        {
            mxor = xor;
        }
      }
    y = 1; 
  }
  printf("%d\n", mand);
  printf("%d\n", mor);
  printf("%d\n", mxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

