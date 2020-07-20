#pragma once 
#include <string>
class Pizza {
  public:
    virtual std::string GetDescription() = 0;
    virtual int GetCost() = 0;
};