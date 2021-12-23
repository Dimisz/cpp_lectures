#include <iostream>
#include <array>

using namespace std;

void PrintGrid(char grid[3][3]);
void CheckXWin(char grid[3][3], bool& is_game_over);
void CheckOWin(char grid[3][3], bool& is_game_over);
void XMove(char grid[3][3], bool& x_moved, bool& is_game_over);
void OMove(char grid[3][3], bool& o_moved, bool& is_game_over);


int main()
{
  bool is_game_over = false;
  char grid[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
  };
  PrintGrid(grid);
  cout << "X starts!" << endl;
  
  while(!is_game_over)
  {
    cout << "================" << endl;
    cout << "X moves" << endl;
    bool x_moved = false;
    while(!x_moved)
    {
      XMove(grid, x_moved, is_game_over);
    }
    if (is_game_over) break;
    
    cout << "================" << endl;
    cout << "O moves" << endl;
    bool o_moved = false;
    while(!o_moved)
    {
      OMove(grid, o_moved, is_game_over);
    }
    
  }
  return 0;
}

void PrintGrid(char grid[3][3])
{
  cout << "_____________" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "| " << grid[i][j] << " ";
    }
    cout << "|\n-------------" << endl;
  }
}


void CheckXWin(char grid[3][3], bool& is_game_over)
{
  if (
      (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')||
      (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
      ||(grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
      || (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
      || (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
      || (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
      || (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
      || (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
      )
  {
    cout << "X wins!" << endl;
    is_game_over = true;
  }
}


void CheckOWin(char grid[3][3], bool& is_game_over)
{
  if (
      (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
    ||(grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
    ||(grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
    ||(grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
    ||(grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O')
    ||(grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
    ||(grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
    ||(grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
      )
  {
    cout << "O wins!" << endl;
    is_game_over = true;
  }
}

void XMove(char grid[3][3], bool& x_moved, bool& is_game_over)
{
  int row;
  cout << "Enter row: " << endl;
  cin >> row;
  int col;
  cout << "Enter column: " << endl;
  cin >> col;
  
  if ((row - 1 < 0 || row - 1 > 2)||(col - 1 < 0 || col - 1 > 2))
  {
    cout << "Invalid row or column!" << endl;
    cout << "Pick row / column from 1 to 3 inclusive" << endl;
  }
  else if ((grid[row-1][col-1] == 'X')||(grid[row-1][col-1] == 'O'))
  {
    cout << "Cell occupied! Pick other cell" << endl;
  }
  else
  {
    grid[row-1][col-1] = 'X';
    cout << "Move recorded!" << endl;
    x_moved = true;
    PrintGrid(grid);
    CheckXWin(grid, is_game_over);
  }
}
  
  void OMove(char grid[3][3], bool& o_moved, bool& is_game_over)
  {
    int row;
    cout << "Enter row: " << endl;
    cin >> row;
    int col;
    cout << "Enter column: " << endl;
    cin >> col;
    
    if ((row - 1 < 0 || row - 1 > 2)||(col - 1 < 0 || col - 1 > 2))
    {
      cout << "Invalid row or column!" << endl;
      cout << "Pick row / column from 1 to 3 inclusive" << endl;
    }
    else if ((grid[row-1][col-1] == 'X')||(grid[row-1][col-1] == 'O'))
    {
      cout << "Cell occupied! Pick other cell" << endl;
    }
    else
    {
      grid[row-1][col-1] = 'O';
      cout << "Move recorded!" << endl;
      o_moved = true;
      PrintGrid(grid);
      CheckOWin(grid, is_game_over);
    }
  }
