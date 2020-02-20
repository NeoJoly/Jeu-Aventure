#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>
#include <stdbool.h>

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

/*int deplacement() {

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
  printf("Lieu actuel : %d", lieuactuel);
  printf("\n");
  Sleep(500);
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


}*/

int main(int argc, char const *argv[]) {

  system("cls");

  int jeu = 1;
  int jeucomplet = 0;
  char nom[20];
  int argent = 500;

  //titre
  color(0, 15);
  printf("\n\n");
  printf("                    <<<<<<<<<< JEU DE COMBAT D'AVENTURE >>>>>>>>>>                    \n\n");
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
  printf("Bonjour %s, es-tu pret pour le combat et l'aventure ?\n\n", nom);
  Sleep(1000);

while (jeucomplet != 4) {
  //deplacement();

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
  printf("Lieu actuel : %d", lieuactuel);
  printf("\n");
  Sleep(500);
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

  if (lieuactuel == 2) {
    int pvjoueur = 50;
    int choixjoueur;
    int pvspectre = 50;
    int lieu2gagne = 0;
    color(9, 0);
    printf("Un spectre t'attaque !\n\n");
    Sleep(500);
    while (lieu2gagne == 0) {
      color(12, 0);
      printf("Vos PV : %d\n", pvjoueur);
      printf("PV du spectre : %d\n\n", pvspectre);
      Sleep(500);
      color(9, 0);
      printf("Souhaites-tu attaquer (1) ou vous defendre (2) ? ");
      scanf("%d", &choixjoueur);
      printf("\n\n");
      srand(time(NULL));
      int choixspectre = rand()%2; // choix 0 = attaque // choix 1 = défense
      int pvhasard = rand()%11;
      if (choixjoueur == 1 && choixspectre == 0) {
        printf("Tu decides d'attaquer. Le spectre decide lui aussi d'attaquer. Vous perdez chacun des PV.\n\n");
        pvjoueur-=pvhasard;
        pvspectre-=pvhasard;
      }
      if (choixjoueur == 1 && choixspectre == 1) {
        printf("Tu decides d'attaquer. Le spectre se defend. Il perd moitie moins de PV.\n\n");
        pvspectre = pvspectre - (pvhasard/2);
      }
      if (choixjoueur == 2 && choixspectre == 0) {
        printf("Tu decides de te defendre. Le spectre attaque. Tu perds moitie moins de PV.\n\n");
        pvjoueur = pvjoueur - (pvhasard/2);
      }
      if (choixjoueur == 2 && choixspectre == 1) {
        printf("Tu decides de te defendre. Le spectre se defend lui aussi. Rien ne se passe.\n\n");
      }
      if (pvspectre <= 0) {
        color(9, 0);
        printf("Tu as battu le spectre, tu peux maintenant partir a la decouverte d'autres lieux.\n");
        jeucomplet+=1;
        lieu2gagne=1;
      } else if (pvjoueur <= 0){
        color(0, 15);
        printf("          <<<<<<<<<< GAME OVER ! >>>>>>>>>>          ");
        Sleep(3000);
        return(0);
      }
    }

  }

  if (lieuactuel == 3) {
    jeucomplet+=1;
  }

  if (lieuactuel == 4) {
    jeucomplet+=1;
  }

  if (lieuactuel == 5) {
    jeucomplet+=1;
  }

}

  return 0;
}
















//
