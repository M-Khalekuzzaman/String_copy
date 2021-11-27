#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char source[20],target[20];
    cout<<"Enter source name is : ";
    cin>>source;
    strcpy(target,source);
    cout<<"The target name is :"<<target<<endl;
    getch();
}
