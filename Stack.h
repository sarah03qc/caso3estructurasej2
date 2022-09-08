#include "Node.h"


#ifndef STACK 

#define STACK 1

template <class T>
class Stack {

    private:
        Node<T> *pila;   //este es el 'top'
        Node<T> *aux;
        int quantity;
        bool empty;

    public:
        Stack() {
            pila = NULL;
            quantity = 0;
            empty = true;
        }

        void push(T* pData) {
            Node<T> *newNode = new Node(pData);  //creamos espacio en memoria para almacenar nodo
            newNode->setNext(pila);  //hacemos que apunte a null, pq pila era null
            pila = newNode; 
            empty = false;
            quantity++;
        }    

        Node<T>* getFirst() {
            return this->pila;
        }

        int getSize() {
            return quantity;
        }

        bool isEmpty() {
            return !pila;
        }

        T* peek() {
            return pila->getData();
        }

        void pop() {
            Node<T> *aux = pila;
            
            pila = aux->getNext(); 

            delete aux;
            quantity--;
        }

};

#endif
