// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node * next;

//     Node(int data){
//         this->data= data;
//         this->next= NULL;
//     }

// };

// Approach 1---------

// bool checkPalindrome(vector<int>arr){
//     int n = arr.size();
//     int s=0;
//     int e = n-1;

//     while (e>=s)
//     {
//         if (arr[s]!=arr[e])
//         {
//             return 0;
//             s++;
//             e--;
//         }

//         return 1;

//     }

// }

// bool isPalindorme(Node *&head){
//     Node * temp = head;
//     vector<int> arr;
//     while (temp!=NULL)
//     {
//         arr.push_back(temp->data);
//         temp= temp->next;
//     }

//     return checkPalindrome(arr);

// }

// Approach  2   -----------

// Node * reverse(Node * head){
//     Node * curr = head;
//     Node * prev= NULL;
//     Node * next= NULL;

//     while (curr!=NULL)
//     {
//          next = curr->next;
//         curr->next= prev;
//         prev= curr;
//         curr= next;

//     }
//     return prev;

// }

// Node * getmid(Node * head){

//     Node *slow= head;
//     Node* fast = head;

//     while (fast!=NULL && fast->next!=NULL)
//     {
//         fast= fast->next->next;
//         slow= slow->next;
//     }

//     return slow;

// }

// bool isPalindorme(Node *&head){

//       if (head == NULL || head->next == NULL)
//         return true; // 0 or 1 node → always palindrome

//   //   Get midddle node
// Node * middle= getmid(head);

// // reverse the list

//  Node *head2 = reverse(middle->next);
//  Node *temp1= head;
//  Node *temp2= head2;

//   bool palindrome = true;

// while (temp2!=NULL)
// {
//     if (temp1->data!=temp2->data)
//     {
//         palindrome= false ;

//         break;

//     }

//        temp1= temp1->next;
//         temp2=temp2->next;

// }

// return palindrome;

// }
// int main(){

//     Node* head = new Node(1);
//     head->next = new Node(1);
//     head->next->next = new Node(3);
//     head->next->next->next = new Node(2);
//     head->next->next->next->next = new Node(1);

//     cout << "Linked List: ";

//     if (isPalindorme(head))
//         cout << " It is a Palindrome Linked List" << endl;
//     else
//         cout << " Not a Palindrome Linked List" << endl;

//     return 0;
// }

// Add two numbers in the linklist

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next;

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Function to insert a new node at the tail
// void insertAtTail(Node *&head, Node *&tail, int data) {
//     Node *newNode = new Node(data);
//     if (head == NULL) {
//         head = newNode;
//         tail = newNode;
//         return;
//     } else {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// // Function to reverse a linked list
// Node *reverse(Node *head) {
//     Node *curr = head;
//     Node *prev = NULL;
//     Node *next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }

// // Function to add two reversed linked lists
// Node *add(Node *first, Node *second) {
//     int carry = 0;
//     Node *ansHead = NULL;
//     Node *ansTail = NULL;

//     while (first != NULL || second != NULL || carry != 0) {
//         int val1 = 0;
//         if (first != NULL) {
//             val1 = first->data;
//             first = first->next;
//         }

//         int val2 = 0;
//         if (second != NULL) {
//             val2 = second->data;
//             second = second->next;
//         }

//         int sum = carry + val1 + val2;
//         int digit = sum % 10;
//         insertAtTail(ansHead, ansTail, digit);
//         carry = sum / 10;
//     }

//     return ansHead;
// }

// // Function to add two numbers represented by linked lists
// Node *addTwoLists(Node *first, Node *second) {
//     // Step 1: Reverse both linked lists
//     first = reverse(first);
//     second = reverse(second);

//     // Step 2: Add the reversed lists
//     Node *ans = add(first, second);

//     // Step 3: Reverse the result to get the final answer
//     ans = reverse(ans);

//     return ans;
// }

// // Helper function to print the linked list
// void printList(Node *head) {
//     while (head != NULL) {
//         cout << head->data;
//         if (head->next != NULL) cout << " -> ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     // Example: first = 4->5 (means 45), second = 3->4->5 (means 345)
//     Node *first = new Node(4);
//     first->next = new Node(5);

//     Node *second = new Node(3);
//     second->next = new Node(4);
//     second->next->next = new Node(5);

//     Node *result = addTwoLists(first, second); // 45 + 345 = 390

//     cout << "Result: ";
//     printList(result);

//     return 0;
// }

// Merge Sort using the linked list

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// node* Mid(node* head) {
//     if (head == NULL || head->next == NULL)
//         return head;

