#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Fonction(int n){
    int i,d;
    for ( i = 1; i < n; i++)
    {
        d=i*n;
    }
    return d;
}
int main()
{
    int a;
    int Fonction(a);
    printf("donner le nombre de fact ");
    scanf("%d",&a);
    printf("le fact et :\n",Fonction(a));
    
}
