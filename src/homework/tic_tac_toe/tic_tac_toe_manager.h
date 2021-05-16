#ifndef MANAGER
#define MANAGER

#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>
using std::unique_ptr;

class TicTacToeManager 

{
    friend std::ostream& operator<<(std::ostream& output, const TicTacToeManager& manager);

    public:
        TicTacToeManager() = default;
        TicTacToeManager(TicTacToeData& data);
        void save_game(unique_ptr<TicTacToe>& b);
        void get_winner_total(int& x, int& o, int& t);
        ~TicTacToeManager();

    private:
        vector<unique_ptr<TicTacToe>> games;
        TicTacToeData data;
        int x_wins = 0;
        int o_wins = 0;
        int ties = 0;
        void update_winner_count(string winner);

};

#endif
