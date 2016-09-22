#include <iostream>
#include "queueArray.h"
#define maxSize 101
using namespace std;

int main ()
{

    queueC Q;
    Q.enqueue(3);
    Q.Print();
    Q.enqueue(5);
    Q.Print();
    Q.enqueue(7);
    Q.Print();
    Q.dequeue();
    Q.Print();
    Q.enqueue_back(7);
    Q.Print();
    Q.dequeue_back();
    Q.Print();
    
}