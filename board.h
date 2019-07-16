#ifndef BOARD_H_
#define BOARD_H_

struct Board;

struct Board * board_init(void);
void board_show(const struct Board * board);

#endif /* BOARD_H_ */