//     node* slow = head;
//     node* fast = head->next;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }

// node* merge(node* left, node* right) {
//     if (left == NULL) return right;
//     if (right == NULL) return left;

//     node* ans = new node(-1);
//     node* temp = ans;

//     while (left != NULL && right != NULL) {
//         if (left->data < right->data) {
//             temp->next = left;
//             left = left->next;
//         } else {
//             temp->next = right;
//             right = right->next;
//         }
//         temp = temp->next;
//     }

//     while (left != NULL) {
//         temp->next = left;
//         left = left->next;
//         temp = temp->next;
//     }

//     while (right != NULL) {
//         temp->next = right;
//         right = right->next;
//         temp = temp->next;
//     }

//     node* head = ans->next;
//     delete ans;
//     return head;
// }

// node* mergesort(node* head) {
//     if (head == NULL || head->next == NULL)
//         return head;

//     // Step 1: Find middle
//     node* mid = Mid(head);

//     // Step 2: Split into two halves
//     node* left = head;
//     node* right = mid->next;
//     mid->next = NULL; // 🔥 important line

//     // Step 3: Sort each half
//     left = mergesort(left);
//     right = mergesort(right);

//     // Step 4: Merge sorted halves
//     node* result = merge(left, right);
//     return result;
// }

// // Print Linked List
// void print(node* head) {
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     node* head = new node(5);
//     head->next = new node(2);
//     head->next->next = new node(8);
//     head->next->next->next = new node(1);
//     head->next->next->next->next = new node(3);

//     cout << "Original List: ";
//     print(head);

//     head = mergesort(head);

//     cout << "Sorted List: ";
//     print(head);

//     return 0;
// }

//  -----  reverse the string using the stack    ------

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// int main(){
//      stack <char> s;
//     string str= " vishw";

//     // push the string in the stack

//     for (int i = 0; i <str.length(); i++)
//     {
//          char ch = str[i];
//          s.push(ch);
//     }

//     string ans= "";
//     while (!s.empty())
//     {
//         ans.push_back(s.top());
//         s.pop();
//     }

//     cout<<" String IS   "<< ans;

// }

//   ----  Remove the middle element of stack ---------

// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int>&inputs,int count ,int size){
//     // base case

//     if (count==size/2)
//     {
//         inputs.pop();
//         return;
//     }

//     // recursive call;

//     int num = inputs.top();
//     inputs.pop();

//     solve(inputs,count+1,size);

//     inputs.push(num);

// }
// void deletemiddle(stack<int>&inputs, int size){

//     int count =0;

//     solve(inputs,count,size);
// }

// void printStack(stack<int> s) {
//     cout << "Stack (top to bottom): ";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main(){

//     stack <int> input;

//     input.push(10);
//     input.push(12);
//     input.push(13);
//     input.push(14);
//     input.push(15);
//     input.push(16);
//     input.push(17);

//     deletemiddle(input,7);

//     printStack(input);

// }

//   -----  Valid parenthesis    -----
// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// bool Validparenthesis(string expression) {
//     stack<char> s;

//     for (int i = 0; i < expression.length(); i++) {
//         char ch = expression[i];

//         // If opening bracket -> push
//         if (ch == '(' || ch == '{' || ch == '[') {
//             s.push(ch);
//         }
//         // If closing bracket -> check top and pop
//         else if (ch == ')' || ch == '}' || ch == ']') {
//             if (s.empty()) return false; // No matching opening bracket

//             char top = s.top();
//             if ((ch == ')' && top == '(') ||
//                 (ch == '}' && top == '{') ||
//                 (ch == ']' && top == '[')) {
//                 s.pop();
//             }
//             else {
//                 return false; // Mismatched pair
//             }
//         }
//     }

//     // If stack empty => all brackets matched
//     return s.empty();
// }

// int main() {
//     string expr;
//     cout << "Enter expression: ";
//     cin >> expr;

//     if (Validparenthesis(expr))
//         cout <<  "Valid Parenthesis" << endl;
//     else
//         cout << " Invalid Parenthesis" << endl;

//     return 0;
// }

//   Reverse the  stack elements   - - - -

// #include<iostream>
// #include<stack>
// using namespace std;

// // Function to insert element at the bottom of the stack
// void insertAtbottom(stack<int>& input, int element) {
//     // Base case: if stack is empty, push element
//     if (input.empty()) {
//         input.push(element);
//         return;
//     }

//     // Remove top element
//     int num = input.top();
//     input.pop();

//     // Recursive call
//     insertAtbottom(input, element);

