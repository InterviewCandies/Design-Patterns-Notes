#include "observer.h"
#include<iostream>

class CurrentScore : public Observer {
  private: 
    int runs_;
    int wickets_;
    int overs_;
  public:
    void Update(int runs, int wickets, int overs) {
      runs_ = runs;
      wickets_ = wickets;
      overs_ = overs;
    };
    void Display() {
      std::cout << "Current score: Runs: " << runs_ << " Wickets: " << wickets_ << " Overs: " << overs_ << "\n";
    } 
};