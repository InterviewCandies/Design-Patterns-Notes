#pragma once 
#include "kick_strategy.h"
#include "jump_strategy.h"
class Fighter {
  public:
    Fighter(KickStrategy *, JumpStrategy *);
    void Punch();
    void Roll();
    void Kick();
    void Jump();
    void SetKickStrategy(KickStrategy *);
    void SetJumpStrategy(JumpStrategy *);
  private:
    KickStrategy * kick_strategy_;
    JumpStrategy * jump_strategy_;
};

#include "fighter.cpp"
