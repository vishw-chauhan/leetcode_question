//    -------  using the MAp find the starting cycle point   --------- 

// #include<iostream>
// #include<map>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// bool isDetect(Node * head){

//     if (head== NULL) return false ;

//      map<Node*, bool> visited;   
     
//      Node * temp = head;

//      while (temp != NULL)
//      {
//          if(visited[temp]== true){

//             cout<<" Loop detect at The Node  "<< temp->data<<endl;

//             return true;
//          }

//          visited[temp]= true;
//          temp = temp ->next;
//      }


//      return false;
     
    
// };



// int main() {
//     Node* head = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);

//     // Linking nodes
//     head->next = second;
//     second->next = third;
//     third->next = fourth;

//     // Creating a loop for testing
//     fourth->next = second; // loop created here

//     if (isDetect(head))
//         cout << "Loop exists in the linked list.\n";
//     else
//         cout << "No loop in the linked list.\n";

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     static void print(Node* head) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// // 🔹 Detect loop and return intersection node
// Node* hasCycle(Node* head) {
//     if (head == nullptr) return NULL;

//     Node* slow = head;
//     Node* fast = head;

//     while (fast != nullptr && fast->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             return slow; // intersection point
//         }
//     }
//     return NULL; // no cycle
// }

// // 🔹 Get starting node of loop
// Node* getStartingNode(Node* head) {
//     if (head == NULL) return NULL;

//     Node* intersection = hasCycle(head);
//     if (intersection == NULL) return NULL; // no loop

//     Node* slow = head;
//     while (slow != intersection) {
//         slow = slow->next;
//         intersection = intersection->next;
//     }

//     return slow; // starting node of the loop
// }

// // 🔹 Remove loop
// void removeLoop(Node* head) {
//     Node* startNode = getStartingNode(head);
//     if (startNode == NULL) {
//         cout << "No loop found, nothing to remove.\n";
//         return;
//     }

//     Node* temp = startNode;
//     while (temp->next != startNode) {
//         temp = temp->next;
//     }
//     temp->next = NULL; // loop broken

//     cout << "Loop removed successfully.\n";
// }

// int main() {
//     // Create nodes
//     Node* head = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);
//     Node* fourth = new Node(4);
//     Node* fifth = new Node(5);

//     // Link nodes
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     // Create loop (5 -> 3)
//     fifth->next = third;

//     // Detect and print loop start
//     Node* startNode = getStartingNode(head);
//     if (startNode != NULL)
//         cout << "Loop starts at node with value: " << startNode->data << endl;
//     else
//         cout << "No loop in linked list." << endl;

//     // Remove loop
//     removeLoop(head);

//     // Check again after removal
//     if (hasCycle(head) == NULL)
//         cout << "No cycle after removal " << endl;
//     else
//         cout << "Loop still exists " << endl;

//     // Print list
//     Node::print(head);

//     return 0;
// }



//  ---------  Remove the duplicated in the sorted linklist


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     static void print(Node* head) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };



// // Function to remove duplicates from sorted linked list
// Node* uniqueSorted(Node* head) {
//     if (head == NULL)
//         return NULL;

//     Node* curr = head;

//     while (curr != NULL && curr->next != NULL) {
//         if (curr->data == curr->next->data) {
//             Node* duplicate = curr->next;
//             curr->next = curr->next->next;
//             delete duplicate;  // delete duplicate node
//         } else {
//             curr = curr->next; // move ahead if no duplicate
//         }
//     }

//     return head;
// }

// int main() {
//     // Create linked list: 10 -> 20 -> 20 -> 30 -> 30 -> 30 -> 40
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(20);
//     head->next->next->next = new Node(30);
//     head->next->next->next->next = new Node(30);
//     head->next->next->next->next->next = new Node(30);
//     head->next->next->next->next->next->next = new Node(40);

//     cout << "Before removing duplicates: ";
//     Node::print(head);

//     head = uniqueSorted(head);

//     cout << "After removing duplicates: ";
//     Node::print(head);
// }



// -----  Remove The duplicates In the Unsorted linklist    -------


// #include<iostream>
// using namespace std;



// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     static void print(Node* head) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };


// Node * removeduplicate(Node * head){


//     if (head==NULL)
//     {
//         return NULL;
//     }

//     Node * curr= head;
//     while (curr!=NULL)
//     {
//          Node* prev = curr;
//         Node * temp= curr->next;

//         while (temp!=NULL)
//         {
//             if (temp->data==curr->data)
//             {
//                 Node * duplicate= temp;
//                 prev->next= temp->next;
//                 temp=temp->next;
//                 delete duplicate;
//             }
//             else{

