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