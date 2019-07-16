#include "board.h"

int main(void) {
    // (1)
    struct Board * board = board_init();
    board_show(board);
}
