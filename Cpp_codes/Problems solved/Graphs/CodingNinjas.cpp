// Coding Ninjas
// Given a NxM matrix containing Uppercase English Alphabets only. Your task is to tell if there is a path in the given matrix which makes the sentence “CODINGNINJA” .
// There is a path from any cell to all its neighbouring cells. For a particular cell, neighbouring cells are those cells that share an edge or a corner with the cell.
// Input Format :
// The first line of input contains two space separated integers N and M, where N is number of rows and M is the number of columns in the matrix.
// Each of the following N lines contain M characters. Please note that characters are not space separated.
// Output Format :
// Print 1 if there is a path which makes the sentence “CODINGNINJA” else print 0.
// Constraints :
// 1 <= N <= 1000
// 1 <= M <= 1000
// Time Limit: 1 second
// Sample Input 1:
// 2 11
// CXDXNXNXNXA
// XOXIXGXIXJX
// Sample Output 1:
// 1

#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<char>> &board, int n, int m, int curr_n, int curr_m, int **visit, int curr_elem)
{
    if (curr_elem >= 11)
    { //codingninja=11 letters
        return 1;
    }
    visit[curr_n][curr_m] = 1;
    string cn = "CODINGNINJA";
    int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0, ans6 = 0, ans7 = 0, ans8 = 0;
    while (1)
    {
        //check above
        if (curr_n - 1 >= 0)
        {
            if (board[curr_n - 1][curr_m] == cn[curr_elem] && visit[curr_n - 1][curr_m] == 0)
            {
                ans1 = dfs(board, n, m, curr_n - 1, curr_m, visit, curr_elem + 1);
            }
        }
        if (ans1 == 1)
            break;

        // check below
        if (curr_n + 1 < n)
        {
            if (board[curr_n + 1][curr_m] == cn[curr_elem] && visit[curr_n + 1][curr_m] == 0)
            {
                ans2 = dfs(board, n, m, curr_n + 1, curr_m, visit, curr_elem + 1);
            }
        }
        if (ans2 == 1)
            break;

        // check right
        if (curr_m + 1 < m)
        {
            if (board[curr_n][curr_m + 1] == cn[curr_elem] && visit[curr_n][curr_m + 1] == 0)
            {
                ans3 = dfs(board, n, m, curr_n, curr_m + 1, visit, curr_elem + 1);
            }
        }
        if (ans3 == 1)
            break;

        // check left
        if (curr_m - 1 >= 0)
        {
            if (board[curr_n][curr_m - 1] == cn[curr_elem] && visit[curr_n][curr_m - 1] == 0)
            {
                ans4 = dfs(board, n, m, curr_n, curr_m - 1, visit, curr_elem + 1);
            }
        }
        if (ans4 == 1)
            break;

        //to check diagonals
        // top right
        if (curr_m + 1 < m && curr_n - 1 >= 0)
        {
            if (board[curr_n - 1][curr_m + 1] == cn[curr_elem] && visit[curr_n - 1][curr_m + 1] == 0)
            {
                ans5 = dfs(board, n, m, curr_n - 1, curr_m + 1, visit, curr_elem + 1);
            }
        }
        if (ans5 == 1)
            break;

        // top left
        if (curr_m - 1 >= 0 && curr_n - 1 >= 0)
        {
            if (board[curr_n - 1][curr_m - 1] == cn[curr_elem] && visit[curr_n - 1][curr_m - 1] == 0)
            {
                ans6 = dfs(board, n, m, curr_n - 1, curr_m - 1, visit, curr_elem + 1);
            }
        }
        if (ans6 == 1)
            break;

        // bottom right
        if (curr_m + 1 < m && curr_n + 1 < n)
        {
            if (board[curr_n + 1][curr_m + 1] == cn[curr_elem] && visit[curr_n + 1][curr_m + 1] == 0)
            {
                ans7 = dfs(board, n, m, curr_n + 1, curr_m + 1, visit, curr_elem + 1);
            }
        }
        if (ans7 == 1)
            break;

        // bottom left
        if (curr_m - 1 >= 0 && curr_n + 1 < n)
        {
            if (board[curr_n + 1][curr_m - 1] == cn[curr_elem] && visit[curr_n + 1][curr_m - 1] == 0)
            {
                ans8 = dfs(board, n, m, curr_n + 1, curr_m - 1, visit, curr_elem + 1);
            }
        }
        break;
    }
    visit[curr_n][curr_m] = 0;
    if (ans1 == 1 || ans2 == 1 || ans3 == 1 || ans4 == 1 || ans5 == 1 || ans6 == 1 || ans7 == 1 || ans8 == 1)
    {
        return 1;
    }
    return 0;
}

bool hasPath(vector<vector<char>> &board, int n, int m)
{
    int **visit = new int *[n];
    for (int i = 0; i < n; i++)
    {
        visit[i] = new int[m]{};
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'C')
            {
                visit[i][j] = 1;
                int ans = dfs(board, n, m, i, j, visit, 1);
                if (ans == 1)
                {
                    return 1;
                }
                visit[i][j] = 0;
            }
        }
    }
    return 0;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board[i][j];
        }
    }

    cout << (hasPath(board, n, m) ? 1 : 0);
}