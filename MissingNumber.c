#include<stdio.h>
int main()
{
    int n,range,i,ele,a[20];
    printf("Enter the range of elements\n");
    scanf("%d",&range);
    printf("Enter the value of elements in an array\n");
    for(i=0;i<range-1;i++)
    {
        scanf("%d",&a[i]);
    }
    ele=1;
    n=range-1;
    printf("\nThe missing element is ");
    while(ele<=range)
    {
        for(i=0;i<n;i++)
        {
            if(ele==a[i])
            break;
        }
        if(i==n)
        {
        printf("%d",ele);
        break;
        }
        ele++;
    }
	
	
	
	return 0;
}