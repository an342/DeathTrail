#include <vector>
#include "Encounter.h"
#include "Commands.h"
#include "States.h"
using namespace std;

class Encoutner;

extern int encounterCount;

extern playerstate state;

extern bool debug;
extern bool breakwhile;

extern map <string, commands> command;

extern Encounter currentEnc;
extern vector <Encounter> encList;

extern Player player;