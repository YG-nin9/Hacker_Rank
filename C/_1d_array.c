#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,x;
    int *arr;
    int sum = 0;    
    scanf("%d", &n);
    
    arr = malloc (sizeof(int) * n);
    
    for (i = 0; i < n; ++i)
    {
        scanf("%d", arr + i);
    }
    
    for (x = 0;x < n; x++)
    {
        sum = sum + (*(arr+x));
    }
    
    printf("%d\n",sum);

    return 0;
}
