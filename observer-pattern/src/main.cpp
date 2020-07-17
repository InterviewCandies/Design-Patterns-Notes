#include "criket_data.h"
#include "current_score.h"
#include "average_score_display.h"

int main() {
  AverageScoreDisplay * averageScore = new AverageScoreDisplay();
  CurrentScore * currentScore = new CurrentScore();
  CriketData * criketData = new CriketData();
  criketData->RegisterObserver(averageScore);
  criketData->RegisterObserver(currentScore);
  
  std::cout << "First time: \n";
  currentScore->Display();
  averageScore->Display();
  
  criketData->DataChanged();
  
  std::cout << "1st Data Changed: \n";
  currentScore->Display();
  averageScore->Display();
  
  criketData->UnregisterObserver(averageScore);
  
  criketData->DataChanged();
  
  std:: cout << "Unregister observer averageScore and 2nd Data changed: \n";
  currentScore->Display();
  averageScore->Display();
  
  criketData->DataChanged();

  std:: cout << "Unregister observer averageScore and 3rd Data changed: \n";
  currentScore->Display();
  averageScore->Display();

  criketData->RegisterObserver(averageScore);
  criketData->DataChanged();

  std:: cout << "Register observer averageScore and Data changed: \n";
  currentScore->Display();
  averageScore->Display();
}