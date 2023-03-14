#include<stdio.h>
int main()
{
    int length,bredth;
    printf("Enter the length :");
    scanf("%d",&length);

    printf("Enter the bredth : ");
    scanf("%d",&bredth);

    int area=length*bredth;
    printf("Area of rectangle is : %d ",area);
    return 0;
} 