//                 prev=temp;
//                 temp= temp->next;
//             }
            
//         }
//         curr=curr->next;
//     }
    
//     return head;

// }

// int main(){

     
//     Node* head = new Node(10);
//     head->next = new Node(30);
//     head->next->next = new Node(20);
//     head->next->next->next = new Node(30);
//     head->next->next->next->next = new Node(20);
//     head->next->next->next->next->next = new Node(50);
//     head->next->next->next->next->next->next = new Node(10);

//     cout << "Before removing duplicates: "<<endl;
//     Node::print(head);

//     head= removeduplicate(head);

//     cout<<" After removing Duplicates :";

//     Node::print(head);


// }


// -----  Remove the duplicate in the linklist USing the map   ---- 


// #include <iostream>
// #include <map>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     static void print(Node* head) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// // Function to remove duplicates using map (O(n) time)
// Node* removeDuplicates(Node* head) {
//     if (head == NULL) return NULL;

//     map<int, bool> visited;  // store which data values are already seen

//     Node* curr = head;
//     Node* prev = NULL;

//     while (curr != NULL) {
//         if (visited[curr->data] == true) {
//             // Duplicate found — delete node
//             prev->next = curr->next;
//             delete curr;
//             curr = prev->next;
//         } else {
//             // Mark data as visited
//             visited[curr->data] = true;
//             prev = curr;
//             curr = curr->next;
//         }
//     }

//     return head;
// }

// int main() {
//     Node* head = new Node(10);
//     head->next = new Node(20);
//     head->next->next = new Node(30);
//     head->next->next->next = new Node(20);
//     head->next->next->next->next = new Node(40);
//     head->next->next->next->next->next = new Node(10);

//     cout << "Before removing duplicates: ";
//     Node::print(head);

//     head = removeDuplicates(head);

//     cout << "After removing duplicates: ";
//     Node::print(head);
// }



//   ----- Print togeter 0s 1s and 2s in the linked list



// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     static void InsertAtHead(Node*& head, int data) {
//         Node* newnode = new Node(data);
//         newnode->next = head;
//         head = newnode;
//     }

//     static void print(Node* head) {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };


   // --- Approach 1  -----

// Node* arrange(Node* head) {
//     int count0 = 0, count1 = 0, count2 = 0;
//     Node* temp = head;

//     // Step 1: Count 0s, 1s, and 2s
//     while (temp != NULL) {
//         if (temp->data == 0)
//             count0++;
//         else if (temp->data == 1)
//             count1++;
//         else if (temp->data == 2)
//             count2++;

//         temp = temp->next;
//     }

//     // Step 2: Rewrite the list with counted values
//     temp = head;
//     while (temp != NULL) {
//         if (count0 != 0) {
//             temp->data = 0;
//             count0--;
//         } 
//         else if (count1 != 0) {
//             temp->data = 1;
//             count1--;
//         } 
//         else if (count2 != 0) {
//             temp->data = 2;   // ✅ fixed here
//             count2--;
//         }
//         temp = temp->next;   // ✅ move forward in loop
//     }

//     return head;
// }

//  ------ Approach 2 -----

// static void insertat(Node *&tail,Node * temp){
 
//     tail->next= temp;
//     tail= temp;

// }

// Node * Sort(Node * head){
    
//     Node * zeorhead= new Node(-1);
//     Node * zerotail= zeorhead;
//     Node * onehead= new Node(-1);
//     Node * onetail= onehead;
//     Node * twohead= new Node(-1);
//     Node * twotail= twohead;


//     Node * temp = head;

//     while (temp!=NULL)
//     {
//        if (temp->data==0)
//        {
//           insertat(zerotail,temp);
//        }
//        else if (temp->data==1)
//        {
//           insertat(onetail,temp);
//        }
//        else if (temp->data==2)
//        {
//           insertat(twotail,temp);
//        }

//        temp= temp->next;
//     }
    
//     //  Merge the linklist

//     if (onehead->next!=NULL)
//     {
//         zerotail->next= onehead->next;
//     }

//     else{
//         zerotail->next= twohead->next;
//     }

//     onetail->next= twohead->next;
//     twotail->next= NULL;


//     head= zeorhead->next;

//     delete zeorhead;
//     delete onehead;
//     delete twohead;

//     return head;
    
// }

// int main() {
//     Node* head = new Node(1);

//     Node::InsertAtHead(head, 0);
//     Node::InsertAtHead(head, 1);
//     Node::InsertAtHead(head, 2);
//     Node::InsertAtHead(head, 1);
//     Node::InsertAtHead(head, 1);
//     Node::InsertAtHead(head, 0);

