#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *num0 = (int*)malloc(1 * sizeof(int));
    printf("Address = %p \n", num0);
    
    free(num0);
    return 0;
}