#include <iostream>
#include "government.h"

Government * Government:: unique_instance_{nullptr};
std::mutex Government::mutex_;

Government * Government:: GetInstance() {
  if (unique_instance_ == nullptr) {
    // Thread safe -> double checked locking
    std::lock_guard<std::mutex> lock(mutex_);
    if (unique_instance_ == nullptr) {
      unique_instance_ = new Government();
    } 
  }
  return unique_instance_;
}

void Government:: Display() {
  std::cout << "National government";
}