// Copyright 2021 Dumarevskaya
#ifndef INCLUDE_PREY_H_
#define INCLUDE_PREY_H_

#include "Object.h"
#include "common.h"
#include "Cell.h"

class Prey : public Object {
 protected:
  size_t lifeTime;
  size_t timeToReproduce;
 public:
  Prey(Cell* cell) : Object{ cell } {
    lifeTime = PREY_LIFE;
    timeToReproduce = PREY_BREED;
  }
  ~Prey() {}
  void live() override;
  virtual void move();
  virtual void reproduce();
  Cell* getCell();
};

#endif  // INCLUDE_PREY_H_
