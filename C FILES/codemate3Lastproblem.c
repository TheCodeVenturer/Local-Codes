#include<stdio.h>
#include<string.h>
char *delete_substring(int a, int b,char c[1000]){
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=a;j<=strlen(c);j++)
        {
            c[j]=c[j+1];
        }
    }
    return c;
}
int main(){    
    char pass[100],t[100],k[100];
    scanf("%s",pass);
    strcpy(pass,delete_substring(1,5,pass));
    printf("%s",pass);
    return 0;
}