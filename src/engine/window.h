#ifndef WINDOW_H_
#define WINDOW_H_

#include "../game.h"

int window_init(GLFWwindow **, char *, unsigned int, unsigned int);
int window_startgame(game_t *, GLFWwindow *);

#endif