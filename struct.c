#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
       char *autr[30];
       int *annes;
       char *titre[30];
       char *liste[30];
       int nb;
       chanson chan[60]; 
    }disque;

typedef struct{
        char *tit[30];
        int *dur;
    }chanson;    

int main()
{
    disque dis;
    chanson chans;
    int n,i,j;
    printf("give how many auteurs : \n");
    scanf("%d",&n);
    
    for ( i = 1; i <= n; i++)
    {
        printf("name of auteur");
        scanf("%s",&dis.autr);
        printf("give the %d auteur",i);
        scanf("s",dis.autr);
        printf("give the year :\n");
        scanf("%d",&dis.annes);
        printf("tittle of album :\n");
        scanf("%s",dis.titre);
        printf("give list of album:\n");
        scanf("%s",&dis.liste);
        printf("give number of songs :\n");
        scanf("%d",&dis.nb);
        printf("how many songs :\n");
        scanf("%d",&j);
        for ( j = 0; i <j ; j++)
        {
            printf("give name of songs :\n");
            scanf("%s",chans.tit);
            printf("the periode :\n");
            scanf("%d",&chans.dur);    
        }
    }
    printf("auteur %c annes %d titre %s liste %s nbr %d name %s period %d",dis.autr,dis.annes,dis.titre,dis.liste,dis.nb,chans.tit,chans.dur);

}
