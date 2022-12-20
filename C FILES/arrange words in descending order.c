#include<stdio.h>
#include<string.h>
void main()
{
    char c[10][40],t[40];
    int i,j;
    for(i=0;i<10;i++)
        scanf("%s",c[i]);
    for(i=0;i<10;i++)
        for(j=0;j<9-i;j++)
            if((stricmp(c[j],c[j+1]))<0)
            {
                strcpy(t,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],t);
            }
    for(i=0;i<10;i++)
        puts(c[i]);
}
