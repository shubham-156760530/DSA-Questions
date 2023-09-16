# Queue Data Structure

## Introduction 

- Queue DS follows FIFO.
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/dd4842ec-25d5-4975-8495-029ce29f2a74)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/a646da11-b48d-4463-adaa-37b4a83f56ca)

## Applications of Queue Data Structure

- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/0b183688-466c-4c2b-8413-74ec3998bb5d)

## Implementation of Queue using Array

- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/50ec10c6-ffb4-4cdb-bc2a-f03313893acd)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/c030e58c-1e14-458f-9e37-95e002c155c2)
- ![image](https://github.com/shubham-156760530/DSA-Questions/assets/59314528/72ae8afb-ffcc-4231-8437-be4a2dc44e37)
-       #include <bits/stdc++.h> 
        using namespace std; 
        
         
        class Queue { 
        public: 
        	int front, rear, size; 
        	unsigned capacity; 
        	int* array; 
        }; 
        
         
        Queue* createQueue(unsigned capacity) 
        { 
        	Queue* queue = new Queue(); 
        	queue->capacity = capacity; 
        	queue->front = queue->size = 0; 
        
        	 
        	queue->rear = capacity - 1; 
        	queue->array = new int[( 
        		queue->capacity * sizeof(int))]; 
        	return queue; 
        } 
        
         
        int isFull(Queue* queue) 
        { 
        	return (queue->size == queue->capacity); 
        } 
        
        
        int isEmpty(Queue* queue) 
        { 
        	return (queue->size == 0); 
        } 
        
        
        void enqueue(Queue* queue, int item) 
        { 
        	if (isFull(queue)) 
        		return; 
        	queue->rear = (queue->rear + 1) 
        				% queue->capacity; 
        	queue->array[queue->rear] = item; 
        	queue->size = queue->size + 1; 
        	cout << item << " enqueued to queue\n"; 
        } 
        
         
        int dequeue(Queue* queue) 
        { 
        	if (isEmpty(queue)) 
        		return INT_MIN; 
        	int item = queue->array[queue->front]; 
        	queue->front = (queue->front + 1) 
        				% queue->capacity; 
        	queue->size = queue->size - 1; 
        	return item; 
        } 
        
        
        int front(Queue* queue) 
        { 
        	if (isEmpty(queue)) 
        		return INT_MIN; 
        	return queue->array[queue->front]; 
        } 
        
         
        int rear(Queue* queue) 
        { 
        	if (isEmpty(queue)) 
        		return INT_MIN; 
        	return queue->array[queue->rear]; 
        } 
        
         
        int main() 
        { 
        	Queue* queue = createQueue(1000); 
        
        	enqueue(queue, 10); 
        	enqueue(queue, 20); 
        	enqueue(queue, 30); 
        	enqueue(queue, 40); 
        
        	cout << dequeue(queue) 
        		<< " dequeued from queue\n"; 
        
        	cout << "Front item is "
        		<< front(queue) << endl; 
        	cout << "Rear item is "
        		<< rear(queue) << endl; 
        
        	return 0; 
        } 
        
##   Implementation of Queue using Linked List

-       #include <bits/stdc++.h> 
        using namespace std; 
        
        struct QNode { 
        	int data; 
        	QNode* next; 
        	QNode(int d) 
        	{ 
        		data = d; 
        		next = NULL; 
        	} 
        }; 
        
        struct Queue { 
        	QNode *front, *rear; 
        	Queue() 
        	{ 
        		front = rear = NULL; 
        	} 
        
        	void enQueue(int x) 
        	{ 
        
        		 
        		QNode* temp = new QNode(x); 
        
        		 
        		if (rear == NULL) { 
        			front = rear = temp; 
        			return; 
        		} 
        
        		 
        		rear->next = temp; 
        		rear = temp; 
        	} 
        
        	 
        	void deQueue() 
        	{ 
        		 
        		if (front == NULL) 
        			return; 
        
        	 
        		QNode* temp = front; 
        		front = front->next; 
        
        	
        		if (front == NULL) 
        			rear = NULL; 
        
        		delete (temp); 
        	} 
        }; 
        
        
        int main() 
        { 
        
        	Queue q; 
        	q.enQueue(10); 
        	q.enQueue(20); 
        	q.deQueue(); 
        	q.deQueue(); 
        	q.enQueue(30); 
        	q.enQueue(40); 
        	q.enQueue(50); 
        	q.deQueue(); 
        	cout << "Queue Front : " << (q.front)->data << endl; 
        	cout << "Queue Rear : " << (q.rear)->data; 
        } 

    

