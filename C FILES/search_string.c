#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char c[50][50],temp[50];
    int i,j,n,l=0,h,mid,flag=0;
    printf("Enter how many no.s you want to input:");
    scanf("%d",&n);
    printf("Enter string of names:");
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(strcmp(c[j],c[j+1])>0)
            {
                strcpy(temp,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],temp);
            }
    printf("Enter string to search:");
    scanf("%s",temp);
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(stricmp(temp,c[mid])==0)
        {
            flag=1;
            break;
        }
        else if(strcmp(c[mid],temp)>0)
            h=mid-1;
        else
            l=mid+1;
    }
    if(flag)
        printf("found");
    else
        printf("Not found");
    return 0;
}