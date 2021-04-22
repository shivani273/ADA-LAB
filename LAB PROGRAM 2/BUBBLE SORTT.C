#include <stdio.h>
void bubblesort(int list[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
int main()
{
    int size,i,list[25];
    printf("Enter the size of the list: ");
    scanf("%d",&size);
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&list[i]);
    }
    bubblesort(list,size);
    printf("list after bubblesort: ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",list[i]);
    }
}