
// WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar"

#include<stdio.h>
int main()
{ 
    char a[40];
    // printf("\"Hello,Amit Kumar\"");
    printf("enter your name  ");
    scanf("%s",a);  // a==&a[i]
    printf("\"%s\"",a);
    /* code */
    return 0;
}
