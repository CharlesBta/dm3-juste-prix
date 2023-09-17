#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(){
    srand(time(NULL));
    int generated_number = (rand() % 1000) + 1;
    return generated_number;
}

int main() {
    int guess_number;
    int secret_number = random_number();
    printf("Vous jouez au juste prix!\nVous devez deviner quel est le prix, ce dernier est compris entre 0 et 1000.\nVous avez autant d'essai que vous voulez.\n");
    printf("A vous de jouer, essaye de deviner !\nEcris un nombre: ");
    scanf("%d",&guess_number);
    getchar();
    while (guess_number != secret_number){
        if (guess_number<secret_number){
            printf("C'est plus!\nEssaye encore: ");
        }else printf("C'est moins!\nEssaye encore: ");
        scanf("%d", &guess_number);
        getchar();
    }
    printf("Bravo, vous avez trouve le juste prix!");
    return 0;
}

