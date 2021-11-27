#include<stdio.h>
int main()
{
    char source[20],target[20];
    printf("Enter source object is : ");
    gets(source);
    strcpy(target,source);
    printf("The target object is : %s\n",target);
    getch();
}
