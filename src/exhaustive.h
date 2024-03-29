#ifndef EXHAUSTIVE_H_
#define EXHAUSTIVE_H_

#include "algorithm.h"

namespace algorithm {

class Exhaustive : public Algorithm {
public:
  void makeMove();
  Exhaustive(Situation* s);
  string name();
private:
  vector<state::State> states;
  int curState = 0;
  void calculate();
  vector<int> nextStates(state::State state);
};

}
#endif