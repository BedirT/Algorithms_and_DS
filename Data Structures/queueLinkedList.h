using namespace std;
#define maxSize 101

class queueC {
    
private:
    struct node{
        int data;
        node next;
    }* back, * front;
    
public:
    
    queueC(){
    }
    
    void dequeue(){
        int hold;
        if(front == NULL){
            cout<<"Error: Empty queue\n";
            return;
        }
        else{
            node nw;
            hold = nw->data;
            front = front->next;
            delete(nw);
        }
        
    }
    void enqueue(int a){
    
        node initial;
        initial->next = NULL;
        initial->data = a;
        if(front == NULL){
            front = rear = initial;
            rear->next = NULL;
        }
        else{
            rear->next = np;
            rear = np;
            rear->next = NULL;
        }
    
    }
    int frontt(){
    void Print(){
    
};