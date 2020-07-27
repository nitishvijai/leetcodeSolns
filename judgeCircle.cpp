// Robot Return to Origin
// Written by Nitish Vijai on 7/27/2020
// Runtime: 24ms, faster than 96.27% of all C++ online solutions
// Memory: 8 MB, less than 78.74% of all C++ online solutions

class Solution {
public:
	bool judgeCircle(string moves) {
		int x = 0;
		int y = 0;
		for (int i = 0; i < moves.size(); ++i) {
			if (moves[i] == 'U') {
				++y;
			}
			else if (moves[i] == 'D') {
				--y;
			}
			else if (moves[i] == 'L') {
				--x;
			}
			else if (moves[i] == 'R') {
				++x;
			}
		}

		if (x == 0 && y == 0) {
			return true;
		}
		else {
			return false;
		}
	}
}

