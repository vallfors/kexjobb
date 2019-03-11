#ifndef STATE_H_
#define STATE_H_

#include "mission.h"

#include<vector>
#include<string>
using namespace std;

namespace state {
  struct robot {
    int pos; // use the corresponding mission to convert to coordinates
    int item; // held item, -1 if none
  };

  struct station {
    int order; // which order from the global queue it's currently handling, -1 if none
    vector<bool> fulfilled; // which items have been fetched
  };

  // describes the state of a mission
  class State {
  private:
  public:
    vector<robot> robots;
    vector<station> stations;

    State();
    State(mission::Mission);
    State(unsigned int encoded); // decode from int
    State(string str); // read from string

    unsigned int encode();
    string toString();
  };
}

#endif
