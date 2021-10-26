#include<stdio.h>
#include<stdlib.h>
/*
1 2 3       3 6 9
4 5 6       2 5 8
7 8 9       1 4 7
*/
void main()
{
    int i,j,r,c;
    printf("Enter the number of ROWS and COLUMNS\n");
    scanf("%d%d",&r,&c);
    int**a=(int**)malloc(r*sizeof(int*));
    for (i=0;i<r;i++)
        a[i]=(int*)malloc(c*sizeof(int));
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            printf("Enter element : ");
            scanf("%d",&a[i][j]);
        }
    printf("BEFORE :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("AFTER :\n");
    for(j=c-1;j>-1;j--)
    {
        for(i=0;i<r;i++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
