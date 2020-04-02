#include "stdio.h"
#include "stdlib.h"
#include "conio.h"

int main (void)
{
    printf("Press any key to get his ASCII reference...\n");
    while (1)
    {
        if(_kbhit())
        {
            int KB_CODE = _getch();
            printf("%c - %d\n", KB_CODE, KB_CODE);
        }
    }
    return 0;
}