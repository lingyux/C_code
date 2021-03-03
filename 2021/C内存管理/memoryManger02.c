#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *)malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - nuable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student");
    }
    /*  假设想要粗出更大的信息  */
    description = (char *)realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcat(description, "She is in class 10th\n");
    }
    printf("Name = %s\n", name);
    printf("Description:%s\n", description);
    /*  使用free()函数回收内存  */
    free(description);
    return 0;
}