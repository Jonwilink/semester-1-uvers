#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int grid[9][9];
int sudokuboardeasy1[9][9] = 

#define N 9
#define UNASSIGNED 0
{

 {4, 2, 7, 5, 0, 8, 9, 0, 3},
 {0, 0, 5, 0, 4, 0, 0, 0, 7},
 {6, 8, 0, 0, 0, 0, 0, 0, 4},
 {7, 6, 0, 0, 1, 0, 0, 3, 0},
 {1, 0, 2, 0, 0, 5, 0, 0, 9},
 {0, 9, 8, 0, 0, 4, 0, 6, 0},
 {3, 0, 0, 8, 5, 1, 0, 0, 0},
 {8, 7, 1, 0, 0, 6, 0, 0, 0},
 {2, 0, 6, 4, 0, 3, 0, 0, 1}
 
};

int sudokuboardeasy2[9][9] = 
{

 {0, 0, 0, 7, 6, 2, 0, 9, 0},
 {0, 0, 0, 3, 8, 0, 0, 2, 7},
 {2, 8, 0, 0, 5, 9, 1, 6, 3},
 {0, 0, 0, 0, 0, 0, 6, 0, 1},
 {0, 1, 5, 0, 0, 3, 2, 0, 0},
 {6, 0, 0, 0, 4, 5, 7, 0, 8},
 {0, 2, 0, 9, 0, 0, 4, 0, 5},
 {0, 7, 0, 8, 2, 4, 0, 0, 0},
 {9, 0, 0, 5, 0, 7, 0, 8, 0}
 
};

int sudokuboardeasy3[9][9] = 
{

 {0, 0, 4, 5, 0, 0, 0, 3, 1},
 {1, 0, 0, 4, 6, 0, 2, 0, 0},
 {0, 6, 9, 3, 0, 2, 0, 4, 0},
 {4, 0, 0, 0, 3, 5, 8, 1, 0},
 {0, 0, 0, 0, 0, 0, 0, 0, 0},
 {0, 2, 1, 8, 9, 0, 0, 0, 6},
 {0, 4, 0, 9, 0, 1, 3, 2, 0},
 {0, 0, 2, 0, 4, 3, 0, 0, 5},
 {8, 1, 0, 0, 0, 7, 9, 0, 0}
 
};

int sudokuboardmedium1[9][9] = 
{

 {0, 4, 9, 0, 2, 0, 5, 0, 0},
 {0, 5, 0, 8, 0, 0, 0, 0, 0},
 {0, 0, 1, 0, 5, 6, 0, 0, 4},
 {0, 1, 8, 0, 0, 5, 4, 0, 0},
 {0, 3, 0, 0, 0, 0, 0, 5, 0},
 {0, 0, 2, 4, 0, 0, 9, 8, 0},
 {6, 0, 0, 5, 8, 0, 7, 0, 0},
 {0, 0, 0, 0, 0, 4, 0, 6, 0},
 {0, 0, 5, 0, 7, 0, 3, 1, 0}
 
};

int sudokuboardmedium2[9][9] = 
{

 {0, 0, 0, 0, 0, 0, 0, 0, 7},
 {6, 4, 9, 2, 0, 0, 8, 1, 0},
 {0, 0, 0, 0, 0, 0, 0, 9, 0},
 {0, 6, 2, 0, 7, 0, 0, 5, 1},
 {0, 8, 5, 0, 0, 9, 0, 0, 6},
 {3, 0, 4, 0, 0, 0, 0, 0, 0},
 {4, 0, 0, 0, 0, 0, 0, 7, 5},
 {0, 1, 8, 0, 0, 0, 3, 0, 0},
 {0, 5, 0, 1, 0, 6, 2, 0, 8}
 
};

int sudokuboardmedium3[9][9] = 
{

 {4, 0, 0, 6, 0, 0, 5, 0, 0},
 {3, 0, 0, 5, 0, 9, 0, 2, 0},
 {7, 0, 2, 8, 3, 0, 0, 0, 9},
 {0, 0, 8, 0, 0, 7, 0, 0, 0},
 {0, 4, 0, 3, 9, 6, 0, 0, 0},
 {6, 0, 0, 2, 0, 4, 0, 0, 0},
 {0, 7, 0, 0, 0, 0, 9, 0, 0},
 {0, 2, 0, 7, 0, 0, 1, 0, 0},
 {1, 0, 5, 0, 0, 0, 3, 0, 0}
 
};

