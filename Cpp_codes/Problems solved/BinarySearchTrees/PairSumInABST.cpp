// Pair sum in a BST
// Given a binary search tree and an integer S, find pair of nodes in the BST which sum to S. You can use extra space of the order of O(log n).
// Note:
// 1. Assume BST contains all unique elements.
// 2. In a pair, print the smaller element first.
// Input Format :
// The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.
// The following line of input contains an integer, that denotes the value of S.
// Output format:
// You have to print each pair in a different line (pair elements separated by space). The order of different pairs, to be printed, does not matter.
// Constraints:
// Time Limit: 1 second
// Sample Input 1:
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// 12
// Sample Output 1:
// 2 10
// 5 7

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

    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

using namespace std;
#include <stack>
void printNodesSumToS(BinaryTreeNode<int> *root, int s)
{
    if (root == NULL)
        return;

    stack<BinaryTreeNode<int> *> s1, s2;
    BinaryTreeNode<int> *a = root;
    BinaryTreeNode<int> *b = root;

    while (!s1.size() == 0 || !s2.size() == 0 || a || b)
    {
        if (a || b)
        {
            if (a)
            {
                s1.push(a);
                a = a->left;
            }
            if (b)
            {
                s2.push(b);
                b = b->right;
            }
        }
        else
        {
            int p = s1.top()->data;
            int q = s2.top()->data;
            if (s1.top() == s2.top())
                break;

            if (p + q == s)
            {
                cout << min(p, q) << ' ' << max(p, q) << endl;
            }
            if (p + q > s)
            {
                b = s2.top();
                s2.pop();
                b = b->left;
            }
            else
            {
                a = s1.top();
                s1.pop();
                a = a->right;
            }
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

void printLevelATNewLine(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL)
        {
            if (q.empty())
            {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL)
        {
            q.push(first->left);
        }
        if (first->right != NULL)
        {
            q.push(first->right);
        }
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int s;
    cin >> s;
    printNodesSumToS(root, s);
    delete root;
}