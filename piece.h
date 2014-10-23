#ifndef piece
#define piece

#include <stdio.h>
#include <stdlib.h>


typedef struct tab_piece {
  int ** forme;
  int utilise;
  int pos_X;
  int pos_Y;
  int rotation;
  int sens;
  int numero;
}* piece_ptr;

/*creation function*/

piece_ptr creer_piece(int N);

/*access function*/

void tourner_piece(piece_ptr);
void pivoter_piece(piece_ptr);
void decale(piece_ptr);
int** copie_forme(int** forme);

#endif
