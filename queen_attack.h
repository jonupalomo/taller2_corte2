#pragma once

#include <utility>
#include <stdexcept>
using namespace std;
namespace queen_attack {

class chess_board {
public:
    chess_board();
    chess_board(pair<int, int> white, pair<int, int> black);

    // Métodos para consultar las posiciones de las reinas
    pair<int, int> white() const;
    pair<int, int> black() const;

    // Determina si las reinas se pueden atacar
    bool can_attack() const;

private:
    pair<int, int> white_;
    pair<int, int> black_;

    // Función auxiliar para validar que una coordenada esté dentro del tablero [0, 7]
    static bool is_valid_position(const pair<int, int>& pos);
};

} // namespace queen_attack
