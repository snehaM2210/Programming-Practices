// Pair Sum Binary Tree
// Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
// Note:
// 1. Assume the given binary tree contains all unique elements.
// 2. In a pair, print the smaller element first. Order of different pairs doesn't matter.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have a left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.
// The following line of input contains an integer, that denotes the value of S.
// Output Format :
// Print each pair in a new line, as described in the task.
// Constraints:
// Time Limit: 1 second
// Sample Input 1:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// 15
// Sample Output 1:
// 5 10
// 6 9

#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include <vector>
#include <algorithm>
void pairSumHelper(BinaryTreeNode<int> *root, vector<int> &ans)
{
    if (root == NULL)
        return;

    pairSumHelper(root->left, ans);
    ans.push_back(root->data);
    pairSumHelper(root->right, ans);
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
    vector<int> ans;
    pairSumHelper(root, ans);
    sort(ans.begin(), ans.end());
    int i = 0;
    int j = ans.size() - 1;
    while (i < j)
    {
        if (ans[i] + ans[j] > sum)
        {
            j--;
        }
        else if (ans[i] + ans[j] < sum)
        {
            i++;
        }
        else
        {
            cout << ans[i] << " " << ans[j] << endl;
            i++;
            j--;
        }
    }
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}