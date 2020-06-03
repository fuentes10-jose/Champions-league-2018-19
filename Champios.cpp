#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=0;
    do
    {
        printf("\n Fase que deseas ver: \n");
        printf("\n 1- Octavos de final ");
        printf("\n 2- Cuartos de final ");
        printf("\n 3- Semifinales ");
        printf("\n 4- Final ");
        printf("\n 5- Campeon ");
        printf("\n 6- Final de progrma");
        printf("\n opcion que eligio: ");
        scanf("%d",&x);
        system("cls");
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("\n\t\t Octavos de Finales \t\t");
                printf("\n Schalke\n");
                printf("\n Vs");
                printf("\n Man, City\n");
                printf("\n Atletico\n");
                printf("\n Vs\n");
                printf("\nJuventus\n");
                printf("\n Ma.United\n");
                printf("\n Vs \n");
                printf("\n PSG \n");
                printf("\n Tottenham \n");
                printf("\n Vs \n");
                printf("\n Dortmund \n");
                printf("\n Lyon \n");
                printf("\n Vs \n");
                printf("\n Barcelona\n");
                printf("\n Roma \n");
                printf("\n Vs \n");
                printf("\n Porto \n");
                printf("\n Ajax \n");
                printf("\n Vs \n");
                printf("\n Real Madrid \n");
                printf("\n Liverpool \n");
                printf("\n Vs \n");
                printf("\n Bayer \n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
                printf("\n\t\t cuartos de final \t\t");
                printf("\n Ajax\n");
                printf("\n Vs \n");
                printf("\n Juventus \n");
                printf("\n Liverpool");
                printf("\n Vs \n");
                printf("\n Porto");
                printf("\n Tottenham \n");
                printf("\n Vs \n");
                printf("\n Man.City \n");
                printf("\n Man.United \n");
                printf("\n Vs \n");
                printf("\n Barcelona \n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t Semifinales \t\t");
                printf("\n Tottenham \n ");
                printf("\n Vs");
                printf("\n Ajax \n");
                printf("\n Fc Barcelona \n");
                printf("\n VS");
                printf("\n Liverpool \n");
                break;

            case 4:
                printf("\n\n");
                printf("\n\t\Final\t\t");
                printf("\n Liverpool  \n");
                printf("\n Vs");
                printf("\n\t\t Totteham \t\t");
                
                break;

            case 5:
                printf("\n\n");
                printf("\n\t\t Campeoon \t\t");
                printf("\n Liverpool \n");
                printf("\n\n");
                break;

           
        }
    }while(x);
    return 0;
}
