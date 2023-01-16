#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int *num0 = (int*)calloc(100, sizeof(char));
    int *num1 = NULL;

    // printf("Address = %p \n", num0);
    
    // free(num0);
    // printf("Address = %p \n", num0);
    free(num1);

    printf("Break %p", num1);
    return 0;
}