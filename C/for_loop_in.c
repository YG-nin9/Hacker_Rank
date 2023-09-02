#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    int n, m;
    
    char* c[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    m = b+1;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(a;a <= b; n++)
    {
        if (n == m)
        {
            return (0);
        }
        if ((a > 0) && (a < 10) && a < b)
        {
            for (a;((a <= b) && (a < 10));a++)
            {
                printf("%s\n", c[a]);
            }
                
        }
        else if ((a%2) == 0)
        {
            a++;
            printf("even\n");
            
        }
        else
        {
            printf("odd\n");
            a++;
        }
    }
    /*for(m = 0; m != 2; m++)
    {
        if ((b > 0) && (b < 10))
        {
            for (b;b < 10;b++)
            {
                printf("%s\n", c[b]);
            }
        }
        else if ((b%2) == 0)
        {
            printf("even\n");
        }
        else if ((b%2) != 0)
        {
            printf("odd\n");
        }
    }*/
}

