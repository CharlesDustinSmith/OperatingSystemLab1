#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     FILE *fp;
//     char str[] = "Operating systems rule";
//     char *name = "CDS";
//     strlen()

//     fp = fopen("file.txt", "w");
//     fwrite(str, 1, sizeof(str), fp);
//     fclose(fp);
//     return 0;
// }

int main(void)
{
    char name[] = "CDS";
    size_t length = strlen(name);
    strcpy(name, "Charles");

    return 0;
}