/*
int main(int argc, char *argv[])
{
    char lettre = 'A';

    printf("%c\n", lettre);

    return 0;
}
*/
/*
int main(int argc, char *argv[])
{
    char lettre = 0;

    scanf("%c", &lettre);
    printf("%c\n", lettre);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0

    // Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
    //chaine[0] = 'S';
    //chaine[1] = 'a';
    //chaine[2] = 'l';
    //chaine[3] = 'u';
    //chaine[4] = 't';
    //chaine[5] = '\0';
    char chaine[] = "Salut"; // La taille du tableau chaine est automatiquement calculée

    // Affichage de la chaîne grâce au %s du printf
    printf("%s", chaine);

    return 0;
}
*/
/*
int main(int argc, char *argv[])
{
    char prenom[100];

    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !", prenom);

    return 0;
}
*/
/*
int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", chaine, longueurChaine);

    return 0;
}
*/
/*
int longueurChaine(const char* chaine);

int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueur = 0;

    longueur = longueurChaine(chaine);

    printf("La chaine %s fait %d caracteres de long", chaine, longueur);

    
    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0

    nombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return nombreDeCaracteres;
}
*/
/*
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);

int main(int argc, char *argv[])
{
    // On crée une chaîne "chaine" qui contient un peu de texte
    // et une copie (vide) de taille 100 pour être sûr d'avoir la place
    // pour la copie
    
    char chaine[] = "Texte", copie[100] = {0};

    strcpy(copie, chaine); // On copie "chaine" dans "copie"

    // Si tout s'est bien passé, la copie devrait être identique à chaine
    printf("chaine vaut : %s\n", chaine);
    printf("copie vaut : %s\n", copie);

    return 0;
}
*/

int strcmp(const char* chaine1, const char* chaine2);

int main(int argc, char *argv[])
{
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }

    return 0;
}