//     cout << "Before arranging: ";
//     Node::print(head);

//     // head = arrange(head);

//     cout << "After arranging: ";

//     head= Sort(head);
//     Node::print(head);
// }



// Merge two sorted linklist in new sorted order

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// Node* mergeInBetween(Node* h1, Node* h2) {
//     // If first list is empty
//     if (h1 == NULL) return h2;
//     // If second list is empty
//     if (h2 == NULL) return h1;

//     // Ensure h1 starts with smaller element
//     if (h1->data > h2->data) swap(h1, h2);

//     Node* curr1 = h1;
//     Node* next1 = h1->next;
//     Node* curr2 = h2;
//     Node* next2 = NULL;

//     while (next1 != NULL && curr2 != NULL) {
//         // If curr2 fits between curr1 and next1
//         if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
//             next2 = curr2->next;
//             curr1->next = curr2;
//             curr2->next = next1;

//             // Move pointers
//             curr1 = curr2;
//             curr2 = next2;
//         } else {
//             // Move in first list
//             curr1 = next1;
//             next1 = next1->next;

//             // If we reached end of first list, attach remaining of h2
//             if (next1 == NULL) {
//                 curr1->next = curr2;
//                 return h1;
//             }
//         }
//     }
//     return h1;
// }

// // Helper function to print list
// void printList(Node* head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// // Example usage
// int main() {
//     // First list
//     Node* h1 = new Node(1);
//     h1->next = new Node(4);
//     h1->next->next = new Node(7);
//     h1->next->next->next = new Node(10);

//     // Second list
//     Node* h2 = new Node(2);
//     h2->next = new Node(3);
//     h2->next->next = new Node(8);
//     h2->next->next->next = new Node(9);

//     Node* merged = mergeInBetween(h1, h2);
//     cout << "Merged List: ";
//     printList(merged);
//     return 0;
// }


//     --------- Stack Implementation      ------------------


// #include<iostream>
// using namespace std;

// class Stack{

//    public:
//    int *arr;
//    int top;
//    int size;

//    Stack(int size){
//       this->size= size;
//       arr= new int[size];
//       top=-1;
//    }

//    void push(int element){

//       if (size-top>1)
//       {
//          top++;
//          arr[top]=element;
//       }
//       else{
//          cout<<" Stack is Overflow"<<endl;
//       }
      
//    }

//    void pop(){
//       if (top>=1)
//       {
//          top--;
//       }
//       else{

//          cout<<"stack is Underflow"<<endl;
//       }
      
//    }

//    int peek(){
//       if (top>=0)
//       {
//          return arr[top];
//       }
//       else{
//          cout<<" stack is empty"<<endl;
//          return -1;
//       }


//    }

//    bool isempty(){
//        return top = -1;
      
//    }

// };
// int main(){

//  Stack st(5);
//   st.push(10);
//   st.push(20);
//   st.push(30);

//   cout<<st.peek()<<endl;

//   st.pop();
//   st.pop();

//   cout<<st.peek()<<endl;  

//   st.pop();

//   if (st.isempty())
//   {
//      cout<<" stack is empty"<<endl;
//   }

//   else{
//    cout<<" stack is not empty";
//   }
  

// }


//  Two stack Implementation -----------

// #include<iostream>
// using namespace std;

// class Stack{

//    public:
//     int *arr;
//     int top1;
//     int top2;
//     int size;

//     Stack(int size){
//       this->size= size;
//       arr= new int [size];
//       top1= -1;
//       top2 = size;

//     }

//     void push1(int element){

//       if (top2-top1>1)
//       {
//           top1++;
//           arr[top1]= element;
//       }
//       else{
//          cout<<" Stack is overflow"<<endl;
//       }
//     }

//       void push2(int element){

//       if (top2-top1>1)
//       {
//           top2--;
//           arr[top2]= element;
//       }
//       else{
//          cout<<" Stack is overflow"<<endl;
//       }
//     }


//     void pop1(){

//       if (top1>=0)
//       {
//          top1--;
//       }

//       else{
//          cout<<" Stack is Underflow"<<endl;
//       }
      
//     }

    
//     void pop2(){

//       if (top2<size)
//       {
//          top2++;
//       }

//       else{
//          cout<<" Stack is Underflow"<<endl;
//       }
      
//     }


// };
// int main(){

//    Stack st(5);

//    st.push1(1);
//    st.push2(2);
//    st.push1(3);
//    st.push2(4);
//    st.push1(5);
//    st.pop2();
//    st.pop2();
//    st.pop2();


// }