//     // Push back the removed element
//     input.push(num);
// }

// // Function to reverse the stack
// void reversestack(stack<int>& input) {
//     // Base case
//     if (input.empty()) {
//         return;
//     }

//     // Remove top element
//     int num = input.top();
//     input.pop();

//     // Recursive call to reverse the remaining stack
//     reversestack(input);

//     // Insert removed element at the bottom
//     insertAtbottom(input, num);
// }

// int main() {
//     stack<int> s;

//     // Push some elements
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);

//     cout << "Original Stack (Top to Bottom): 4 3 2 1" << endl;

//     reversestack(s);

//     cout << "Reversed Stack (Top to Bottom): ";
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;

//     return 0;
// }

//    ------    Sort The stack    -------

// #include <iostream>
// #include <stack>
// using namespace std;

// void insertWithSort(stack<int> &s, int num) {
//     // Base case: if stack is empty OR top element < num
//     if (s.empty() || s.top() < num) {
//         s.push(num);
//         return;
//     }

//     int n = s.top();
//     s.pop();

//     // Recursive call
//     insertWithSort(s, num);

//     s.push(n);
// }

// void sortStack(stack<int> &s) {
//     // Base case
//     if (s.empty())
//         return;

//     int num = s.top();
//     s.pop();

//     // Recursive call
//     sortStack(s);

//     insertWithSort(s, num);
// }

// void printStack(stack<int> s) {
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> s;
//     s.push(5);
//     s.push(3);
//     s.push(9);
//     s.push(-1);
//     s.push(-8);
//     s.push(6);

//     cout << "Before sort (top to bottom): ";
//     printStack(s);

//     sortStack(s);

//     cout << "After sort (top to bottom): ";
//     printStack(s);

//     return 0;
// }

//   --   check the expression have redundant bracket or not    -----

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// bool IsRedundant(string Exp) {
//     stack<char> s;

//     for (int i = 0; i < Exp.length(); i++) {
//         char ch = Exp[i];

//         // If bracket or operator
//         if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             s.push(ch);
//         } else if (ch == ')') {
//             bool redundant = true;

//             // Check inside brackets
//             while (!s.empty() && s.top() != '(') {
//                 char top = s.top();
//                 if (top == '+' || top == '-' || top == '*' || top == '/')
//                     redundant = false;
//                 s.pop();
//             }

//             // Pop the opening bracket '('
//             if (!s.empty()) s.pop();

//             // If redundant remains true => redundant bracket found
//             if (redundant == true)
//                 return true;
//         }
//     }

//     return false;
// }

// int main() {
//     string exp = "((a+b))";
//     if (IsRedundant(exp))
//         cout << "Redundant brackets found!" << endl;
//     else
//         cout << "No redundant brackets." << endl;
//     return 0;
// }

//   Check for the valid expression or How many braces will require to reverse them

// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int BracketWrong(string str)
// {

//     // If length is odd → impossible to balance
//     if (str.length() % 2 == 1)
//         return -1;

//     stack<char> s;

//     // Step 1: Remove balanced parts
//     for (int i = 0; i < str.length(); i++)
//     {
//         char ch = str[i];

//         if (ch == '{')
//         {
//             s.push(ch);
//         }
//         else
//         { // ch == '}'
//             if (!s.empty() && s.top() == '{')
//             {
//                 s.pop(); // balanced pair
//             }
//             else
//             {
//                 s.push(ch); // unbalanced bracket
//             }
//         }
//     }

//     // Now stack contains only unbalanced brackets
//     int a = 0; // count of '{'
//     int b = 0; // count of '}'

//     while (!s.empty())
//     {
//         if (s.top() == '{')
//             a++;
//         else
//             b++;
//         s.pop();
//     }

//     // Formula for minimum reversals
//     int ans = (a + 1) / 2 + (b + 1) / 2;

//     return ans;
// }

// int main()
// {
//     int ans = BracketWrong("{{}}{}");
//     cout << "Answer : " << ans;
// }

// //  Find the Next smaller element

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// vector<int> smallerelment(vector<int> &num, int n)
// {

//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int curr = num[i];

//         while (s.top() >= curr)
//         {
//             s.pop();
//         }

//         ans[i] = s.top();
//         s.push(curr);
//     }

//     return ans;
// }

// int main()
// {

//     vector<int> s;
//     s.push_back(2);
//     s.push_back(1);
//     s.push_back(4);
//     s.push_back(3);

//     vector<int> r = smallerelment(s, 4);

