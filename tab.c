#include "tab.h"
void taille(int* w, int *h)
{
  int test;
  int nbr_ligne = 1;
  int colonne = 0;
  int col_test = 1;
  char ligne[100];

  FILE * fichier = fopen("pentomino.txt" ,"r");

  while ((test = fgetc(fichier)) != '\n')
    {
      colonne =+1;
    }

  while (((test = fgetc(fichier)) != EOF)&&(col_test != 0))
    {
      col_test = 0;
      nbr_ligne = nbr_ligne +1;
      while ((test = fgetc(fichier)) != '\n')
	{
	  col_test =+1;
	}
    }
  nbr_ligne = nbr_ligne -1;

  *w = colonne;
  *h = nbr_ligne; 
}


fond_ptr creer_tab()
{

  int w,h;
  taille(&w,&h);
  
  fond_ptr background = malloc(sizeof(fond_ptr));
  background->fond = malloc(w*h*sizeof(int));

  For(i = 0; i < nbr_ligne ; i++)
    {
      For(j = 0; j < colonne ; j++)
	{
	  tab_fond[i,j]=0;
	}
    }
}
