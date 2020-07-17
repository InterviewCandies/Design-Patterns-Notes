#pragma once 
#include "observer.h"
#include <iostream>

class AverageScoreDisplay : public Observer {
  private:
    int predicted_score_;
    float run_rate_;
  public: 
    void Update(int runs, int wickets, int overs) {
      run_rate_ = (float) runs/overs;
      predicted_score_ = (int) run_rate_ * 54;
    }
    void Display() {
      std::cout << "Average score display: Run rate: " << run_rate_ << " Predicted score: " << predicted_score_<<"\n"; 
    }
};
