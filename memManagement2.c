#include <stdio.h>
#include <stdlib.h>
// #include <cstdlib>

int main(void)
{
    int *num0 = malloc(1000 * sizeof(int));

    int *num1 = calloc(1000, sizeof(int));
    
    printf("(malloc) Address = %p \n", num0);
    printf("(calloc) Address = %p \n", num1);

    // for(int i = 0; i < (sizeof(num1)/sizeof(num1[0])); i++)
    // {
    //     printf("Malloc %d \n", *num0);
    //     printf("Calloc %d \n", *num1);
    // }

    free(num0);
    free(num1);
    return 0;
}