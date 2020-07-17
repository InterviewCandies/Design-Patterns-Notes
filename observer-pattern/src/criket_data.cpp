#pragma once 
#include "criket_data.h"
#include <algorithm>

void CriketData::RegisterObserver(Observer * o) {
  observers_.push_back(o);
} 

void CriketData::UnregisterObserver(Observer * o) {
  auto pos = find(observers_.begin(), observers_.end(), o);
  observers_.erase(pos);  
}

void CriketData::NotifyObserver() {
  for (auto observer : observers_) 
    observer->Update(runs_, wickets_, overs_);
}

int CriketData::GetLastestRuns() {
  return (int) rand() % 100;
}

int CriketData::GetLastestWickets() {
  return (int) rand() % 100;
}

int CriketData::GetLastestOvers() {
  return (int) rand() % 100;
}

void CriketData::DataChanged() {
  runs_ = GetLastestRuns();
  wickets_ = GetLastestWickets();
  overs_ = GetLastestOvers();
  NotifyObserver();
}
