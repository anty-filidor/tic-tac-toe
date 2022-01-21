// Copyright [year] <Copyright Owner>

#include "TicTacToe.hpp"

void add_mark(string mark, int row_coord, int col_coord) {
  if (3 > row_coord > 0 && 3 > col_coord > 0) {
    if (board[row_coord][col_coord] == " ") {
      board[row_coord][col_coord] = mark;
      return;
    }
  }
  cout << "Niepoprawne wspolrzedne lub podane pole jest zajete!" << endl;
}

string check_result() {
  // check if result exists in row
  for (int i = 0; i < 3; i++) {
    if ((board[i][0] == board[i][1]) && (board[i][0] == board[i][2]) &&
        board[i][0] != " ") {
      cout << board[0][0] << board[i][1] << board[i][0] << board[i][2];
      return board[i][0] == player_1_mark ? player_1_mark : player_2_mark;
    }
  }

  // check if result exists in column
  for (int i = 0; i < 3; i++) {
    if ((board[0][i] == board[1][i]) && (board[0][i] == board[2][i]) &&
        board[0][i] != " ") {
      return board[0][i] == player_1_mark ? player_1_mark : player_2_mark;
    }
  }

  // check if result exists in diagonal
  if ((((board[0][0] == board[1][1]) && (board[0][0] == board[2][2])) ||
       ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]))) &&
      board[1][1] != " ") {
    return board[0][0] == player_1_mark ? player_1_mark : player_2_mark;
  }

  // otherwise there is no result, so return " "
  return " ";
}

bool is_board_full() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] != " ") {
        return true;
      }
    }
  }

  return false;
}

void render_board() {
  for (int i = 0; i < 3; i++) {
    cout << "| ";
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " ";
    }
    cout << "|" << endl;
  }
}
