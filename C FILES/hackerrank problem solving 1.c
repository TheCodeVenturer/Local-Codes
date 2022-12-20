#include<stdio.h>
#include<string.h>
int main(){
    char name[100][100],diff[100][100],sort[100][100],temp[100];
    int count[100]={0},i,j,n,c=0,k=0,flag;
    float cf;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",name[i]);
    strcpy(diff[c++],name[0]);
    for(i=1;i<n;i++)
    {
        flag=1;
        for(j=0;j<c;j++)
        {
            if(strcmp(diff[j],name[i])==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            strcpy(diff[c++],name[i]);
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(diff[i],name[j])==0)
                count[i]=count[i]+1;
        }
    }
    for(i=0;i<c;i++)
    {
        cf=((float)count[i]/n)*100;
        if(cf>=5)
            strcpy(sort[k++],diff[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k-i;j++)
        {
            if(strcmp(sort[j],sort[j+1])>0)
            {
                strcpy(temp,sort[j]);
                strcpy(sort[j],sort[j+1]);
                strcpy(sort[j+1],temp);
            }
        }
    }
    return 0;
}