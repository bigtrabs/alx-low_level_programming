#include <stdlib.h>
#include <stdio.h>
int main(void)
{
        int i,j;
        for(i=0;i<9;i++)
        {

            for(j=0;j<10;j++)
            {

                if(j == i)
                    continue;

                putchar('0'+i);

                putchar('0'+j);

                if(j==9 && i==8)
                    continue;

                putchar(',');

                putchar(' ');

            }

        }

	return (0);

}
