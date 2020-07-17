#pragma once
#include <mutex>
class Government {
  public:
    static Government* GetInstance();
    Government(Government & other) = delete;
    void operator=(const Government & other) = delete;
      void Display();
  private:
    static Government* unique_instance_;
    static std::mutex mutex_;
    Government(){};
};

#include"government.cpp"