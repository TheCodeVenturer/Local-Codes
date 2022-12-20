#include <bits/stdc++.h>

using namespace std;
char *reverseSentence(char *str1)
{
    static char *rec = (char *)malloc(strlen(str1));
    int l = strlen(str1);
    static int i;
    if (str1[i] != '\0')
    {
        i++;
        reverseSentence(str1);
        i--;
        rec[l - i - 1] = str1[i];
        rec[l - i] = '\0';
    }
    return rec;
}

int main()
{
    char c[100];
    gets(c);
    printf("%s", (reverseSentence(c)));
}