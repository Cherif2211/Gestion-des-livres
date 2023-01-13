//      _____________________________________________________
//      |                                                   |
//      |**********       - MINI PROJECT          **********|
//      |                                                   |
//      |**********    - Gestion des livres       **********|
//      |                                                   |
//      |**********  - Belmir Mohammed Cherif     **********|
//      _____________________________________________________
//*****************************************************************

#include <stdio.h>

struct library   // Declaration
{
  char titre[30];
  char auteur_n[30];
  char auteur_p[30];
  int isbn;
  int date_pub;
  char maison_pub[30]
};

int main()
{
  struct library l[100];
  int i, j, k;
  i = j = k = 0;

  while (j != 4)
  {
    printf("\n1. Entrez information sur le livre");
    printf("\n2. Afficher les informations sur le livre");
    printf("\n3. Le nombrede livers disponibles\n");
    printf("4. Exit");

    printf("\n\nEntrez l'un des elements : ");
    scanf("%d", &j);

    switch (j)
    {
    // Ajouter un livre
    case 1:

      printf("Enter Titre = ");
      scanf("%s", l[i].titre);

      printf("Enter auteur nom = ");
      scanf("%s", l[i].auteur_n);

      printf("Enter auteur pernom = ");
      scanf("%s", l[i].auteur_p);

      printf("Enter ISBN = ");
      scanf("%d", &l[i].isbn);

      printf("Enter Date de publication \'ANS\' = ");
      scanf("%d", &l[i].date_pub);

      printf("Enter Maison de Publication = ");
      scanf("%s", l[i].maison_pub);

      k++;

      break;
    // Afficher les informations des livres
    case 2:
      printf("vous avez entrer les informations suivantes\n");
      for (i = 0; i < k; i++)
      {
        printf(" Titre = %s", l[i].titre);

        printf("\t|\t auteur nom = %s", l[i].auteur_n);

        printf("\t|\t auteur pernom = %s", l[i].auteur_p);

        printf("\t|\t ISBN = %d", l[i].isbn);

        printf("\t|\t Date de publication = %d", l[i].date_pub);

        printf("\t|\t Maison de Publication = %s\t|\t", l[i].maison_pub);
      }
      break;
    // Afficher le nmbre de livre entrer
    case 3:
      printf("\n Nombre de livres dans la bibliotheque : %d", k);
      break;
    // Puor Quitter
    case 4:
      exit(0);
    }
  }
  return 0;
}

