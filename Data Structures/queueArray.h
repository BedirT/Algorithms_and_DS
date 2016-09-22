using namespace std;
#define maxSize 101

class queueC {
    
private:
    int back, front;
    int queue[maxSize];
    
public:
    
    queueC(){
        front = -1;
        back = -1;
    }
    
    bool isEmpty(){
        return front == -1 && back == -1;
    }
    
    bool isFull(){
        return front == (back+1) % maxSize;
    }
    
    void dequeue(){
        if(isEmpty()){
            cout << "Error: queue is Empty!";
            return;
        }
        front = (front+1) % maxSize;
    }
    
    void dequeue_back(){
        if(isEmpty()){
            cout << "Error: queue is Empty!";
            return;
        }
        back = (back-1) % maxSize;
    }
    
    void enqueue_back(int a){
        if(isFull()){
            cout << "Error: queue is Full!";
            return;
        }
        if(isEmpty())
            front = back = 0;
        else
            front = (front-1) % maxSize;
        queue[front] = a;
    }
    
    void enqueue(int a){
        if(isFull()){
            cout << "Error: queue is Full!";
            return;
        }
        if(isEmpty())
            front = back = 0;
        else
            back = (back+1) % maxSize;
        queue[back] = a;
    }
    
    int frontt(){
        if(isEmpty()){
            cout << "Error: queue is Empty!";
            return -1;
        }
        return queue[front];
    }
    
    void Print(){
        int count = (back + maxSize - front) % maxSize + 1;
        cout << "Queue       : ";
        for(int i = 0; i <count; i++)
        {
            int index = (front+i) % maxSize;
            cout << queue[index] << " ";
        }
        cout<<"\n";
    }

};