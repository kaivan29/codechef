#include <cstdlib>
#include <iostream>

using namespace std;

class GAME
{
	private:
		int A [3] [3];
		int r, c;
	public:
		GAME()
		{
			int r = 0; int c = 0;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					A[i][j] = 0;
				}
			}
		}

/*		GAME(int B [] [], int row, int column)
		{
			r = row;
			c = column;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					A[i][j] = B[i][j];
				}
			}
		}
*/
		int take_input(int value)
		{
			cout << "\nEnter the row:";
			cin >> r;
			cout << "\nEnter the column:";
			cin >> c;
			make_box((r-1), (c-1), value);
			return 0;
		}

		int make_box(int i, int j, int ob)
		{
			if (A[i][j] != 0)
			{
				cout << "Already a value in this place, enter again";
				take_input(ob);
			}
			else
			{
				A[i][j] = ob;
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						if (A[i][j] == -1)
							cout <<"O"<<" || ";
						else if (A[i][j] == 1)
							cout << "X" << " || ";
						else
							cout << A[i][j] << " || ";
					}
					cout << "\n";
				}
			}
				return 0;
		}
		bool isWin(int mark) { // is mark the winner?
			int win = 3 * mark; // +3 for X and -3 for O
			return ((A[0][0] + A[0][1] + A[0][2] == win) // row 0
				|| (A[1][0] + A[1][1] + A[1][2] == win) // row 1
				|| (A[2][0] + A[2][1] + A[2][2] == win) // row 2
				|| (A[0][0] + A[1][0] + A[2][0] == win) // column 0
				|| (A[0][1] + A[1][1] + A[2][1] == win) // column 1
				|| (A[0][2] + A[1][2] + A[2][2] == win) // column 2
				|| (A[0][0] + A[1][1] + A[2][2] == win) // diagonal
				|| (A[2][0] + A[1][1] + A[0][2] == win)); // diagonal
		}
};