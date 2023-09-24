#include "header.h"

using namespace std;
using namespace call;

int main(){
	while (true){
	    int attempts = 0;
		bool playing = true;
		char locationORchoice;
		newClass a;

		string board[8][8];
		int row, col;
		cout << "Your current position on the board (input first row, then column): ";
		cin >> row >> col;
		a.legalMoves(board, row, col);
		
		while (playing){
		    if (attempts > 0){
		        cout << endl;
		        cout << "ERROR: PLEASE ENTER VALID RESPONCE" << endl;
		        cout << endl;
		    }
	        attempts = 1;
	        
			cout << "Remember: enter \"n\" to create a new game, and enter \"q\" to quit" << endl;
			cout << "Please select a number to move to: ";
			
			cin >> locationORchoice;

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
