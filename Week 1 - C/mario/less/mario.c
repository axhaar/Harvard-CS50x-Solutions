#include <stdio.h>
#include<cs50.h>
int row(int height)
{
    int space;
    for(int i=1;i<=height;i++)
    {
        for(space=height-1;space>=i;space--)
        {
            printf(" ");
        }
        for(int x=1;x<=i;x++)
            printf("#");

        printf("\n");

    }
    return 0;
}
int main()
{
    int h;
    do
    {
        h = get_int("Height for the pyramid(1-8): \n");
    }
    while(h<1 || h>8);
    row(h);
    return 0;
}
