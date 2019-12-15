#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// intf("%d\n",p);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int langueur(char *p){
//     int i,compt,n;
//     i=0;compt=0;
//     while (*(p+i)<n)
//     {
//         i++;
//         compt++;
//         printf("%d\n",compt);
//     }
// }
// int main()
// {
//     int n;
//     char *p;
//     p=(int*)malloc(n*sizeof(char));
//     langueur(p);
// }

// int main()
// {
//     int x,D,x1,x2;
//     double a,b,c;

//     a*(pow(x,2))+b*x+c == 0;
//     D=pow(b,2)-4*a*c;
//     if(D>0){
//         x1=(-b-sqrt(D))/2*a;
//         x2=(-b+sqrt(D))/2*a;
//         printf("le solutions et x1:%d x2 : %d\n",x1,x2);
//     }
//     else if (D=0){
//         x=-b/2*a;
//         printf("la solution et x: %d\n",x);
//     }
//     else 
//     printf("no solution\n");
// }

// int main()
// {
//     int n,i,d;
//     n=0;
//     printf("donner le nbr");
//     scanf("%d",&n);
//     for ( i = n-1; i < n+9; i++)
//     {
//         d=n+i;
//         printf("les nombres sons :%d\n",d);
//     }  
// }
int main()
{
    int n,i,d;
    n=0;
    printf("donner le nbr");
    scanf("%d",&n);
    i=n-1;
    while (i<n+9)
    {
        d=n+i;
        printf("les nombres sons :%d\n",d);
        i++;
    } 
}

// main()
// {
//     int n,p,x,y;
//     printf("donner vous partant:\n");
//     scanf("%d",&n);
//     printf("donner le joues :\n");
//     scanf("%d",&p);
//     x==fabs(n)/fabs(n-p);
//     y==fabs(n)/fabs(fabs(p)*fabs(n-p));
//     printf("l'ordre de chance de ganeg :%d\n",x);
//     printf("desordre de chance de ganeg :%d\n ",y);
     
// }
