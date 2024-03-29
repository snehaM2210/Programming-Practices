// Next larger
// Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
// Note: Return NULL if no node is present with the value greater than n.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.
// The following line contains an integer, that denotes the value of n.
// Output format :
// The first and only line of output contains data of the node, whose data is just greater than n.
// Constraints:
// Time Limit: 1 sec
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 18
// Sample Output 1 :
// 20
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 21
// Sample Output 2:
// 30

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

#include <climits>
TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
    queue<TreeNode<int> *> q;
    q.push(root);
    TreeNode<int> *ans = root;
    int diff = INT_MAX;

    while (q.size() != 0)
    {
        TreeNode<int> *front = q.front();
        q.pop();
        if (front->data - x < diff && front->data > x)
        {
            ans = front;
            diff = front->data - x;
        }
        for (int i = 0; i < front->children.size(); i++)
        {
            q.push(front->children[i]);
        }
    }
    if (root == ans && root->children.size() != 0)
    {
        return NULL;
    }
    return ans;
}

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    int x;
    cin >> x;
    TreeNode<int> *ans = getNextLargerElement(root, x);

    if (ans != NULL)
    {
        cout << ans->data;
    }
}