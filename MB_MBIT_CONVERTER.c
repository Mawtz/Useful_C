#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    
    char    MB[1000];
    float   MB_atof;
    char    MBIT[1000];
    float   MBIT_atof;
    char    MB_Para[10]         = "-mb";
    char    MBIT_Para[10]       = "-mbits";
    float   result_to_mbits;
    float   result_to_mb;
   


    if ( argc > 3 || argc < 3 )
    {
        printf("Parameter-Error: Ungueltige Parametermenge.\nSYNTAX: [DLSPEEDCALC] [1. Parameter] [2. Parameter]\n");
        printf("Gueltige Parameter [-mb] [-mbits]\n");
    }

    else if ( argc == 3 )
    {
        if ( strcmp(argv[1], MB_Para) == 0 && strcmp(argv[2], MBIT_Para) == 0 )
        {
            printf( "Zahl in Megabyte eingeben:\n" );
            scanf( "%s", MB );
            MB_atof = atof(MB);
            result_to_mbits = atof(MB) * 8;
            printf( "%s MB/s = %.2f MBit/s\n", MB, result_to_mbits );
        }

        else if ( strcmp(argv[1], MBIT_Para) == 0 && strcmp(argv[2], MB_Para) == 0 )
        {
            printf( "Zahl in Megabit eingeben:\n" );
            scanf( "%s", MBIT );
            MBIT_atof = atof(MBIT);
            result_to_mb = atof(MBIT) / 8;
            printf( "%s MBit/s = %.2f MB/s\n", MBIT, result_to_mb );
        }
    
        else
        {
            printf( "ERROR: Ungueltige Eingabe.\nBitte pruefen Sie ihre Eingabe.\n" );
        }
    }
return 0;
}
