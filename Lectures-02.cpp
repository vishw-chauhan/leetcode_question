// Void pointer 

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 42;
//     float b = 3.14;
//     char c = 'Z';

//     void* ptr;  // void pointer

//     ptr = &a;
//     cout << "Integer: " << *(int*)ptr << endl;

//     ptr = &b;
//     cout << "Float: " << *(float*)ptr << endl;

//     ptr = &c;
//     cout << "Char: " << *(char*)ptr << endl;

//     return 0;
// }



// Address Type casting:--  When you take the address of a variable and store it in a pointer of a different type.

// #include <iostream>
// using namespace std;
// int main(){

//     int x = 65 ; 

//     // store address in void pointer
//     void *ptr = &x;

//     // cast back to int

//     cout<<*(int*)ptr<<endl;

//     // cast to char

//     cout<<*(char*)ptr<<endl;
// }

// Double 2 -D array defining size by varible

// #include<iostream>
// using namespace std ;
//  int main(){

//     int n ;
//     cout<<" Enter number of row"<<endl;

//     cin>>n;

//     int m ;
//      cout<<"Enter number of column"<<endl;

//      cin>>m;
//       int **arr = new int*[n];

//       for (int i = 0; i < m; i++)
//       {
//          arr[i]=new int [m];
//       }
//   //  Input the array

//       for (int i = 0; i < n; i++)
//       {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//       }

//       // print the array
      
//       for (int i = 0; i < n; i++)
//       {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<arr[i][j]<<endl;
//         }
        
//       }

//       // free the memory

//       for (int i = 0; i < m; i++)
//       {
//         delete[]arr[i];
//       }
      
//       delete []arr;
  
    
//  }

// Inline function :- In which function is define at the compile time return value place at the place of function calling so memory spce or readability increase

// #include<iostream>
// using namespace std;

// inline int getmax(int &a,int &b){

//     return (a>b)?a:b;
// }

// int main(){

//     int a=1;
//     int b = 3;

//     int result = getmax(a,b);
//     cout<<" result is  "<<result;


// }

// default argument  : == In which if argument is passed ok ? and not passed is it OK ? beacause it can take by default as passed 

// #include<iostream>
// using namespace std ;

// void print(int  arr[],int n=2,int m=3){

//     for (int i = n; i < m; i++)
//     {
//         cout<<i<<endl;
//     }
    
// }
// int main(){

//     int arr[10]={1,2,3,4,5};

//     int start=0;
//     int end =5;
//     print(arr,start);


// }

// Recursion:-  1- calling itself 2- Base conditon

// #include<iostream>
// using namespace std;

// int facotial(int n){

//     if (n==0)
//     {
//         return 1;

//     }

//     return n *facotial(n-1);
    
// }

// int main(){

//     int n;
//     cin>>n;

//  int    result = facotial(n);
//  cout<<result;


// }


// Merge sort ----------

// #include<iostream>
// using namespace std;

// void merge(int *arr, int start, int end) {
//     int mid = start + (end - start) / 2;

//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     // copy values
//     int mainarrayindex = start;
//     for (int i = 0; i < len1; i++) {
//         first[i] = arr[mainarrayindex++];
//     }

//     mainarrayindex = mid + 1;
//     for (int i = 0; i < len2; i++) {
//         second[i] = arr[mainarrayindex++];
//     }

//     // merge
//     int index1 = 0;
//     int index2 = 0;
//     mainarrayindex = start;

//     while (index1 < len1 && index2 < len2) {
//         if (first[index1] < second[index2]) {
//             arr[mainarrayindex++] = first[index1++];
//         } else {
//             arr[mainarrayindex++] = second[index2++];
//         }
//     }

//     while (index1 < len1) {
//         arr[mainarrayindex++] = first[index1++];
//     }

//     while (index2 < len2) {
//         arr[mainarrayindex++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;
// }

// void mergesort(int *arr, int start, int end) {
//     if (start >= end) {
//         return;
//     }

//     int mid = start + (end - start) / 2;

//     // sort left
//     mergesort(arr, start, mid);

//     // sort right
//     mergesort(arr, mid + 1, end);

//     // merge
//     merge(arr, start, end);
// }

