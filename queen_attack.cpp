#include "queen_attack.h"
#include <cmath>
#include <stdexcept>
using namespace std;
namespace queen_attack {

bool chess_board::is_valid_position(const pair<int, int>& pos) {
    return pos.first >= 0 && pos.first < 8 && pos.second >= 0 && pos.second < 8;
}

// Por defecto coloca la reina blanca en (0, 3) y la negra en (7, 3)
chess_board::chess_board()
    : white_{0, 3}, black_{7, 3} {}

chess_board::chess_board(pair<int, int> white, pair<int, int> black)
    : white_{white}, black_{black} {
    // 1. Validar que ambas piezas estén dentro de los límites del tablero 8x8
    if (!is_valid_position(white) || !is_valid_position(black)) {
        throw domain_error("Las posiciones deben estar dentro del tablero (0 a 7).");
    }

    // 2. Validar que no ocupen la misma casilla
    if (white == black) {
        throw domain_error("Las reinas no pueden ocupar la misma casilla.");
    }
}

pair<int, int> chess_board::white() const {
    return white_;
}

pair<int, int> chess_board::black() const {
    return black_;
}

bool chess_board::can_attack() const {
    // Misma fila
    if (white_.first == black_.first) {
        return true;
    }

    // Misma columna
    if (white_.second == black_.second) {
        return true;
    }

    // Misma diagonal: la diferencia absoluta de filas es igual a la de columnas
    if (abs(white_.first - black_.first) == abs(white_.second - black_.second)) {
        return true;
    }

    return false;
}

} 
