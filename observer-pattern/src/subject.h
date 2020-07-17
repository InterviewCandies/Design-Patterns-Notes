#pragma once 
#include "observer.h"
class Subject {
  public:
    virtual void RegisterObserver(Observer * o) = 0;
    virtual void UnregisterObserver(Observer * o) = 0;
    virtual void NotifyObserver() = 0;
};