// int main() {
//     int arr[10] = {1, 5, 2, 6, 3, 4, 9, 8, 7, 0};

//     mergesort(arr, 0, 9);

//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Quick Sort :-----


// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e) {
//     int pivot = arr[s];
//     int count = 0;

//     // Count elements smaller or equal to pivot
//     for (int i = s + 1; i <= e; i++) {
//         if (arr[i] <= pivot) {
//             count++;
//         }
//     }

//     // Place pivot at right position
//     int pivotIndex = s + count;
//     swap(arr[pivotIndex], arr[s]);

//     // Now arrange left and right part
//     int i = s, j = e;
//     while (i < pivotIndex && j > pivotIndex) {
//         while (arr[i] <= pivot) {
//             i++;
//         }
//         while (arr[j] > pivot) {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }

//     return pivotIndex;
// }

// void quicksort(int arr[], int s, int e) {
//     if (s >= e) {
//         return;
//     }

//     // Partition
//     int p = partition(arr, s, e);

//     // Left part
//     quicksort(arr, s, p - 1);

//     // Right part
//     quicksort(arr, p + 1, e);
// }

// int main() {
//     int arr[5] = {1, 4, 2, 5, 3};
//     int n = 5;

//     quicksort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//                         ---------  Object Oriented Programming    ------------



// #include <iostream>
// #include <cstring>   // for strcpy
// using namespace std;

// class Solution {
// private:
//     char name[100];   // use array for name
//     int health;
//     char level;

// public:
//     int gethealth() {
//         return health;
//     }

//     char getlevel() {
//         return level;
//     }

//     void sethealth(int h) {
//         health = h;
//     }

//     void setlevel(char c) {
//         level = c;
//     }

//     void print() {
//         cout << "Name: " << this->name << endl;
//         cout << "Health: " << this->health << endl;
//         cout << "Level: " << this->level << endl;
//     }

//     void setname(char name[]) {
//         strcpy(this->name, name);  // copy into char array
//     }
// };


// int main() {
    // ✅ Static allocation
    // Solution obj1;
    // obj1.sethealth(80);
    // obj1.setlevel('B');

    // cout << "Static Object -> Health = " << obj1.gethealth()
    //      << ", Level = " << obj1.getlevel() << endl;

    // // ✅ Dynamic allocation
    // Solution *obj2 = new Solution;
    // obj2->sethealth(100);
    // obj2->setlevel('A');

    // cout << "Dynamic Object -> Health = " << obj2->gethealth()
    //      << ", Level = " << obj2->getlevel() << endl;

    // // free memory
    // delete obj2;

//       Solution obj;

//     obj.sethealth(50);
//     obj.setlevel('C');

//     char name[10] = "Vishw";
//     obj.setname(name);

//     obj.print();  // ✅ Now prints correctly

//     // Use default copy constructor

//     Solution obj2(obj);

//     // obj.name[0]='b'; // Not allowed: name is private

//     // If you want to change the first character of the name, use a setter:
//     char newName[10];
//     strcpy(newName, name);
//     newName[0] = 'b';
//     obj.setname(newName);

//     obj2.print();




//     return 0;
// }



//   Shallow cpoy or deep copy



// #include <iostream>
// #include<cstring>
// using namespace std;

// class Student {
// public:
//     char *name;


//     // Static keyword

//     static int timetocomplete;

//     Student(const char *n) {
//         name = new char[20];
//         strcpy(name, n);
//     }

//     // deconstructor

  
    

//       ~Student(){
//         cout<<"desconstructor is called ";

//       }
// };

// // initializatio of time to complete

// int Student::timetocomplete=3;

// int main() {
//     // Student s1("Vishesh");
//     // Student s2 = s1;   // shallow copy (default)

//     // cout << "s1 name = " << s1.name << endl;
//     // cout << "s2 name = " << s2.name << endl;

//     // s2.name[0] = 'M';  // modify s2

//     // cout << "After modification:" << endl;
//     // cout << "s1 name = " << s1.name << endl;  // ❌ also changes
//     // cout << "s2 name = " << s2.name << endl;


//     // static

// //    Student s1("Vishesh");


// //     // dynamic

// //   Student *s2 = new Student("vishw");
// //    delete s2;

//    // access the static memebr without creating the object

