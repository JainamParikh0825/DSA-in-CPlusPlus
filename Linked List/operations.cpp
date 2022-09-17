#include<iostream>

using namespace std;

class Node{
    int data;
    Node *next;

    public:
        Node(){
            this->data = 0;
            this->next = NULL;
        }

        void setData(int data){
            this->data = data;
        }

        int getData(){
            return this->data;
        }

        void setNext(Node *next){
            this->next = next;
        }

        Node* getNext(){
            return this->next;
        }
};

class LinkedList{
    Node *head;
    int size;

    public:
        LinkedList(){
            head = NULL;
        }

        void insertAtBeginning(int data){
            Node *n = new Node();
            n->setData(data);
            this->size++;

            if(head == NULL){
                head = n;
                return;
            }

            n->setNext(head);
            head = n;
        }

        void insertAtEnd(int data){
            Node *n = new Node();
            n->setData(data);
            this->size++;

            if(head == NULL){
                head = n;
                return;
            }

            Node *temp = head;
            while(temp->getNext() != NULL){
                temp = temp->getNext();
            }

            temp->setNext(n);
        }

        void insert(int position, int data){
            if(position <= this->size + 1){
                Node *n = new Node();
                n->setData(data);
                this->size++;

                if(head == NULL){
                    head = n;
                    return;
                } else if(position == 1){
                    n->setNext(head);
                    head = n;
                    return;
                }

                Node *temp = head;
                for (int i = 0; i < position - 2; ++i){
                    temp = temp->getNext();
                }
                n->setNext(temp->getNext());
                temp->setNext(n);
                return;
            }

            cout << "Invalid position. Please insert according to the size." << endl;
        }

        int deleteAtBeginning(){
            if(head == NULL){
                cout << "Cannot perform delete operation. The Linked List is empty." << endl;
                return -1;
            }

            int deletedData = head->getData();
            head = head->getNext();
            this->size--;

            return deletedData;
        }

        int deleteAtEnd(){
            if(head == NULL){
                cout << "Cannot perform delete operation. The Linked List is empty." << endl;
                return -1;
            }
            int deletedData;
            Node *temp = head;
            this->size--;

            while(temp->getNext() != NULL){
                if(temp->getNext()->getNext() == NULL){
                    deletedData = temp->getNext()->getData();
                    break;
                }
                temp = temp->getNext();
            }
            temp->setNext(NULL);

            return deletedData;
        }

        int deleteAtPos(int position){
            return -1;
        }

        void display(){
            Node *n = head;

            while(n->getNext() != NULL){
                cout << n->getData() << " ";
                n = n->getNext();
            }
            cout << n->getData() << endl;
        }

        int getSize(){
            return this->size;
        }
};

int main(){
    LinkedList *ll = new LinkedList();

    ll->deleteAtBeginning();
    ll->deleteAtEnd();

    ll->insertAtBeginning(10);
    ll->insertAtBeginning(20);
    ll->insertAtBeginning(30);
    ll->insertAtBeginning(40);
    ll->insertAtBeginning(50);

    ll->deleteAtBeginning();
    ll->deleteAtEnd();

    ll->insertAtEnd(5);
    ll->insertAtEnd(0);

    ll->insert(1, 3);
    ll->insert(1, 2);
    ll->insert(2, 12);
    ll->insert(2, 14);
    ll->insert(4, 120);
    ll->insert(7, 100);
    ll->insert(13, 2000);
    ll->insert(15, 300);

    ll->display();
    cout << "The size of the Linked List: " << ll->getSize() << endl;

    return 0;
}