#include <iostream>
using namespace std;


struct Node
{
public :
    int noMhs;
    Node *next;
    Node *prev;
};


class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;
    }
};