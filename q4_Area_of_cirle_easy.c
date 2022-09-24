
// WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.
// Expected output format – “Area of circle is A having the radius R”. Replace A with area 
// & R with radius.


#include<stdio.h>
int main()
{
    float R,pi=3.14;
    printf("write radius R of circle is ");
scanf("%f",&R);

printf("%.2f",pi*R*R);
    /* code */
    return 0;
}
