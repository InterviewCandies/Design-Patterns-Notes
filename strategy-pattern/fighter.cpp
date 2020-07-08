#include <iostream>
#include "fighter.h"
Fighter::Fighter(KickStrategy * k, JumpStrategy * j) : kick_strategy_(k), jump_strategy_(j) {
  
} 
void Fighter::Punch() {
  std:: cout << "I can punch\n";
}
void Fighter::Roll() {
  std:: cout << "I can roll\n";
}
void Fighter::Kick() {
  kick_strategy_->Kick();
}
void Fighter::Jump() {
  jump_strategy_->Jump();
}
void Fighter ::SetKickStrategy(KickStrategy * k) {
  kick_strategy_ = k;
} 
void Fighter::SetJumpStrategy(JumpStrategy * j) {
  jump_strategy_ = j;
}