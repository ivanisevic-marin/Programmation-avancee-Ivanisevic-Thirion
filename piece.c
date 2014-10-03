#include "piece.h"



piece_ptr creer_piece()
{
  piece_ptr piece = malloc(sizeof(piece_ptr));
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

  piece->
  piece->utilise = 0;
  piece->pos_X = 0;
  piece->pos_Y = 0;
  piece->rotation = 1;
  piece->sens = 0;



}

void tourner_piece(* piece_ptr piece)
{
  & piece->rotation = &piece->rotation + 1;
  if (& piece->rotation > 4)
    {
      & piece->rotation = 1;
    }
}

void pivoter_piece(* piece_ptr piece)
{
  & piece->sens = &piece->sens + 1;
  if (& piece->sens > 1)
    {
      & piece->sens = 0;
    }
}