//   cout<< Student::timetocomplete;// static member kebal static function to hi access ker sakta h




// }



// Polymorphism----------

   //                     1 --  Compile time polymorphism


// #include<iostream>

// using namespace std;

// class Math{

//   public:

//   void sum(int a ,int b){

//     cout<<a+b<<endl;
//   }

//   void sum(int a,int b,int c){
//     cout<<a+b+c;
//   }

// };
// int main(){


//   Math obj;
//   obj.sum(4,5);
//   obj.sum(2,3,4);

// }

//    default method polymorphism

// #include<iostream>
// using namespace std;

// class student{
 
//   public:

//   void sum(int a,int b,int c,int d=0,int e=0){
//     cout<<a+b+c+d+e<<endl;
//   }




// };
// int main(){

//   student obj;
//   obj.sum(2,3,4,5,6);


// }

// operator overloading-----

// #include<iostream>
// using namespace std;

// class student {

//   public: 
//   int a;
//   int b;

//  student operator+( student& obj){
//   int value1= this ->a;
//   int value2= obj.a;

//   cout<<value2-value1;
//  }

// };
// int main(){

//   student obj,obj1;
//   obj.a=4;
//   obj1.a=7;

//   obj+obj1;


// }

  //   Method Overriding   -----


// #include<iostream>
// using namespace std;

// class animal {
// public:
//     void show() {
//         cout << "Speaking... the animal" << endl;
//     }
// };

// // dog inherits from animal
// class dog : public animal {
// public:
//     void show() {
//         cout << "The dog is barking" << endl;
//     }
// };

// int main() {
//     dog obj;
//     obj.show();   // calls dog's show()

//     animal a;
//     a.show();     // calls animal's show()

//     return 0;
// }

//      Abstraction --

/*

        Showing the only essentil information 

        implementation hiding

        In which we provide the security

        Only you changes in the code not the others

*/

//           Linked list

/*
    it is linear data structure

    and it is collection of node and node is combination of --  pointer ans data

    dynamically allocation in linked list

    it can be grow or shrink




*/

//    Implementation of node 

// #include<iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     // constructor
//     node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }

//     // Insert at head
//     static void inserthead(node* &head, int data) {
//         node* temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }

//     // Print all nodes
//     static void print(node* head) {
//         node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     node* head = new node(10);

//     node::inserthead(head, 12);
//     node::inserthead(head, 15);
//     node::inserthead(head, 20);

//     node::print(head);

//     return 0;
// }


// Inser at the tail new node 

// #include<iostream> 
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;

//     // constructor
//     node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }

//     static void insertattail(node *&tail, int data) {
//         node *temp = new node(data);
//         tail->next = temp;
//         tail = temp;
//     }

//     static void print(node* head) {
//         node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };



// int main(){

//     node * tail= new node(10);

// }
// int main() {
//     node *head = new node(10);
//     node *tail = head;

//     node::insertattail(tail, 12);
//     node::insertattail(tail, 15);
//     node::insertattail(tail, 20);

//     node::print(head);

//     return 0;
// }




// Inser At the any position in the linked list

// #include<iostream>
// using namespace std;

//  class node{

//         public:
//         int data;
//         node * next;

//         // Constructor for node

//         node(int data){

//             this-> data= data;
//             this->next= nullptr;
//         }


//         static void insertathead(node *&head,int data){

//             node *temp= new node(data);
//             temp->next=head;
//             head = temp;
//         }


//         static void insertatposition(node*&head,int position,int data){

//             if (position==1)
//             {
//                 insertathead(head,data);
//                 return;
//             }
            

//             node *temp = head;
//             int cnt=1;

//             while (cnt<position-1)
//             {
//                 temp=temp->next;
//                 cnt++;
//             }

//             // creating a node for d
            
//             node *nodeinsert= new node(data);

//             nodeinsert->next=temp->next;
//             temp->next=nodeinsert;
            
//         }

//         static  void    print(node*&head){

//         node * temp = head;
//         while (head!=nullptr)
//         {
//             cout<<temp->data<<"  ";
//             temp= temp->next;
//         }
        

//         }
//     };

// int main(){

//     node *head= new node(10);

