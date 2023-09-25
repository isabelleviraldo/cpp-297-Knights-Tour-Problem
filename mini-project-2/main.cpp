#include "header.h"

using namespace std;
using namespace call;

int main(){
    //loops until user quits by entering "q"
    while (true){
	int attempts = 0;
	bool playing = true;
	char locationORchoice;
	newClass a;
	string board[8][8];
	int row, col;

	//start up the game
	cout << "Your current position on the board (input first row, then column): ";
	cin >> row >> col;
	a.legalMoves(board, row, col);

	//loops for this one game getting location after location
	while (playing){
	    //if not a valid responce, then say so
	    if (attempts > 0){
		cout << endl;
		cout << "ERROR: PLEASE ENTER VALID RESPONCE" << endl;
		cout << endl;
	    }
	    attempts = 1;

	    //get location or choice
	    cout << "Remember: enter \"n\" to create a new game, and enter \"q\" to quit" << endl;
	    cout << "Please select a number to move to: ";
	    cin >> locationORchoice;

	    //if wanting a new game, exit while(playing) loop
	    //if wanting to quit, return 0 to tell main() function its over
	    //if entered legal number, go to that number via legalmoves() function
	    //else loop to get proper responce from user
	    if (locationORchoice == 'n'){
		cout << endl;
		playing = false;
		attempts = 0;
	    } else if (locationORchoice == 'q'){
		cout << endl;
		cout << "Thank you for playing!" << endl;
		return 0;
	    } else if ((locationORchoice - '0') > 0 && (locationORchoice - '0') < 9){
		if (a.getNum() <= (locationORchoice - '0')){
		    //do nothing
	        } else {
		    a.legalMoves(board, a.getRow((locationORchoice - '0')), a.getCol((locationORchoice - '0')));
		    attempts = 0;
		}
	    }
	}
    }
   return 0;
}
