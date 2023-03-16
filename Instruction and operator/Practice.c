#include<stdio.h>
int main()
{
    // It is valid in c but ^ this operator represents the EOR operation
    int v=3^3;
    printf("%d \n",v); 

    //It is Invalid  beacause char take only one character
    char dt='50';
    printf("%c \n",dt);

    int num;
    printf("Enter the number \n");
    scanf("%d",&num);

    printf("Divibility Test returns: %d \n ",num%97);
} 