int sudokuboardhard1[9][9] = 
{

 {0, 0, 0, 4, 0, 0, 5, 0, 6},
 {0, 0, 0, 0, 0, 0, 4, 3, 0},
 {0, 6, 0, 5, 0, 0, 0, 1, 0},
 {0, 0, 3, 0, 5, 0, 0, 9, 0},
 {4, 0, 7, 0, 0, 0, 8, 0, 0},
 {9, 0, 0, 0, 8, 7, 2, 0, 0},
 {0, 7, 1, 0, 0, 5, 0, 0, 0},
 {0, 0, 0, 0, 0, 6, 0, 0, 0},
 {0, 5, 0, 0, 0, 1, 0, 0, 4}
 
};

int sudokuboardhard2[9][9] = 
{

 {0, 0, 0, 0, 0, 9, 0, 0, 0},
 {3, 0, 0, 8, 2, 0, 9, 0, 0},
 {4, 8, 0, 0, 0, 0, 0, 0, 7},
 {0, 0, 8, 0, 9, 6, 7, 0, 0},
 {0, 0, 7, 0, 1, 0, 0, 0, 0},
 {0, 9, 1, 0, 5, 3, 0, 2, 0},
 {0, 0, 0, 0, 0, 0, 0, 4, 1},
 {0, 0, 0, 1, 0, 0, 0, 0, 0},
 {0, 6, 0, 0, 0, 4, 0, 9, 0}
 
};

int sudokuboardhard3[9][9] = 
{

 {0, 0, 7, 0, 0, 0, 9, 1, 0},
 {0, 0, 5, 0, 0, 0, 0, 8, 0},
 {6, 0, 0, 0, 0, 7, 0, 0, 0},
 {0, 0, 9, 8, 0, 0, 0, 0, 6},
 {0, 0, 0, 0, 2, 0, 3, 4, 0},
 {0, 0, 6, 0, 0, 3, 0, 9, 0},
 {1, 3, 2, 6, 0, 0, 4, 0, 0},
 {7, 0, 0, 0, 0, 0, 0, 0, 8},
 {0, 9, 0, 7, 0, 0, 0, 0, 0}
 
};

int sudokuboard[9][9] = 
{
 {0, 0, 7, 0, 0, 0, 9, 1, 0},
 {0, 0, 5, 0, 0, 0, 0, 8, 0},
 {6, 0, 0, 0, 0, 7, 0, 0, 0},
 {0, 0, 9, 8, 0, 0, 0, 0, 6},
 {0, 0, 0, 0, 2, 0, 3, 4, 0},
 {0, 0, 6, 0, 0, 3, 0, 9, 0},
 {1, 3, 2, 6, 0, 0, 4, 0, 0},
 {7, 0, 0, 0, 0, 0, 0, 0, 8},
 {0, 9, 0, 7, 0, 0, 0, 0, 0}
};

void printboard(int sudokuboard[9][9])

{   
 int i,j,c,d;
 for(i=0,d = 0 ;i<9;++i)
 {
 for(j=0,c =0; j<9;++j)
 {
  cout << sudokuboard[i][j]<< "\t";
  ++c;
  if (c==3 || c==6 || c==9)
  {
   cout << "| \t";
  }
  
 }
 
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 
 ++d;
 if (d==3|| d==6 || d==9)
 {
  cout << " _____________________________";
  cout << endl;
  cout << endl;
  cout << endl;
  cout << endl;
 }
}
}


void definegrid()
{
 int i,j;
 
 for(i=0; i<9; ++i)
 {
  for(j=0; j<9; ++j)
  {
   grid[i][j] = sudokuboard[i][j];
  }
 }
}

int nofreecell(int sudokuboard[9][9])
{
 int i,j;
 int freecell;
 
 for(i=0, freecell=0 ;i<9;++i)
 {
  for(j=0; j<9;++j)
  {
   if(sudokuboard[i][j] ==0)
    ++ freecell;
  }
 }
 return freecell;
}

int checkanswer(int row, int column, int inputanswer)
{
 if(grid[row-1][column-1] == inputanswer)
 {
  sudokuboard[row-1][column-1] = inputanswer;
  cout << "Your Answer is Correct!"<<endl<<endl;
  return 1;
 }
 
 else
 {
  cout << "Your answer is incorrect, Please Try Again"<<endl<<endl;
  return 0;
 }
 
}

