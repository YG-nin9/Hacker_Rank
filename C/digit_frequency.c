#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    unsigned int *arr;
    arr = calloc(10, (sizeof(unsigned int)));

    while ('\0' != *s){

        if((*s >= '0') && (*s <= '9')){

            switch (*s){

                case '0':
                    arr[0] = arr[0] + 1;
                    break;
                case '1':
                    arr[1] = arr[1] + 1;
                    break;
                case '2':
                    arr[2] = arr[2] + 1;
                    break;
                case '3':
                    arr[3] = arr[3] + 1;
                    break;
                case '4':
                    arr[4] = arr[4] + 1;
                    break;
                case '5':
                    arr[5] = arr[5] + 1;
                    break;
                case '6':
                    arr[6] = arr[6] + 1;
                    break;
                case '7':
                    arr[7] = arr[7] + 1;
                    break;
                case '8':
                    arr[8] = arr[8] + 1;
                    break;
                case '9':
                    arr[9] = arr[9] + 1;
                    break;
            }
            s++;
        }
        else{
            s++;
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

