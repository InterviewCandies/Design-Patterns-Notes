#include <iostream>
#include "fighter.h"
#include "lightning_kick.h"
#include "tonardo_kick.h"
#include "long_jump.h"
#include "short_jump.h"
#include "ken.h"
#include "ryu.h"
int main() {

  Ken ken(new LightningKick(), new LongJump());
  ken.Display();
  ken.Kick();
  ken.Jump();
  ken.SetKickStrategy(new TornadoKick());
  ken.SetJumpStrategy(new ShortJump());
  ken.Punch();
  ken.Kick();
  ken.Jump();

  Ryu ryu(new TornadoKick, new ShortJump());
  ryu.Display();
  ryu.Kick();
  ryu.Jump();
  return 0;
}