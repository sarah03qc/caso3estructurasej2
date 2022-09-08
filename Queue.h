/*
Algoritmo en el que me base:

enQueue(q, x): 

While stack1 is not empty, push everything from stack1 to stack2.

Push x to stack1 (assuming size of stacks is unlimited).

Push everything back to stack1.

deQueue(q): 

If stack1 is empty then error

Pop an item from stack1 and return it
*/

#include<iostream>
#include<conio.h>
#include "Node.h"
#include "Stack.h"   
#include<string>
using namespace std;


#ifndef QUEUE

#define QUEUE 1

template <class T>
class Queue {

    public: 
        Stack<T> primerstack;   //creamos los dos stack que usaremos
        Stack<T> segundstack;

        void enqueue(T elemento) {
            //este metodo es para agregar un elemento al queue
            while(!primerstack.isEmpty()) {   //mientras que el primer stack no este vacio
                segundstack.push(primerstack.peek());  //pasamos todos los elementos del primer stack al segundo  
                primerstack.pop();     //y se quita
            }
            T* cosa = &elemento;
            primerstack.push(cosa);    //agregamos el elemento que se quiere al primer stack
            cout << *cosa << " agregado al queue." << endl;
            
            while(!segundstack.isEmpty()) {    //mientras que el segundo stack no este vacio
                primerstack.push(segundstack.peek());      //se agrega todo de nuevo al primero
                segundstack.pop();     //y se quita
            }
        }

        void dequeue() {
            //este es para eliminar un elemento del queue
            if(!primerstack.isEmpty()) {    //si el primer stack no esta vacio
                T* thing = primerstack.peek();
                cout << *thing << " eliminado del queue." << endl;
                primerstack.pop();
            }
            else {
                //en caso de que este vacio es un error porque no podemos eliminar nada
                cout << "El queue ya se encuentra sin elementos." << endl;
            }
        }


};

#endif
