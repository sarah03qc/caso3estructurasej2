
#include<iostream>
#include<conio.h>
#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include <string>
using namespace std;

int main() {

    Queue<string> q = Queue<string>();    //Ejemplo para demostrar como la clase creada por dos stacks 
                                          //se comporta exitosamente como pila
    q.enqueue("h");
    q.enqueue("o");
    q.enqueue("l");    //se agregan en ese orden 
    q.enqueue("a");
 
    cout << "\n " << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();  //y salen en el mismo orden en el que se agregaron, es decir FIFO
    q.dequeue();

    return 0;
}