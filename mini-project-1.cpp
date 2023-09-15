#include <iostream>
#include <string>

using namespace std;

const int ROWS = 8;
const int COLS = 8;

class newClass{

private:
    string arr[ROWS][COLS];

public:
    newClass()
    {

    }

    void legalMoves(string arr[][COLS], int currentRow, int currentCol)
{
	//Initialize array with empty spaces
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			arr[r][c] = "[ ]";
		}
	}

	cout << "Your current position on the board is [" << currentRow << "][" << currentCol << "] \n";
	arr[currentRow][currentCol] = "[X]";

	//Show the current position on the board
	cout << "  0  1  2  3  4  5  6  7\n";
	for (int r = 0; r < ROWS; r++)
	{
		cout << r;
		for (int c = 0; c < COLS; c++)
		{
			cout << arr[r][c];
		}

		cout << endl;
	}

	int row, col;

	cout << "For this position legal moves are:\n";

	// to move up
	row = currentRow - 2; col = currentCol + 1;
	if (row >=0 && row < 8 && col >=0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}

	row = currentRow - 1; col = currentCol + 2;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}

	// to move right
	row = currentRow + 1; col = currentCol + 2;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}
	row = currentRow + 2; col = currentCol + 1;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}

	// to move down
	row = currentRow + 2; col = currentCol - 1;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}
	row = currentRow + 1; col = currentCol - 2;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}

	// to move left
	row = currentRow - 1; col = currentCol - 2;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}
	row = currentRow - 2; col = currentCol - 1;
	if (row >= 0 && row < 8 && col >= 0 && col < 8)
	{
		cout << "board[" << row << "][" << col << "] or \n";
		arr[row][col] = "[L]";
	}

	// Show the board with all legal moves from the current position
	// Legal moves will be indicated as 'L'
	cout << "  0  1  2  3  4  5  6  7\n";
	for (int r = 0; r < ROWS; r++)
	{
		cout << r;
		for (int c = 0; c < COLS; c++)
		{
			cout << arr[r][c];
		}

		cout << endl;
	}
}
};

int main()
{
   newClass a;

   string board[8][8];
   int row, col;
   cout << "Your current position on the board (input first row, then column): ";
   cin >> row >> col;
   a.legalMoves(board, row, col);
   return 0;
}