//  node::   insertathead(head,12);
//   node::   insertathead(head,15);
//    node::   insertathead(head,12);

//      node::   insertatposition(head,1,50);



//     node:: print(head);

   
// }


//  Delete the node int the linked list 


// #include<iostream>
// using namespace std;

//  class node{

//         public:
//         int data;
//         node * next;

//         // Constructor for node

//         node(int data){

//             this-> data= data;
//             this->next= nullptr;
//         }


//         static void insertathead(node *&head,int data){

//             node *temp= new node(data);
//             temp->next=head;
//             head = temp;
//         }


//         static void insertatposition(node*&head,int position,int data){

//             if (position==1)
//             {
//                 insertathead(head,data);
//                 return;
//             }
            

//             node *temp = head;
//             int cnt=1;

//             while (cnt<position-1)
//             {
//                 temp=temp->next;
//                 cnt++;
//             }

//             // creating a node for d
            
//             node *nodeinsert= new node(data);

//             nodeinsert->next=temp->next;
//             temp->next=nodeinsert;
            
//         }


//         static void deletenode(node *&head,int position){

//           if (position==1)
//           {
//             node *temp = head;

//             head= head->next;
//             // memory free from the start node

//             temp->next= NULL;

//             delete temp;
//           }

//           else
//           {

//             // delete any node or last node
            
//             node *curr= head;
//             node *prev= NULL;

//             int cnt =1;

//             while(cnt<position){

//               prev= curr;
//               curr=curr->next;

//               cnt++;

//             }

//             prev->next= curr->next;
//             curr->next=NULL;
//             delete curr;


//           }
          
          

//         }

//         static  void    print(node*&head){

//         node * temp = head;
//         while (head!=nullptr)
//         {
//             cout<<temp->data<<"  ";
//             temp= temp->next;
//         }
        

//         }
//     };

// int main(){

//     node *head= new node(10);

//  node::   insertathead(head,12);
//   node::   insertathead(head,15);
//    node::   insertathead(head,13);

//      node::   insertatposition(head,1,50);


// node:: deletenode(head,4);


//     node:: print(head);

   
// }



// Double linkd List ----


// #include<iostream>
// using namespace std;

// class node{

//   public:

//   int data;
//   node*prev;
//   node*next;

//   // constructor create for node

//   node(int data){

//     this->data= data;
//     this->prev=NULL;
//     this->next=NULL;

//   }


//   // Insert at the head in the double linked list

//   static void insertathead(node*&head,int data){

//     node *temp= new node(data);

//     temp->next= head;
//     head->prev= temp;

//     head= temp;
//   }


//   static void insertatend(node*&tail,int data){
//     node *temp = new node(data);
//     tail->next= temp;
//     temp->prev= tail;
//     tail= temp;

//   }

//   static void insertatposition(node*&tail,node*&head,int position,int data){

//     if (position==1)
//     {
//       insertathead(head,data);
//       return;
//     }
//     node *temp = head;
//     int cnt=1;

//     while (cnt<(position-1))
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if (temp->next==NULL)
//     {
//       insertatend(tail,data);
//       return;
//     }

//     node *insertnode= new node(data);

//     insertnode->next= temp->next;
//     temp->next->prev=insertnode;

//     temp->next=insertnode;
//     insertnode->prev= temp;


    
    


    
//   }

//   static void print(node*&head){


//     node*temp=head;

//     while (temp!=NULL)
//     {
//       cout<<temp->data<<"  ";
//       temp=temp->next;
//     }
    

//   }

// };


// int main(){


//   node *temp= new node(10);

//   node *tail= temp;

//   node::insertathead(temp,20);
//   node::insertathead(temp,30);
//   node::insertathead(temp,40);

//   node::insertatend(tail,5);

//   node::insertatposition(tail,temp,3,1000);

//   node::print(temp);


// }



// Deletion In the doubly linked list



// #include<iostream>
// using namespace std;

// class node{

//   public:

//   int data;
//   node*prev;
//   node*next;

//   // constructor create for node

//   node(int data){

//     this->data= data;
//     this->prev=NULL;
//     this->next=NULL;

//   }


//   // Insert at the head in the double linked list

//   static void insertathead(node*&head,int data){

//     node *temp= new node(data);

