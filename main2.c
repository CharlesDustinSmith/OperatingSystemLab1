#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(void)
{
    char str[200];
    const char name[] = "Charles Smith";
    int num = 24;
    printf("My fauourite integer is : %d \n", 10);
    printf("floating-point : %f, Hex : 0x%04x, Pointer: %p.\n", (float)num, num, &num);
    sprintf(str, "My name is '%s', which is %ld characters long, and it is located at address %p. \n", name, sizeof(name), name);

    FILE *fp;
    fp = fopen("file.txt", "w");
    fwrite(str, sizeof(str), 1, fp);
    write(STDOUT_FILENO, str, strlen(str));
    fclose(fp);

    return 0;
}