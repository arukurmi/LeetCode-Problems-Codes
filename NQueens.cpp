// The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.

// N Queens: Example 1

// Given an integer n, return all distinct solutions to the n-queens puzzle.

// Each solution contains a distinct board configuration of the n-queens’ placement, where 'Q' and '.' both indicate a queen and an empty space respectively.

// For example,

// There exist two distinct solutions to the 4-queens puzzle:

// [
//  [".Q..",  // Solution 1
//   "...Q",
//   "Q...",
//   "..Q."],

//  ["..Q.",  // Solution 2
//   "Q...",
//   "...Q",
//   ".Q.."]
// ]

#include<stdio.h>
using namespace std;


vector<vector<string> > Solution::solveNQueens(int n){

    vector<vector<string>> v;
    vector<string> board(n);
    string s(n, '.');

    for(int i=0; i<n; i++){
        board[i] = s;
    }

    vector<int> left(n, 0);
    vector<int> upperdia(2*n-1, 0);
    vector<int> lowerdia(2*n-1, 0);

    solve(left, upperdia, lowerdia, board, v, 0, n);
    
    return v;
}