// Copyright [year] <Copyright Owner>

#include <cstdlib>
#include <iomanip>
#include <iostream>

#include "TicTacToe.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::stoi;

void trigger_player(int player_id, string player_mark) {
  string row_index_to_mark;
  string col_index_to_mark;

  cout << "Graczu " << player_id << ". Twoj ruch - wstaw " << player_mark << "!"
       << endl;
  cout << "Podaj indeks wiersza, gdzie chcesz wstawić znak: " << endl;
  cin >> row_index_to_mark;
  cout << "Podaj indeks kolumny, gdzie chcesz wstawić znak: " << endl;
  cin >> col_index_to_mark;
  cout << "Podałeś indeks [" << row_index_to_mark << ", " << col_index_to_mark
       << "]" << endl;
  add_mark(player_mark, stoi(row_index_to_mark), stoi(col_index_to_mark));
  cout << "Tablica gry:" << endl;
  render_board();
}

int main() {
  bool is_full = false;
  string result = " ";

  cout << "Witaj w grze w kolko i krzyzyk!" << endl;
  cout << "Gracz kolko gra symbolem: O" << endl;
  cout << "Gracz krzyzyk gra symbolem: X" << endl;

  while (!is_full) {
    trigger_player(1, "X");
    result = check_result();
    if (check_result() != " ") {
      cout << "Koniec gry! Wygrywa gracz " << result << "!" << endl;
      break;
    }

    trigger_player(2, "O");
    result = check_result();
    if (result != " ") {
      cout << "Koniec gry! Wygrywa gracz " << result << "!" << endl;
      break;
    }

    is_full = is_board_full();
  }
}
