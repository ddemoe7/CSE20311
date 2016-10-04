#include <iostream>
using namespace std;

//Board
#define BSIZE 8
#define BLANK '.'

//White pieces
#define PAWN_W 'P'
#define KNIGHT_W 'N'
#define BISHOP_W 'W'
#define ROOK_W 'R'
#define QUEEN_W 'Q'
#define KING_W 'K'

//Black pieces
#define PAWN_B 'p'
#define KNIGHT_B 'n'
#define BISHOP_B 'w'
#define ROOK_B 'r'
#define QUEEN_B 'q'
#define KING_B 'k'

int main()
{
  int board1[8][8] = {
   {., ., k, ., ., ., ., .} ,
   {p, p, p, ., p, p, p, p} ,
   {., ., ., ., ., ., ., .} ,
   {., R, ., ., ., B, ., .} ,
   {., ., ., ., ., ., ., .} ,
   {., ., ., ., ., ., ., .} ,
   {P, P, P, P, P, P, P, P} ,
   {K, ., ., ., ., ., ., .}
  };

  for (int i = 0; i < BSIZE; i++)
  {
    for (int j = 0; j < BSIZE; j++)
    {
      cout << board1[i][j] << ' ';
    }
    cout << endl;
  }
}

//PSEUDOCODE
/*For pawn, the way to determine that is:
if p
  check 2 positions: array[i-1][j+1] and [i+1][j+1]
  if K is in that position, then check
  cout << white king is in check
end

vice versa for P to k

if r
  check rows and columns: array[i][] and array[j][]
  if K is in that pos, then 'check'
  cout << white king is in check
end

if all of array is blank
  break before checks
