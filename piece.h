#include <stdio.h>
#include <stdlib.h>

typedef struct tab_piece {
  int forme[5,5];
  int utilise;
  int pos_X;
  int pos_Y;
  int rotation;
  int sens;
}piece_ptr;

/*creation function*/

piece_ptr creer_piece(void);

/*access function*/

void tourner_piece(piece_ptr);
void pivoter_piece(piece_ptr);
