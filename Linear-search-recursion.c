#include<stdio.h>

int linear_search(int list[],int size,int key)
{
    size--;

    if(size>=0)
    {
        if(list[size]==key)
            return size;
        else
            return linear_search(list,size,key);
    }

    return -1;
}

int main()
{
    int list[20],i,key,size,position;

    printf("Enter the value of size: ");
    scanf("%d",&size);
    list[size];

    printf("Enter %d element of array: ",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&list[i]);
    }

    printf("Enter searching value: ");
    scanf("%d",&key);

    position=linear_search(list,size,key);

    if(position==-1)
        printf("Key not found");
    else
        printf("Key found at position %d\n",position+1);


    return 0;
}

