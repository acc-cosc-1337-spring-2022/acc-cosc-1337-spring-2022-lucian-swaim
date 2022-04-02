//h
#include <iostream>
using std::cout;

#include <string>
#include <vector>


//Header Guards
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player()const{return player;}
    void display_board()const;

private: 
    std::string player;
    std::vector<std::string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
};

#endif