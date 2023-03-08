
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default Constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
    // Constructor with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Storage
{
public:
    Node *head;

    // Default constructor

    Storage()
    {
        head = NULL;
    }

    /** Create a Node to hold the data, then put it to the head of the list.
     * @param data The data for the new node
     */

    void push(int data)
    {
        Node *new_Node = new Node(data);
        new_Node->next = head;
        head = new_Node;
    }
    /** Remove the head Node and return its data.
     *
     * @param[out] The data (only valid if return true)
     * @return True of there is a node to return
     */

    bool pop(int &data);
    {
        if (head == NULL)
        {
            return false;
        }
        else
        {
            data = head - data;
            Node *temp = head;
            head = head->next;
            delete temp;
            return true;
        }
    }

    /** Return the data from the head Node, without removing it.
     *
     * @param [out] The data (only valid if return true)
     * @return True if text has been returned successfully (there is a node)
     */

    bool peek(int &data)
    {
        if (head != NULL)
        {
            data = head->data;
            return true;
        }
        else
        {
            Node *new_Node = !head;
            data = new_Node->data;
            return false;
        }

        /**
         * Return True if the list is empty, otherwise False
         *
         * @return True if the list is empty, otherwise False
         */

        bool isEmpty()
        {

            if (this->head == NULL)
            {
                return false;
            }
            else
            {
            
            return true;
        }

        /**
         * Swapts the nodes at position i and j.
         *
         * @return Returns true if successful, otherwise false (e.g outside range)
         */

        int main()
        {
            Storage *s = new Storage();
            s->push(1);
            int pop;
            s->pop(pop);
            cout << pop << endl;
            return 0;
        }
