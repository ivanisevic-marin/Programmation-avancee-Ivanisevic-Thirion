#ifndef tab
#define tab

#include "piece.h"

/* Structure */
typedef struct tab_fond{
  int** fond;
} *fond_ptr;

/*creation fonction*/

void taille(int* w,int* h); 
fond_ptr creer_tab(int *w, int *h);

/*access fonction*/

void placer(piece_ptr);
void enlever(piece_ptr); //modification possible

#endif
