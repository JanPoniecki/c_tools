#include <stdio.h>

void print_mem(char *src, int size)
{
    int i = 0;
    while (i < size)
    {
        if (src[i] == 32)
            printf("\033[35m_ \033[37m");
        else if (src[i] == 0)
            printf("\033[35m0 \033[37m");
        else if (src[i] == 10)
            printf("\033[35mN \033[37m");
        else
            printf("%c ", src[i]);
        i++;
    }
    printf("\n");
    int j = 0;
    int k = 0;
    while (k < i)
    {
        printf("%d ", j++);
        if (j == 10)
            j = 0;
        k++;
    }
    printf("\n");
}

int main()
{
    char *src = "hello pom\nelo";
    print_mem(src, 14);
}
