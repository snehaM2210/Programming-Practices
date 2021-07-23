#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack
{
    // Define the data members
    Node *head;
    int size; //No. of elements present in stack

public:
    Stack()
    {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        /*if(head==NULL){
            return True;
        }
        else{
            return False;
        }*/
        return head == 0;
    }

    void push(int element)
    {
        // Implement the push() function
        Node *newNode = new Node(element);
        if (newNode == NULL)
        {
            //cout<<"Stack full"<<endl;
            return;
        }
        else
        {
            if (head == NULL)
            {
                newNode->data = element;
                newNode->next = NULL;
                head = newNode;
            }
            else
            {
                newNode->data = element;
                newNode->next = head;
                head = newNode;
            }
            size++;
        }
    }

    int pop()
    {
        // Implement the pop() function
        Node *temp = head;
        int ans;
        if (isEmpty())
        {
            //cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
        {
            ans = head->data;
            head = head->next;
            free(temp);
            size--;
        }
        return ans;
    }

    int top()
    {
        // Implement the top() function
        if (isEmpty())
        {
            //cout<<"Stack is empty"<<endl;
            return -1;
        }

        return head->data;
    }
};

/*-----------------------Using template-----------------------------

template<typename T>
class Stack{
    Node<T> *head;
    int size; //no. of elements present in stack

    public:

    Stack(){
        head=NULL;
        size=0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void push(T element){
        Node<T> *newNode = new Node<T>(element);
        newNode->next=head;
        head=newNode;
        size++;
    }

    T pop(){
        if(isEmpty()){
            return 0;
        }
        T ans=head->data;
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
}    
-----------------------------------------------------------*/

int main()
{
    Stack st;
    //For using template,we should mention here datatype, For e.g.
    //Stack<int> st;

    int q;
    cin >> q;

    while (q--)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            st.push(input);
            break;
        case 2:
            cout << st.pop() << "\n";
            break;
        case 3:
            cout << st.top() << "\n";
            break;
        case 4:
            cout << st.getSize() << "\n";
            break;
        default:
            cout << ((st.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}