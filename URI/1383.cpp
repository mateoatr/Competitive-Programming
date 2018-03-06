#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, c = 1; scanf("%d", &n);

  while (n--) {
    int sudoku[9][9];
    
    set<int> columns[9];
    set<int> rows[9];
    set<int> squares[9];
    
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
	scanf("%d", &sudoku[i][j]);
	columns[j].insert(sudoku[i][j]);
	rows[i].insert(sudoku[i][j]);
	// squares[i]
	if (i < 3) {
	  if (j < 3) { squares[0].insert(sudoku[i][j]); }
	  else if (j < 6) { squares[1].insert(sudoku[i][j]); }
	  else { squares[2].insert(sudoku[i][j]); }
	}
	else if (i < 6) {
	  if (j < 3) { squares[3].insert(sudoku[i][j]); }
	  else if (j < 6) { squares[4].insert(sudoku[i][j]); }
	  else { squares[5].insert(sudoku[i][j]); }
	}
	else {
	  if (j < 3) { squares[6].insert(sudoku[i][j]); }
	  else if (j < 6) { squares[7].insert(sudoku[i][j]); }
	  else { squares[8].insert(sudoku[i][j]); }
	}
      }
    }

    bool b = false;
    for (set<int> s : columns) {
      if ((int)s.size() != 9) {
	b = true; break;
      }
    }

    for (set<int> s : rows) {
      if ((int)s.size() != 9) {
	b = true; break;
      }
    }

    for (set<int> s : squares) {
      if ((int)s.size() != 9) {
	b = true; break;
      }
    }

    printf("Instancia %d\n", c++);
    b ? printf("NAO\n\n") : printf("SIM\n\n");
  }

  return 0;
}
