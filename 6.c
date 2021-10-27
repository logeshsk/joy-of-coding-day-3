#include<stdio.h>
#include<stdlib.h>
struct arr{
    int num;
    int booln;
};
typedef struct arr arr;
void add(int n,arr*a,int sum,int count,int pos)
{
    int i,flag=0;
    if(sum==count)
    {
        printf("Combination:");
        for(i=0;i<n;i++)
        {
            if(a[i].booln==1)
                printf("\t%d(%d)",a[i].num,i);
        }
        printf("\n");
        return;
    }
    for(i=pos;i<n;i++)
    {
        if((count+a[i].num<=sum)&&a[i].booln!=1)
        {
            a[i].booln=1;
            add(n,a,sum,count+a[i].num,i);
            a[i].booln=0;
        }
    }
}
void main()
{
    arr*a;
    int n,i,count=0,sum;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    a=(arr*)malloc(n*sizeof(arr));
    for(i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%d",&a[i].num);
        a[i].booln=0;
    }
    printf("Enter the sum\n");
    scanf("%d",&sum);
    add(n,a,sum,count,0);
}