//     for (int i = 0; i < r.size(); i++)
//     {
//         cout << r[i] << "  ";
//     }
// }


// Lagest rectangle in histogram 

// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int largestRectangle(vector<int>& heights) {
//     int n = heights.size();
//     stack<int> st;

//     int maxArea = 0;

//     for (int i = 0; i <= n; i++) {
//         int curr = (i == n ? 0 : heights[i]);

//         while (!st.empty() && curr < heights[st.top()]) {
//             int height = heights[st.top()];
//             st.pop();

//             int right = i;
//             int left = st.empty() ? -1 : st.top();

//             int width = right - left - 1;
//             maxArea = max(maxArea, height * width);
//         }

//         st.push(i);
//     }

//     return maxArea;
// }

// int main() {
//     vector<int> arr = {2,1,5,6,2,3};
//     cout << "Largest Rectangle: " << largestRectangle(arr);
//     return 0;
// }


// Celebirity problem 

// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;

// bool Knows(vector<vector<int>> &m,int a,int b,int n){
//     if (m[a][b]==1)
//     {
//         return true;

//     }
//     else{
//          return false;
//     }
    

// }

// int Celebrity(vector<vector<int>> &m,int n){
//     stack<int> s;

//     // push element on to stack

//     for (int  i = 0; i < n; i++)
//     {
//         s.push(i);
//     }

//     //  get the two top element

//     int a= s.top();
//     s.pop();

//     int b = s.top();
//     s.pop();

//     //  check the conditions 

//     if (Knows(m,a,b,n))
//     {
//         s.push(b);
//     }

//     else{
//         s.push(a);
//     }

//     //  ab last  candidate bacha h stack me  to usli row ko check kerna h  
//     bool RowCheck = false;
//     int candidate = s.top();
//     int rowCount =0;

//     for (int i = 0; i < n; i++)
//     {
//         if (m[candidate][i]==0)
//         {
//             rowCount++;
//         }
        
//     }

//     if (rowCount==n)
//     {
//         RowCheck= true;
//     }

// //    Check the  candidate  columns 

// bool CallCheck= false;
// int CallCount = 0;
    
//     for (int i = 0; i < n; i++)
//     {
//         if (m[i][candidate]==1)
//         {
//             CallCount++;
//         }
        
//     }

//     if (CallCount==n-1)
//     {
//         CallCheck= true;
//     }
    

//     if (CallCheck==true && RowCheck== true)
//     {
//         return candidate;
//     }
//     else{

//         return -1;
//     }
       
// }

// int main(){

//     vector<vector<int>> m ={{0,1,0},{0,0,0},{0,1,0}};

//     int ans = Celebrity(m,3);

//     cout<<" Celebrity  :  "<<ans;

// }

//  Problem creating k stack on the size of n array;

// #include<iostream>
// using namespace std;

// class Kstack{

//     private:

//      int n, k;
//      int *arr;
//      int *next;
//      int *top;
//      int freespot;

//      public:

//      // constructor 

//      Kstack(int K,int N){
//           n=N;
//           k=K;


          
//      arr= new int[n];
//      top= new int [k];
//      next= new int [n];

//      // initialize all stack as empty

//      for (int i = 0; i < k; i++)
//      {
//         top[i]=-1;
//      }
     

//      // initialize the freespots

//      for (int i = 0; i < n; i++)
//      {
//         next[i]= i+1;
//       }

//       next[n-1]=-1;

//       freespot= 0;


//      }


      
// void push(int x,int m){

//     if (freespot==-1)
//     {
//         cout<<" stack is overflow";
//         return;
//     }
    

//         // find the index
//         int index= freespot;

//         // freespot ko update kero;

//         freespot= next[index];

//         // insert in to array

//         arr[index]= x;

//         //  update next

//         next[index]=top[m-1];

//         // update the top
//         top[m-1]= index;

//         cout<<" Pushed in to Stack";

//     }


//     int pop(int m){

//         if (top[m-1]==-1)
        
//         {
//             cout<<" Stack is Underflow";
//         }
        
//         int index= top[m-1];

//         top[m-1]=next[index];

//         next[index]= freespot;

//         freespot= index;

//         return arr[index];
//     }
     
    

// };


// int main(){

//     Kstack ks(3,10);// 3 stack of 10 size array


//         ks.push(10, 1);
//     ks.push(20, 1);

//     ks.push(30, 2);
//     ks.push(40, 2);

//     ks.push(50, 3);

//     cout << "Popped from stack 1: " << ks.pop(1) << endl;
//     cout << "Popped from stack 2: " << ks.pop(2) << endl;



// }