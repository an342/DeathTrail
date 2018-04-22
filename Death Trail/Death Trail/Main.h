using namespace std;

enum playerstate
{
	NONE,
	MAIN_MENU,
	LOADING,
	OUT_OF_COMBAT,
	IN_COMBAT,
	DEAD
};

extern playerstate state;
extern bool debug;