//   Problem of get min from the stack with time and space complexity O(1)  --

// #include<iostream>
// #include<stack>
// using namespace std;
// class Gstack{
//       private:
//       stack<int> s;
//       int mini;


//       public:

//       void push(int data){
//          if(s.empty()){
//             s.push(data);
//             mini= data;
//          }
//          else{

//             if(data<mini){
//                  push(2*data-mini);
//                  mini=data;
//             }
//             else{

//                s.push(data);
//             }

//          }
//       }


//       int pop(){

//          if (s.empty())
//          {
//              return -1;
//          }
//        int curr= s.top();
//        s.pop();

      

//             if (curr>mini)
//             {
//                return curr;
//             } else{
//                     int prevmin= mini;
//                     mini= 2*mini-curr;
//                     return prevmin;
//             }
            
//          }

//          int getmin(){
//             if (s.empty())
//             {
//                return -1;
//             }
//             return mini;
//          }
         
//       };
      



// int main(){

//        Gstack st;
//     st.push(5);
//     st.push(3);
//     st.push(8);
//     st.push(2);

//     cout << "Min: " << st.getmin() << endl; // 2

//     st.pop();
//     cout << "Min: " << st.getmin() << endl; // 3

//     return 0;
   
// }

//  Queue  Implimentation

// #include<iostream>
// using namespace std;

// class Queue{
//    int *arr;
//    int front;
//    int rear;
//    int size;

// public:
//    Queue(){
//       size = 10;
//       front = 0;
//       rear = 0;
//       arr = new int[size];
//    }

//    void inqueue(int data){
//       if (rear == size){
//          cout << "Queue is Full!" << endl;
//       }
//       else{
//          arr[rear] = data;
//          rear++;
//       }
//    }

//    int dequeue(){
//       if (front == rear){
//          cout << "Queue is Empty!" << endl;
//          return -1;   // return something
//       }
//       else{
//          int value = arr[front];
//          arr[front] = -1;   // fix assignment
//          front++;           // move front

//          // Reset pointers when queue becomes empty
//          if (front == rear){
//             front = 0;
//             rear = 0;
//          }

//          return value;
//       }
//    }

//    bool Isempty(){
//       return front == rear;
//    }
// };

// int main(){

//    Queue q;
//    q.inqueue(10);
//    q.inqueue(20);
//    q.inqueue(30);

//    cout << q.dequeue() << endl; // 10
//    cout << q.dequeue() << endl; // 20
//    cout << q.dequeue() << endl; // 30
//    cout << q.dequeue() << endl; // Empty

//    return 0;
// }

// #include <iostream>
// using namespace std;

// class circularQueue {
//     int* arr;
//     int size;
//     int front;
//     int rear;

// public:
//     circularQueue() {
//         size = 100;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     // Insert element
//     void EnQueue(int data) {

//         // Queue full condition
//         if ((front == 0 && rear == size - 1) || (rear == (front - 1 + size) % size)) {
//             cout << "Queue is Full!" << endl;
//             return;
//         }

//         // First element
//         else if (front == -1) {
//             front = rear = 0;
//             arr[rear] = data;
//         }

//         // Rear at end but front not at 0 => wrap around
//         else if (rear == size - 1 && front != 0) {
//             rear = 0;
//             arr[rear] = data;
//         }

//         // Normal insertion
//         else {
//             rear++;
//             arr[rear] = data;
//         }

//         cout << data << " inserted." << endl;
//     }


//     // Delete element
//     int DeQueue() {

//         if (front == -1) {
//             cout << "Queue is Empty!" << endl;
//             return -1;
//         }

//         int ans = arr[front];
//         arr[front] = -1;

//         // Single element left
//         if (front == rear) {
//             front = rear = -1;
//         }

//         // Front reached end => wrap around
//         else if (front == size - 1) {
//             front = 0;
//         }

//         // Normal deletion
//         else {
//             front++;
//         }

//         cout << ans << " removed." << endl;
//         return ans;
//     }

//     // Display Queue
//     void display() {
//         if (front == -1) {
//             cout << "Queue is Empty!" << endl;
//             return;
//         }

//         cout << "Queue: ";

//         if (rear >= front) {
//             for (int i = front; i <= rear; i++)
//                 cout << arr[i] << " ";
//         }
//         else {
//             for (int i = front; i < size; i++)
//                 cout << arr[i] << " ";
//             for (int i = 0; i <= rear; i++)
//                 cout << arr[i] << " ";
//         }

//         cout << endl;
//     }
// };


// int main() {
//     circularQueue cq;

//     cq.EnQueue(5);
//     cq.EnQueue(4);
//     cq.EnQueue(7);

