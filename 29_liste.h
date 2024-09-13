#include <iostream>
#include <sstream>
using namespace std;
//----------------------- class declaration -------------------------
class Node {
    friend class SimpleList; 
private:
    int data;
    Node* next;
public:
    Node(int e, Node* n) {
        data = e;
        next = n;
    }
        string toString(){
        stringstream s;
        s << data;
        return s.str();
    }
};

//----------------------- class declaration -------------------------
class SimpleList {
private:
    Node* first;
    Node* last;
public:
    SimpleList() {first = NULL;last = NULL;}
    ~SimpleList();
    void addLast(int data);
    void addFirst(int data);  // TODO
    int removeFirst();
    bool contains(int data); //TODO
    bool isEmpty() {return (first == NULL);}
    string toString();
};

//---------------------- Definition/Implementation of Methods -------
// destructor
SimpleList::~SimpleList(){
    cout << "Destruktoraufruf" << endl;
    while (!isEmpty()){
        cout << "delete " << removeFirst() << " ";
    }
    cout << endl;
}

void SimpleList::addLast(int data) {   
    Node* old_last = last;
    last = new Node(data, NULL);   
    if (old_last == NULL) // empty list?
        first = last;
    else
        old_last->next=last;
}

int SimpleList::removeFirst() {
    if (first==NULL)
        throw "removeFirst from empty SimpleList.";
    int e = first->data;
    Node* old_first = first;
    first = first->next;
    if (first == NULL)
        last = NULL;
    delete old_first;  // Destruktoraufruf
    return e;
}

// returns a "nice" string consisting of all elements
string SimpleList::toString() {
    stringstream s;
    if (first == NULL){
        s << "empty list" << endl;
        return s.str();
    }
    s << " list: [";
    Node* tmp = first;
    while (tmp != NULL){
        s << tmp->toString();
        if (tmp->next == NULL)
            s << "]" << endl;
        else
            s << ", ";
        tmp = tmp->next;
    }
    delete tmp;
    return s.str();    // convert stream s into a string
}
void SimpleList::addFirst(int data) {    // TODO
    Node* new_node = new Node(data, first);
    if(last == NULL){last = new_node;}
    first = new_node;
}
bool SimpleList::contains(int data){ //TODO
    Node* tmp = first;
    while(tmp!=NULL){
        if(tmp->data == data){return true;}
        tmp = tmp->next;
    }
    return false;
}