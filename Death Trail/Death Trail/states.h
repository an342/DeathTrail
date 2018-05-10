
using namespace std;

enum playerstate
{
	NONE,
	MAIN_MENU,
	LOADING,
	OUT_OF_COMBAT,
	IN_COMBAT,
	DEAD,
	QUIT
};

void MainMenu(int input);

void OOC(int input);

void Loading();

void INC(int input);

void Dead(int input);

