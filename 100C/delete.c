#include <stdio.h>

int fun(char *a, char *h, char *p)
{
    int i, j;
    //删除指针h和p之间的所有*
    for (i = 0, j = 0; &h[i] < p; i++)
        if (h[i] != '*')
            h[j++] = h[i];
    //将指针p至字符串尾的所有字符串前移
    for (i = 0; p[i]; i++, j++)
        h[j] = p[i];
    h[j] = '\0';
    return 0;
}

int main()
{
    char s[81], *t, *f;
    printf("Enter a string:\n");
    gets(s);
    t = f = s;
    while (*t)
        t++;
    t--;
    while (*t == '*')
        t--;
    while (*f == '*')
        f++;
    fun(s, f, t);
    printf("The string after deleted:\n");
    puts(s);

    return 0;
}