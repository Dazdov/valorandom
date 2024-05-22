#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NUM_OF_PRIMARY 18
#define NUM_OF_SHIELDS 3
enum primary{BUCKY=0,MARSHAL,STINGER,SPECTRRE,ARES,JUDGE,BULLDOG,GUARDIAN,PHANTOM,VANDAL,ODIN,OPERATOR,CLASSIC, SHORTY,FRENZY,GHOST, SHERIFF, OUTLAW};
enum shields{NO_SHIELD=0,HALF_SHIELD,FULL_SHIELD};

int primaries();
int shields();
void choose_primary(int primaries);
void choose_shield(int shields);
void ending();

int main()
{
    int shields_cost[] = {0,400,1000};
    int primary_cost[] = {850,950,1100,1600,1600,1850,2050,2250,2900,2900,3200,4700,0,300,450,500,800,2400};
    int rifle = 0;
    int shield = 0;
    int confirm = 1;
    srand(time(NULL));
    int money = 1;
    while (money > 0)
    {
        printf("\nHow much money do you have? ");
        scanf("%d", &money);
        if (money < 1)
        {
            confirm = 0;
        }
        
        while (confirm)
        {

            rifle = primaries();
            shield = shields();

                if ((shields_cost[shield]+primary_cost[rifle]) < money)
                {
                    choose_shield(shield);
                    choose_primary(rifle);
                    confirm = 0;
                }
                else
                {
                    confirm = 1;
                }

        }
    }
    ending();
    getchar();
    getchar();
    return 0;
}
/*
will choose a number between 0 and NUM_OF_primaries (18) and return it
input: none
output: num between 0 and 19
*/
int primaries()
{
    int randomnumber = rand() % NUM_OF_PRIMARY;
    return randomnumber;
}

/*
will choose a number between 0 and NUM_OF_shield (2) and return it
input: none
output: num between 0 and 2
*/
int shields()
{
    int randomnumber = rand() % NUM_OF_SHIELDS;
    return randomnumber;
}

void choose_primary(int primaries)
/*
NO_RIFLE=0,BUCKY,MARSHAL,STINGER,SPECTRRE,ARES,JUDGE,BULLDOG,GUARDIAN,PHANTOM,VANDAL,ODIN,OPERATOR
*/
{
    switch (primaries)
    {
        case BUCKY:
        printf("bucky ");
        break;

        case MARSHAL:
        printf("marshal ");
        break;

        case STINGER:
        printf("stinger ");
        break;

        case SPECTRRE:
        printf("spectre ");
        break;

        case ARES:
        printf("ares ");
        break;

        case JUDGE:
        printf("judge ");
        break;

        case BULLDOG:
        printf("bulldog ");
        break;

        case GUARDIAN: 
        printf("guardian ");
        break;

        case PHANTOM:
        printf("phantom ");
        break;

        case VANDAL:
        printf("vandal ");
        break;

        case ODIN:
        printf("odin ");
        break; 

        case OPERATOR:
        printf("operator ");
        break;

        case (CLASSIC):
        printf("classic ");
        break;

        case (SHORTY):
        printf("shorty ");
        break;

        case (FRENZY):
        printf("frenzy ");
        break;

        case (GHOST):
        printf("ghost ");
        break;

        case (SHERIFF):
        printf("sheriff ");
        break;

        case (OUTLAW):
        printf("outlaw ");
        break;
    }
}
void choose_shield(int shields)
/*
NO_SHIELD=0,HALF_SHIELD,FULL_SHIELD
*/
{
    switch (shields)
    {
        case NO_SHIELD:
        printf("no shield ");
        break;
        case HALF_SHIELD:
        printf("half shield ");
        break;
        case FULL_SHIELD:
        printf("full shield ");
        break;
    }
}


void ending()
{
    printf(" ░▒▓███████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░ \n ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        \n ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░        \n ░▒▓███████▓▒░ ░▒▓██████▓▒░░▒▓██████▓▒░   \n ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓█▓▒░   ░▒▓█▓▒░        \n ░▒▓█▓▒░░▒▓█▓▒░  ░▒▓█▓▒░   ░▒▓█▓▒░        \n ░▒▓███████▓▒░   ░▒▓█▓▒░   ░▒▓████████▓▒░");

}