int playgame()
{
 int row, column, inputanswer;
 
 cout << "You have "<<nofreecell(sudokuboard)<<"spaces left.";
 
 cout << "Please enter the Row and column number"<<endl;
 cout << "Row: "<<endl;
 cin >> row;
 cout << "Column: "<<endl;
 cin >> column;
 cout << "Enter digit"<<endl;
 cin >> inputanswer;
 
 checkanswer(row, column, inputanswer);
 
 if(nofreecell(sudokuboard) != 0)
 {
  printboard(sudokuboard);
  return 1;
 }
 else
 {
  return 0;
 }
}


bool FindUnassignedLocation(int grid[9][9],
                            int& row, int& col);
 

bool isSafe(int grid[9][9], int row,
            int col, int num);
            
            bool UsedInRow(int grid[9][9], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}
 
bool UsedInCol(int grid[N][N], int col, int num)
{
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}
 
bool UsedInBox(int grid[N][N], int boxStartRow,
               int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                    [col + boxStartCol] ==
                                       num)
                return true;
    return false;
}
            

bool SolveSudoku(int grid[9][9])
{
    int row, col;
 
    // If there is no unassigned location,
    // we are done
    if (!FindUnassignedLocation(grid, row, col))
        // success!
        return true;
 
    // Consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
         
        // Check if looks promising
        if (isSafe(grid, row, col, num))
        {
             
            // Make tentative assignment
            grid[row][col] = num;
 
            // Return, if success
            if (SolveSudoku(grid))
                return true;
 
            // Failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    
    // This triggers backtracking
    return false;
}
 
bool FindUnassignedLocation(int grid[N][N],
                            int& row, int& col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}
bool isSafe(int grid[9][9], int row,int col, int num)
{
    /* Check if 'num' is not already placed in
    current row, current column
    and current 3x3 box */
    return !UsedInRow(grid, row, num)
           && !UsedInCol(grid, col, num)
           && !UsedInBox(grid, row - row % 3,
                         col - col % 3, num)
           && grid[row][col] == 0;
}
    



int main()
{
 int i,j,k,l;
 string gamelevel;
 int startgame,random;


 cout << "Choose game level - Easy/Medium/Hard"<< endl;
 cin >> gamelevel;
 
 srand(time(NULL));
 random = 1+ (rand() % 3);
 
 for(k=0;k<9;++k)
 {
     for(l=0;l<9;++l)
     {
  if(gamelevel == "Easy" && random==1)
  {
   sudokuboard[k][l]=sudokuboardeasy1[k][l];
  }
  if(gamelevel == "Easy" && random==2)
  {
   sudokuboard[k][l]=sudokuboardeasy2[k][l];
  }
  if(gamelevel == "Easy" && random==3)
  {
   sudokuboard[k][l]=sudokuboardeasy3[k][l];
  }
  if(gamelevel == "Medium" && random==1)
  {
   sudokuboard[k][l]=sudokuboardmedium1[k][l];
  }
  if(gamelevel == "Medium" && random==2)
  {
   sudokuboard[k][l]=sudokuboardmedium2[k][l];
  }
  if(gamelevel == "Medium" && random==3)
  {
   sudokuboard[k][l]=sudokuboardmedium3[k][l];
  }
  if(gamelevel == "Hard" && random==1)
  {
   sudokuboard[k][l]=sudokuboardhard1[k][l];
  }
  if(gamelevel == "Hard" && random==2)
  {
   sudokuboard[k][l]=sudokuboardhard2[k][l];
  }
  if(gamelevel == "Hard" && random==3)
  {
   sudokuboard[k][l]=sudokuboardhard3[k][l];
  }
 }
 }
  
  
 definegrid();
 SolveSudoku(grid);
 
 for (i=0; i<9;++i)
 {
  for(j=0;j<9;++j)
  {
   cout << grid[i][j]<< " ";
  }
  cout << endl;
 }
 
 
 cout << "Type <1> to Start the game" << endl;
 cin>> startgame;
 
 if(startgame==1)
 {
  printboard(sudokuboard);
 }
 else
 {
 }
 

 
 while(playgame()==1 && nofreecell(sudokuboard) != 0)
 {
  playgame();
 }
 
 cout << "Congratulations! You have completed the game!";
 
 return 0;
 
}
