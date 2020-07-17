#pragma once 
#include "subject.h"
#include "observer.h"
#include <vector>
using namespace std;
class CriketData : public Subject {
  private:
    int runs_;
    int wickets_;
    float overs_;
    vector<Observer *> observers_;
  public:
    void RegisterObserver(Observer * o);
    void UnregisterObserver(Observer * o);
    void NotifyObserver();
    int GetLastestRuns();
    int GetLastestWickets();
    int GetLastestOvers();
    void DataChanged();
};

#include "criket_data.cpp"