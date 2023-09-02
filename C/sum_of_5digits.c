#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int l, m, t, sum;
    
    
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    m = n;
    l = 0;
    sum = 0;
    for (;m != 0;)
    {
        t = m % 10;
        m = m / 10;
        l++;
        sum = sum + t;
    }
    printf("%d", sum);
    return 0;
}

