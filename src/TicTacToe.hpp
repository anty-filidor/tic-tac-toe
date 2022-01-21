// Copyright [year] <Copyright Owner>

#ifndef SRC_TICTACTOE_HPP_
#define SRC_TICTACTOE_HPP_

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string board[3][3] = {  // NOLINT
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "}};
int board_rows_num = 3;
int board_cols_num = 3;

string player_1_mark = "O";  // NOLINT
string player_2_mark = "X";  // NOLINT

void add_mark(string mark, int row_coord, int col_coord);

string check_result();

bool is_board_full();

void render_board();

#endif  // SRC_TICTACTOE_HPP_
