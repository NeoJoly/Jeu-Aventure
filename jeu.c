#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

// fonction couleur de texte
void color(int couleurtexte, int couleurfond) {
  HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(H,couleurfond*16+couleurtexte);
}
// pense-bête couleurs
/*      0: noir
        1: bleu foncé
        2: vert
        3: bleu-gris
        4: marron
        5: pourpre
        6: kaki
        7: gris clair
        8: gris
        9: bleu
        10: vert fluo
        11: turquoise
        12: rouge
        13: rose
        14: jaune
        15: blanc          */

// structures
struct Lieu {
  char nom[23];
  char id[5];
};

// création des lieux
struct Lieu Lieu1 = {"Le Chateau de la Pluie", 1};
struct Lieu Lieu2 = {"La Montagne de la Mort", 2};
struct Lieu Lieu3 = {"La Foret de la Folie", 3};
struct Lieu Lieu4 = {"Le Desert de Glace", 4};
struct Lieu Lieu5 = {"La Province des Dragons", 5};

int deplacement() {

  int choixdestination;
  int lieuactuel = 1;

  // choix destination
  color(15, 0);
  printf("     (1) %s\n", Lieu1.nom);
  Sleep(250);
  color(15, 0);
  printf("     (2) %s\n", Lieu2.nom);
  Sleep(250);
  color(15, 0);
  printf("     (3) %s\n", Lieu3.nom);
  Sleep(250);
  color(15, 0);
  printf("     (4) %s\n", Lieu4.nom);
  Sleep(250);
  color(15, 0);
  printf("     (5) %s\n\n", Lieu5.nom);
  Sleep(1000);
  printf("Choisis ta destination : ");
  scanf("%d", &choixdestination);
  printf("\n\n");

  // le joueur va au lieu 1
  if (choixdestination == 1 && lieuactuel != 1) {
    color(9, 0);
    printf("Tu atteins %s. ", Lieu1.nom);
    printf("\n\n");
    lieuactuel = 1;
  }
  // le joueur va au lieu 2
  else if (choixdestination == 2 && lieuactuel != 2 && lieuactuel != 4) {
    color(9, 0);
    printf("Tu atteins %s. ", Lieu2.nom);
    printf("\n\n");
    lieuactuel = 2;
  }
  // le joueur va au lieu 3
  else if (choixdestination == 3 && lieuactuel != 3 && lieuactuel != 5) {
    color(9, 0);
    printf("Tu atteins %s. ", Lieu3.nom);
    printf("\n\n");
    lieuactuel = 3;
  }
  // le joueur va au lieu 4
  else if (choixdestination == 4 && lieuactuel != 4 && lieuactuel != 2) {
    color(9, 0);
    printf("Tu atteins %s. ", Lieu4.nom);
    printf("\n\n");
    lieuactuel = 4;
  }
  // le joueur va au lieu 5
  else if (choixdestination == 5 && lieuactuel != 5 && lieuactuel != 3) {
    color(9, 0);
    printf("Tu atteins %s. ", Lieu5.nom);
    printf("\n\n");
    lieuactuel = 5;
  }
  else if (choixdestination == 1 && lieuactuel == 1 || choixdestination == 2 && lieuactuel == 2 || choixdestination == 3 && lieuactuel == 3 || choixdestination == 4 && lieuactuel == 4 || choixdestination == 5 && lieuactuel == 5) {
    color(9, 0);
    printf("Tu tu trouves actuellement en ce lieu ou le lieu choisi se trouve trop loin de ta position. Choisis-en un autre.");
    printf("\n\n");
  }

  return 0;

}

int main(int argc, char const *argv[]) {

  system("cls");

  int jeu = 1;
  char nom[20];
  int argent = 500;

  //titre
  color(0, 15);
  printf("\n\n");
  printf("                    <<<<<<<<<< JEU D'AVENTURE >>>>>>>>>>                    \n\n");
  printf("\n\n");

  // choix du nom
  printf("\n\n");
  color(12, 0);
  printf("Comment vous appelez-vous ?  ");
  scanf("%s", nom);
  Sleep(1000);

  // mise en situation
  printf("\n");
  color(9, 0);
  printf("Bonjour %s, es-tu pret pour l'aventure ?\n\n", nom);
  Sleep(1000);
  color(10, 0);
  printf("Argent : %d$\n\n", argent);
  Sleep(1000);

while (jeu == 1) {
  deplacement();
}

  return 0;
}
















//
