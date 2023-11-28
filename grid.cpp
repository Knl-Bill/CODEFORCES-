class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int moves = 0;
        vector<int> check(grid[0].size());
        for(int i = 0; i < grid[0].size(); i++) {
            int k = i; // rows
            int l = 0; // columns 
            for(int j = 0; j < grid.size(); j++) {
                // Doing the operations on all the 1st column elements
                if(l + 1 < grid[k].size()) {
                    if(k - 1 >= 0 && grid[k-1][l+1] > grid[k][l]) {
                        k = k - 1;
                        l = l + 1;
                        moves++;
                    }
                    else if(grid[k][l+1] > grid[k][l]) {
                        l = l + 1;
                        moves++;
                    }
                    else if(k + 1 < grid.size() && grid[k+1][l+1] > grid[k][l]) {
                        k = k + 1;
                        l = l + 1;
                        moves++;
                    }
                }
            }
            // storing the moves in a vector of size == grid[0].size()
            check.push_back(moves);
            moves = 0;
        }
        moves = 0;
        for(int i : check) {
            // Iterating the check vector to find the max no of moves.
            moves = max(moves, i);
        }
        return moves;
    }
};