//     temp->next= head;
//     head->prev= temp;

//     head= temp;
//   }


//   static void insertatend(node*&tail,int data){
//     node *temp = new node(data);
//     tail->next= temp;
//     temp->prev= tail;
//     tail= temp;

//   }

//   static void insertatposition(node*&tail,node*&head,int position,int data){

//     if (position==1)
//     {
//       insertathead(head,data);
//       return;
//     }
//     node *temp = head;
//     int cnt=1;

//     while (cnt<(position-1))
//     {
//         temp = temp->next;
//         cnt++;
//     }

//     if (temp->next==NULL)
//     {
//       insertatend(tail,data);
//       return;
//     }

//     node *insertnode= new node(data);

//     insertnode->next= temp->next;
//     temp->next->prev=insertnode;

//     temp->next=insertnode;
//     insertnode->prev= temp;
    
//   }


// static void deletenode(node *&head, int position) {

//     // Case 1: delete first node
//     if (position == 1) {
//         node* temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }

//     // Case 2: delete any other node
//     else {
//         node* curr = head;

//         node *prev = NULL;
//         int cnt = 1;

//         // move to required position
//         while (cnt < position) {

//           prev = curr;
//             curr = curr->next;
//             cnt++;
//         }
//        curr->prev = NULL;
//          prev->next= curr->next;
//          curr->next= NULL;
//         delete curr;
//     }
// }

//   static void print(node*&head){


//     node*temp=head;

//     while (temp!=NULL)
//     {
//       cout<<temp->data<<"  ";
//       temp=temp->next;
//     }
    

//   }

// };


// int main(){


//   node *temp= new node(10);

//   node *tail= temp;

//   node::insertathead(temp,20);
//   node::insertathead(temp,30);
//   node::insertathead(temp,40);

//   node::insertatend(tail,5);

//   node::insertatposition(tail,temp,3,1000);

//   node::deletenode(temp,2);

//   node::print(temp);


// }

//  --- Insertion At the Circular linked list -----


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// // ✅ Function to create a new node
// Node* createNode(int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // ✅ Insert at the beginning
// Node* insertAtBeginning(Node* last, int data) {
//     Node* newNode = createNode(data);

//     // If list is empty
//     if (last == NULL) {
//         newNode->next = newNode;
//         return newNode;
//     }

//     // Insert before head
//     newNode->next = last->next;
//     last->next = newNode;

//     return last;
// }

// // ✅ Insert at the end
// Node* insertAtEnd(Node* last, int data) {
//     Node* newNode = createNode(data);

//     // If list is empty
//     if (last == NULL) {
//         newNode->next = newNode;
//         return newNode;
//     }

//     newNode->next = last->next;  // new node points to head
//     last->next = newNode;        // old last points to new node
//     last = newNode;              // update last pointer
//     return last;
// }

// // ✅ Insert after a given node (any place)
// Node* insertAfter(Node* last, int data, int item) {
//     if (last == NULL) {
//         cout << "List is empty!\n";
//         return NULL;
//     }

//     Node* temp = last->next;
//     do {
//         if (temp->data == item) {
//             Node* newNode = createNode(data);
//             newNode->next = temp->next;
//             temp->next = newNode;

//             if (temp == last)  // if inserted after last node
//                 last = newNode;

//             return last;
//         }
//         temp = temp->next;
//     } while (temp != last->next);

//     cout << "Item " << item << " not found in the list.\n";
//     return last;
// }

// // ✅ Display the Circular Linked List
// void display(Node* last) {
//     if (last == NULL) {
//         cout << "List is empty.\n";
//         return;
//     }

//     Node* temp = last->next;
//     cout << "Circular Linked List: ";
//     do {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != last->next);
//     cout << endl;
// }

// // ✅ Main Function
// int main() {
//     Node* last = NULL;

//     // Insert at end
//     last = insertAtEnd(last, 10);
//     last = insertAtEnd(last, 20);
//     last = insertAtEnd(last, 30);
//     display(last);

//     // Insert at beginning
//     last = insertAtBeginning(last, 5);
//     display(last);

//     // Insert after a given node (any place)
//     last = insertAfter(last, 25, 20);  // insert 25 after 20
//     display(last);

//     return 0;
// }
