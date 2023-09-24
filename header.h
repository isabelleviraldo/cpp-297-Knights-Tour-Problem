#include <iostream>
#include <string>

using namespace std;

const int ROWS = 8;
const int COLS = 8;

//initialising classes
namespace call {
    class newClass{
        private:
    		string arr[ROWS][COLS];
    		int number;
    		int rowcol[8][2];
    
    	public:
    		newClass(){}
    
    		void legalMoves(string arr[][COLS], int currentRow, int currentCol);
    		int getRow(int place);
    		int getCol(int place);
    		int getNum();
        };
}
