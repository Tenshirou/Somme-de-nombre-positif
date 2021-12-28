#include <stdio.h>

int main()
{
    int nb1,nb2,s;
    
    printf("Donner deux nombre positif\n");
    
    scanf("%d %d",&nb1,&nb2);
    
    while(nb1<0 || nb2<0){
     if (nb1<0){
        printf("Le premier nombre que vous aviez entrer n'est pas positif,redonner un positif s'il vous plait\n");
     scanf("%d",&nb1);
        }
        else if (nb2<0){
            printf("Le deuxieme nombre que vous aviez entrer n'est pas positif,redonner un positif s'il vous plait\n");
     scanf("%d",&nb2);
        }
}

    s = nb1+nb2;
    printf("La somme des deux nombres est de : %d",s);
    return 0;
}
