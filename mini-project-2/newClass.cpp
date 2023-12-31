#include "header.h"

using namespace std;
using namespace call;

void newClass::legalMoves(string arr[][COLS], int currentRow, int currentCol){
    //initial spot to move to
    number = 1;

    //Initialize array with empty spaces
    for (int r = 0; r < ROWS; r++){
	for (int c = 0; c < COLS; c++){
	    arr[r][c] = "[ ]";
	}
    }

    cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "] \n";
    arr[currentRow][currentCol] = "[X]";
	
    //Show the current position on the board
    for (int r = 0; r < ROWS; r++){
	cout << "  " << r;
    }
    cout << endl;
    for (int r = 0; r < ROWS; r++){
	cout << r;
	for (int c = 0; c < COLS; c++){
   	    cout << arr[r][c];
	}
	cout << endl;
    }

    int row, col;

    cout << "For this position legal moves are:\n";

    // to move up
    row = currentRow - 2; col = currentCol + 1;
    //if option within bounds
    if (row >=0 && row < 8 && col >=0 && col < 8){
	//print option
	cout << "board[" << row << "][" << col << "] or \n";
	//saving number to grid at location
	arr[row][col] = '[' + to_string(number) + ']';
        //saving location to an array
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	//adjusting the current number added
	number++;
    }
    row = currentRow - 1; col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }

    // to move right
    row = currentRow + 1; col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }
    row = currentRow + 2; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }

    // to move down
    row = currentRow + 2; col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }
    row = currentRow + 1; col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }

    // to move left
    row = currentRow - 1; col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }
    row = currentRow - 2; col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8){
	cout << "board[" << row << "][" << col << "] or \n";
	arr[row][col] = '[' + to_string(number) + ']';
	rowcol[number - 1][0] = row;
	rowcol[number - 1][1] = col;
	number++;
    }

    // Show the board with all legal moves from the current position
    // Legal moves will be indicated as a number
    for (int r = 0; r < ROWS; r++){
	cout << "  " << r;
    }
    cout << endl;

    for (int r = 0; r < ROWS; r++){
	cout << r;
	for (int c = 0; c < COLS; c++){
	    cout << arr[r][c];
	}
	cout << endl;
    }
}

//return row of number selected
int newClass::getRow(int place){
    return {rowcol[place - 1][0]};
}

//return col of number selected
int newClass::getCol(int place){
    return {rowcol[place - 1][1]};
}

//get total number of options available
int newClass::getNum(){
    return {number};
}
