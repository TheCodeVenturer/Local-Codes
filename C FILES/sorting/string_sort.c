/*
IN THIS PROGRAM WE WILL SORT A 2D STRINGS IN LENGTH(INCREASING,DECREASING),COMPARE(INCREASING,DECREASING)
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10][10],temp[2500];
    int i,j, min_idx;
    for(i = 0;i < 6;i ++)
        scanf("%s",arr[i]);
	for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
    printf("sorted\n");
    for(i =0;i<6;i++)
        printf("%s\n",arr[i]);
}
// niraj
// niki
// nitesh
// mammi
// papa


