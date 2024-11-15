// ceci sera le fichier principal
# include <stdio.h>
# define constante_taille_tableau 8

void main ()
{
  // inititialisation du tableau
  int board[constante_taille_tableau][constante_taille_tableau][2];
  for (int i = 0; i < constante_taille_tableau; i++) 
    {
      for (int j = 0; j < constante_taille_tableau; j++)
        {
          board[i][j][0] = 0;
          board[i][j][1] = 0;
        }
    }
  // placement des piece
  /* un 0 represente une case vide
     un 1 represente un pion
     un 2 une tour 
     un 3 un cavalier
     un 4 un fou 
     un 5 une dame
     un 6 le rois
  */
  for (int i = 0; i < constante_taille_tableau; i++) 
    {
      board[1][i][0] = 1; // set tout les pions
      board[1][i][1] = 1; 
      board[constante_taille_tableau - 2][i][0] = 1;
      board[constante_taille_tableau - 2][i][1] = 2;
      if (i == 0 || i == 7) { // set les tours
        board[0][i][0] = 2;
        board[0][i][1] = 1;
        board[constante_taille_tableau - 1][i][0] = 2;
        board[constante_taille_tableau - 1][i][1] = 2;
      }
      if (i == 1 || i == 6) { // set les cavaliers
        board[0][i][0] = 3;
        board[0][i][1] = 1;
        board[constante_taille_tableau - 1][i][0] = 3;
        board[constante_taille_tableau - 1][i][1] = 2;
      }
      if (i == 2 || i == 5) { // set les fous
        board[0][i][0] = 4;
        board[0][i][1] = 1;
        board[constante_taille_tableau - 1][i][0] = 4;
        board[constante_taille_tableau - 1][i][1] = 2;
      if (i == 3) { // set les rois
        board[0][i][0] = 6;
        board[0][i][1] = 1;
        board[constante_taille_tableau - 1][i][0] = 6;
        board[constante_taille_tableau - 1][i][1] = 2;
      }
      if (i == 4) { // set les dames
        board[0][i][0] = 5;
        board[0][i][1] = 1;
        board[constante_taille_tableau - 1][i][0] = 5;
        board[constante_taille_tableau - 1][i][1] = 2;
      }
    }
}
