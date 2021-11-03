#include <stdio.h>
#include <math.h>

int main ()
{
    int a = 0xFFDDAABB;
    int i = 1;
    unsigned char c;

    printf("number is: %d\n", a);

    for(int b=0; b <= 24; b=b+8 )
    {
        c = ((a>>b) & 0x000000FF);
        printf("byte number %d: %x\n", i, c);
        i++;
    }

    a = a & 0XFF00FFFF | 0XCC0000;
    printf("new number is: ");
    for(int b=24; b >= 0; b=b-8 )
    {
        c = ((a>>b) & 0x000000FF);
        printf("%x",  c);
    }

return 0;
}
