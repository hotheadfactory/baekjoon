template<typename T>

class Node{
  private:
    T data;
    Node* next;
    Node* prev;
  public:
    Node(T data) {

this->data = data;

this->next = NULL;

this->prev = NULL;

}

void setNext(Node* next) {

this->next = next;

}

void setPrev(Node* prev) {

this->prev = prev;

}

void setData(T data) {

this->data = data;

}

Node* getNext() {

return next;

}

Node* getPrev() {

return prev;

}

T getData() {

return data;

}

};



template<typename T>

class Deque {

private:

Node<T>* front;

Node<T>* rear;

public:

Deque() {

front = NULL;

rear = NULL;

}

~Deque() {

Node<T>* tmp = front;

while (tmp != NULL) {

tmp = tmp->getNext();

delete(front);

front = tmp;

}

}

void setFront(Node<T>* front) {

this->front = front;

}

void setRear(Node<T>* rear) {

this->rear = rear;

}

Node<T>* getFront() {

return front;

}

Node<T>* getRear() {

return rear;

}

bool empty() {

if (front == NULL) return true;

else return false;

}

bool push_front(T data) {

if (empty()) {

front = new Node<T>(data);

rear = front;

return true;

}

front->setPrev(new Node<T>(data));

front->getPrev()->setNext(front);

front = front->getPrev();

return true;

}

bool push_rear(T data) {

if (empty()) {

rear = new Node<T>(data);

front = rear;

return true;

}

rear->setNext(new Node<T>(data));

rear->getNext()->setPrev(rear);

rear = rear->getNext();

return true;

}

T pop_front() {

T tmp = front->getData();



 if (empty()) return NULL;

if (front == rear) {

delete(front);

front = NULL;

rear = NULL;

return tmp;

}

front = front->getNext();

delete(front->getPrev());

front->setPrev(NULL);

return tmp;

}

T pop_rear() {

T tmp = rear->getData();



 if (empty()) return NULL;

 if (front == rear) {

delete(rear);

front = NULL;

rear = NULL;

return tmp;

}

rear = rear->getPrev();

delete(rear->getNext());

rear->setNext(NULL);

return tmp;

}

T begin() {

return front->getData();

}

T end() {

return rear->getData();

}

};
[출처] 06-자료구조: 덱(Deque)|작성자 저스트쿠카로
