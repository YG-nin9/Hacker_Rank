#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, index;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    index = num - 1;
    
    for(i = 0; i < num; i++){
        
        printf("%d ", *(arr + index));
        index--;
    }
    return 0;
}