//     cq.display();

//     cq.DeQueue();
//     cq.display();

//     return 0;
// }


//   Double Ended Queue

// #include<iostream>
// using namespace std;

// class Deque{

//    int * arr;
//    int size;
//    int front;
//    int rear;

//    public:

//    Deque(){

//       size =100;
//       arr= new int[size];
//       front= rear= -1;
//    }


//    void push_front(int data){
//       if ((front==0 && rear==size-1) ||   (rear == (front - 1 + size) % size))
//       {
//            cout<<" Queue IS Full  "<<endl;
//       }

//       else if (front==-1)
//       {
//          front=rear=0;
//       }
//       else if (front==0 && rear!=size-1)
//       {
//          front=size-1;
//       }
//       else{

//          front--;
//       }
//       arr[front]=data;
      
      
//    }


   
//    void push_rear(int data){
//       if ((front==0 && rear==size-1) ||   (rear == (front - 1 + size) % size))
//       {
//            cout<<" Queue IS Full  "<<endl;
//       }

//       else if (front==-1)
//       {
//          front=rear=0;
//       }
//       else if (rear==size-1 && front!=0)
//       {
//          rear=0;
//       }
//       else{

//          rear++;
//       }
//       arr[rear]=data;
      
      
//    }


//    int pop_front(){

//       if (front==-1)
//       {
//          cout<<" Queue Is Empty"<<endl;
//       }

//       int ans= arr[front];

//       arr[front]=-1;

//       if (front==rear)
//       {
//          front=rear=-1;
//       }
//       else if (front==size-1)
//       {
//          front=0;
//       }

//       else{
//          front++;
//       }
      
//               cout << ans << " removed from front." << endl;
//         return ans;

      

//    }


//    int pop_rear(){

//         if (front==-1)
//       {
//          cout<<" Queue Is Empty"<<endl;
//       }

//       int ans= arr[rear];

//       arr[rear]=-1;

//       if (front==rear)
//       {
//          front=rear=-1;
//       }

//       else if (rear==0)
//       {
//          rear=size-1;
//       }
//       else{

//          rear--;
//       }
      
//         cout << ans << " removed from rear." << endl;
//         return ans;
      

//    }

//        void display() {
//         if ((front==0 && rear==size-1) ||   (rear == (front - 1 + size) % size)) {
//             cout << "Queue is Empty!" << endl;
//             return;
//         }

//         cout << "Deque Elements: ";
//         if (front <= rear) {
//             for (int i = front; i <= rear; i++)
//                 cout << arr[i] << " ";
//         }
//         else {
//             for (int i = front; i < size; i++)
//                 cout << arr[i] << " ";
//             for (int i = 0; i <= rear; i++)
//                 cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

// };
// int main(){

//        Deque dq;

//     dq.push_front(10);
//     dq.push_rear(20);
//     dq.push_front(5);

//     dq.display();

//     dq.pop_front();
//     dq.pop_rear();

//     dq.display();


// }

//  Reverse The Queue

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// int main(){

// queue<int> Q;

// Q.push(5);
// Q.push(4);
// Q.push(3);
// Q.push(2);
// Q.push(1);

// stack<int> s;

// while (!Q.empty())
// {
//      int element = Q.front();
//      Q.pop();
//      s.push(element);
// }

// while (!s.empty())
// {
//       int element = s.top();
//       s.pop();
//       Q.push(element);
// }


// cout<<Q.front()<<endl;
// Q.pop();
// cout<<Q.front()<<endl;



// }


// Reverse the first k Elements of the Queue 

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void Reverse_K(queue<int> &Q,int k){
//    stack<int> s;

//    for (int i = 0; i < k; i++)
//    {
//       int element = Q.front();
//       Q.pop();
//       s.push(element);
//    }

//    while (!s.empty())
//    {
//        int val = s.top();
//        s.pop();
//        Q.push(val);
//    }

//    int t= Q.size()-k;

//    while (t--)
//    {
//       int element = Q.front();
//       Q.pop();
//       Q.push(element);
//    }
   
   
   
// }
// void Display(queue<int> q){
//     int n = q.size();
//     while(n--){
//         cout << q.front() << " ";
//         q.pop();
//     }
// }

// int main(){

// queue<int> Q;

// Q.push(1);
// Q.push(2);
// Q.push(3);
// Q.push(4);
// Q.push(5);
// Q.push(6);

// cout<<" Before Sorted   ";
// Display(Q);


// cout<<endl;

// Reverse_K(Q,4);

// cout<<" After Sorted   ";

// Display(Q);





// }