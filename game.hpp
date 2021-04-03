#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <SDL2/SDL.h>
#include "well.hpp"
#include "tetromino.hpp"

class Game
{
public:
  Game();
  ~Game();
  bool tick();
private:
  Game(const Game &);
  Game &operator=(const Game &);
  SDL_Window *window_;
  SDL_Renderer *renderer_;
  Well well_;
  Tetromino tetromino_;
  uint32_t moveTime_;
  void check(const Tetromino &);
};

#endif // GAME_HPP_INCLUDED
