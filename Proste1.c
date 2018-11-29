#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int tab[25],i,suma=0;
    srand(time(NULL));
    for(i=0;i<25;i++)
        tab[i]=rand()%101;
    for(i=0;i<25;i++)
        printf("%3d\n",tab[i]);
        printf("\n");
    for(i=0;i<25;i++)
    {
        if(tab[i]%2==0 && tab[i]>50)
        {
           suma++;
        }

    }
    printf("Tyle jest liczb parzystych wiekszych od 50: %d",suma);


    getchar();
    return 0;
}
