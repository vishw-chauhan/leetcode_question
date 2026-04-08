// Fibnoii series

// #include<iostream>
// using namespace std ;

// int fibnoii(int n){

//     if (n==0)
//     {
//         return 0;
//     }
//     if (n==1)
//     {
//         return 1;
//     }
//     int ans = fibnoii(n-1)+fibnoii(n-2);

//     return ans ;
    
    
// }
// int main(){

//     int n ;
//     cin>> n;

//    int result = fibnoii(n);
//    cout<<result;
// }

// Climb stairs

// #include<iostream>
// using namespace std ;

// int stairs(int n){

//     if (n<0)
//     {
//         return 0;
//     }
//     if (n==0)
//     {
//         return 1;
//     }

//     int ans = stairs(n-1)+stairs(n-2);

//     return ans ;
    
    
// }
//  int main(){

//     int n ;
//     cin>>n;
// int result = stairs(n);
// cout<<result;

//  }

// Say numbers

// #include<iostream>
// #include<string>
// using namespace std;

// void saynumber(string arr[], int n) {
//     if (n == 0)
//         return;

//     int digit = n % 10;
//     n = n / 10;
//     saynumber(arr, n);  // Pass arr along with n
//     cout << arr[digit] << endl;
// }
// int main(){

//     int n;
//     cin>>n;

//       string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//       saynumber(arr,n);
      
// }

// Find that the array is sorted or not using Recursion---

// #include<iostream>
// using namespace std;

// bool sorted(int arr[],int size){

//     if (size==0||size==1)
//     {
//         return true;
//     }
   
//     if (arr[0]>arr[1])
//     {
//         return false;
//     }

//     return sorted(arr+1,size-1);
    
    
    
    
// }
// int main(){

//     int arr[6]={1,2,3,4,5,6};

//     bool result = sorted(arr,6);
//     cout<<result;
// }

// Using recursion solve the sumation of array--

// #include<iostream>
// using namespace std;
// int sum(int arr[],int size){

//     if (size==0)
//     {
//         return 0;
//     }
//     return arr[size-1]+sum(arr,size-1);

    
// }


// int main(){

//     int arr[5]={1,2,3,4,5};

//     int result = sum(arr,5);
//     cout<<result;


// }

// Using Recursition solve the linear search in the array--

// #include<iostream>
// using namespace std;

// bool linearsearch(int arr[],int size,int key){

//     if (size==0)
//     { 
//       return false;

//     }

//     if (arr[0]==key)
//     {
//         return true;
//     }

//     return linearsearch(arr+1,size-1,key);
    
    
// }
// int main(){
// int arr[10]= {1,2,3,4,5,6,7,8,9,0};

// bool result = linearsearch(arr,10,4);

// if (result)
// {
//     cout<<" the element is found";
// }
// else{
 
//     cout<<" Not found";
// }




// }

// Binary Search using the recursion --

// #include<iostream>
// using namespace std;

// int binarysearch(int arr[],int start,int end,int key){

//     if (start>end)
//     {
//         return -1;
//     }
    
//      int mid = (start+end)/2; 
//     if (arr[mid]==key)
//     {
//         return mid;
//     }

//     else if (arr[mid]>key)
//     {
//            cout<<"round"<<endl;
//      return   binarysearch(arr,start,mid-1,key);
//     }
//     else{

//            cout<<"round"<<endl;

//         return  binarysearch(arr,mid+1,end,key);
//     }
 
    
// }
// int main(){

//     int arr[10]= {1,2,3,4,5,6,7,8,9,0};

//     int resuult= binarysearch(arr,0,9,5);

//     cout<<resuult;
// }


// Swap the string using the recursion 

// #include<iostream>
// #include<string>
// using namespace std;

// // Reverse the string using recursion
// void reverse(string &str, int i, int j) {
//     if (i >= j) {
//         return;
//     }

//     swap(str[i], str[j]);
//     reverse(str, i + 1, j - 1);
// }

// int main() {
//     string r = "vishwendrachauhan";

//     int start = 0;
//     int end = r.length() - 1;

//     reverse(r, start, end);

//     cout << "Reversed string: " << r << endl;

//     return 0;
// }

// Optimized solution in which we use only one varible will pass in it 

// #include<iostream>
// #include<string>
// using namespace std;

// void reverse(string &str,int i){

//     int j = str.length()-1-i;

//     if (i>=j)
//     {
//         return;
//     }

//     swap(str[i],str[j]);

//     reverse(str,i+1);
    
// }

// int main(){

//     string r= "chauhanthakur";

//     int start =0;
//     reverse(r,start);
//     cout<<" reverse string is  : "<<r;


// }

// Check pallindrome ---

// #include<iostream>
// #include<string>
// using namespace std;

// bool pallindrome(string str,int i ,int j){

//     if (i>=j)
//     {
//         return true;
//     }
//     if (str[i]!=str[j])
//     {
//         return false;
//     }

//     else{

//         return pallindrome(str,i+1,j-1);
//     }
    
    
// }
// int main(){

//     string r= "aaabbaaa";

//     int i =0;
//     int j =r.length()-1;

//    bool result = pallindrome(r,i,j);
//    cout<<"The ans is : "<<(result?"is pallindrome":"not pallindome");


// }


// power of number using recursion with optimized solution 

// #include<iostream>
// using namespace std;

// int power(int a,int b){

//     if (b==0)
//     {
//         return 1;
//     }

//     if (b==1)
//     {
//         return a;
//     }
//     int ans = power(a,b/2);

//     if (b%2==0)
//     {
//         // Even case
//         return ans *ans;
//     }

//     else{
//         // odd case

//         return a*ans *ans;
//     }
    
    
// }

// int main(){


//     int a,b;
//     cin>>a>>b;
//     int result = power(a,b);

//     cout<<"the answer is : "<<result;
// }


// solve the bubble sort using the recursition--

// #include<iostream>
// using namespace std;

// void bubblesort(int *arr,int size){

//     if (size<=1)
//     {
//         return;
//     }
//     for (int i = 0; i < size-1; i++)
//     {
//         if (arr[i]>=arr[i+1])
//         {
//              swap(arr[i],arr[i+1]);
//         }

//         bubblesort(arr,size-1);
        
//     }
    
// }


// int main(){

//     int arr[10]={7,1,4,6,7,8,9,3,2,0};

//     bubblesort(arr,10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    


// }


// solve Insertion sort using recursition--


// #include<iostream>
// using namespace std;

// void recursionsort(int arr[], int size) {
//     if (size <= 1)
//         return;

//     // Sort first size-1 elements
//     recursionsort(arr, size - 1);

//     // Insert last element at its correct position
//     int last = arr[size - 1];   // Corrected index from size-2 to size-1
//     int j = size - 2;

//     while (j >= 0 && arr[j] > last) {
//         arr[j + 1] = arr[j];
//         j--;
//     }
//     arr[j + 1] = last;
// }

// int main() {
//     int arr[5] = {5, 3, 8, 4, 2};

//     recursionsort(arr, 5);

//     cout << "Sorted array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }


// Solve Selection sort using recursition--
// #include<iostream>
// using namespace std;

// // Function to find index of minimum element in arr[start...size-1]
// int findMinIndex(int arr[], int start, int size) {
//     if (start == size - 1)
//         return start;

//     int min_index = findMinIndex(arr, start + 1, size);
//     return (arr[start] < arr[min_index]) ? start : min_index;
// }

// // Recursive selection sort
// void selectionsort(int arr[], int size, int start = 0) {
//     if (start >= size - 1)
//         return;

//     int min_index = findMinIndex(arr, start, size);
//     swap(arr[start], arr[min_index]);

//     selectionsort(arr, size, start + 1);
// }

// int main() {
//     int arr[5] = {5, 3, 8, 4, 2};

//     selectionsort(arr, 5);

//     cout << "Sorted array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

// Power set---------------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// private:
//     void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans) {
//         // base case
//         if (index >= nums.size()) {
//             ans.push_back(output);
//             return;
//         }

//         // exclude current element
//         solve(nums, output, index + 1, ans);

//         // include current element
//         output.push_back(nums[index]);
//         solve(nums, output, index + 1, ans);
//     }

// public:
//     vector<vector<int>> subsets(vector<int> &nums) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1, 2, 3};

//     vector<vector<int>> result = obj.subsets(nums);

//     cout << "Power set:\n";
//     for (auto subset : result) {
//         cout << "{ ";
//         for (int num : subset) {
//             cout << num << " ";
//         }
//         cout << "}\n";
//     }

//     return 0;
// }

// Phone keypad problem using recursion


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// private:
//     void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
//         // base case
//         if (index >= digit.length()) {
//             ans.push_back(output);
//             return;
//         }

//         int number = digit[index] - '0';  // convert char to int
//         string value = mapping[number];

//         for (int i = 0; i < value.length(); i++) {
//             output.push_back(value[i]);
//             solve(digit, output, index + 1, ans, mapping);
//             output.pop_back(); // backtrack
//         }
//     }

// public:
//     vector<string> letterCombination(string digit) {
//         vector<string> ans;
//         if (digit.length() == 0) {
//             return ans;
//         }

//         string output = "";
//         string mapping[10] = {
//             "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
//         };

//         solve(digit, output, 0, ans, mapping);
//         return ans;
//     }
// };

// int main() {
//     Solution s;
//     string digits = "23";
//     vector<string> result = s.letterCombination(digits);

//     cout << "Combinations for " << digits << ": ";
//     for (auto str : result) {
//         cout << str << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {

// private:
//     void solve(vector<int>& nums, int index, vector<vector<int>>& ans) {
//         if (index >= nums.size()) {
//             ans.push_back(nums);
//             return;
//         }

//         for (int j = index; j < nums.size(); j++) {
//             swap(nums[index], nums[j]);
//             solve(nums, index + 1, ans);
//             swap(nums[index], nums[j]); // backtrack
//         }
//     }    

// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;   // must be 2D
//         int index = 0;
//         solve(nums, index, ans);
//         return ans;
//     }
// };

// int main() {
//     Solution s;
//     vector<int> nums = {1,2,3};
//     vector<vector<int>> result = s.permute(nums);

//     for (auto v : result) {
//         for (int x : v) cout << x << " ";
//         cout << endl;
//     }
//     return 0;
// }



// Rat in a maze question ----

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution {
// public:
//     void solve(vector<vector<int>> &m, int n, vector<string> &ans, 
//                int x, int y, vector<vector<int>> &visited, string path) {
        
//         // if destination is reached
//         if (x == n - 1 && y == n - 1) {
//             ans.push_back(path);
//             return;
//         }

//         // movement arrays (Down, Left, Right, Up)
//         int dx[] = {1, 0, 0, -1};
//         int dy[] = {0, -1, 1, 0};
//         char dir[] = {'D', 'L', 'R', 'U'};

//         for (int k = 0; k < 4; k++) {
//             int newx = x + dx[k];
//             int newy = y + dy[k];

//             // check validity
//             if (newx >= 0 && newx < n && newy >= 0 && newy < n 
//                 && m[newx][newy] == 1 && !visited[newx][newy]) {
                
//                 visited[newx][newy] = 1;
//                 solve(m, n, ans, newx, newy, visited, path + dir[k]);
//                 visited[newx][newy] = 0; // backtrack
//             }
//         }
//     }

//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         vector<string> ans;
//         if (m[0][0] == 0) return ans; // start blocked

//         vector<vector<int>> visited(n, vector<int>(n, 0));
//         visited[0][0] = 1;

//         string path = "";
//         solve(m, n, ans, 0, 0, visited, path);
//         sort(ans.begin(), ans.end()); // sort results
//         return ans;
//     }
// };

// int main() {
//     int n = 4;
//     vector<vector<int>> m = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     Solution obj;
//     vector<string> result = obj.findPath(m, n);

//     if (result.empty()) {
//         cout << "No path found!" << endl;
//     } else {
//         for (auto &p : result) cout << p << " ";
//         cout << endl;
//     }

//     return 0;
// }


// Reverse a linked list 


// #include <iostream>
// using namespace std;

// class node {
// public:  // <-- Make members public

//     int data;
//     node *next;

//     // Constructor
//     node(int data) {
//         this->data = data;
//         this->next = nullptr;
//     }

//     // Function to insert at head
//     static void insertathead(node *&head, int data) {
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }

//     // Function to print list
//     static void print(node *head) {
//         node *temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << "  ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }


//     // Reverse the linked list 

//     static void reverse(node *&head){

//         node * prev = NULL;
//         node * curr= head;

//         while (curr!= NULL)
//         {
//              node * forward = curr->next;

//              curr->next= prev;
//              prev= curr;
//              curr= forward;
//         }
        
       
//       head= prev;

//     }
// };

// int main() {
//     node* head = new node(10);

//     node::insertathead(head, 12);
//     node::insertathead(head, 15);
//     node::insertathead(head, 20);

//     cout << "Linked List: ";
//     node::print(head);

//     node::reverse(head);
//     node::print(head);

//     return 0;
// }



//  Finding the middle of the linked list

// #include<iostream>
// using namespace std;

//  class node{

//         public:

//         int data;
//         node * next;

//         node(int data){
//             this->data= data;
//             this->next= NULL;
//         }


//         static void insertathead(node *&head,int data){

//             node *temp = new node(data);

//             temp->next=head;
//             head = temp;
//         }


//         static void print(node *&head){

//             node * temp = head;
//             while (temp!=NULL)
//             {
//                 cout<<temp->data<<"  ";
//                 temp = temp->next;
//             }
            
//         }


//         static void findMiddle(node *&head){

//             if (head==NULL)
//             {
//                 cout<<" This list is empty"<<endl;
//             }

//             node * slow= head;
//             node * fast= head;


//             // move fast by the 2 step and slow by the  1 step 

//             while (fast!=nullptr && fast->next!= nullptr)
//             {
//                 slow= slow->next;
//                 fast= fast->next->next;
//             }
            
//             cout<<" the middle is   "<<slow->data;
//         }

//     };

// int main(){
   

//         node* head = new node(10);
//     node::insertathead(head, 20);
//     node::insertathead(head, 30);
//     node::insertathead(head, 40);
//     node::insertathead(head, 50);

//     cout << "Linked List: ";
//     node::print(head);

//     node::findMiddle(head);

//     return 0;
// }


//  Reverse the linked list in The K order 

// #include<iostream> 
// using namespace std;

// class node {
//     public:
//     int data ;
//     node * next;

//     node (int data){
//         this->data= data;
//         this->next= nullptr;
//     }


//        static void insertathead(node *&head, int data) {
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }

//     static void print(node *head) {
//         node *temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }


//     // function to reverse the linked list in k order

//     static node * reverseKGroup(node * head,int k ){

//         if (head== nullptr) return nullptr;

//         node * curr= head;
//         node * prev= nullptr;
//         node * next= nullptr;

//         int count = 0;

//         // step  1 reverse the first k node 

//         while (curr!= nullptr &&  count<k)
//         {
//               next = curr->next;
//               curr->next= prev;
//               prev = curr;
//               curr= next;
//               count++;
//         }

//         //  step 2 reverse the remaining linked list using recursion

//         if (next!= nullptr)
//         {
//             head->next= reverseKGroup(next,k);

//         }
        
        
//        return prev;

//     }



// };

// int main(){

//      node* head = nullptr;

//     // Insert elements (head insertion → reversed order)
//     node::insertathead(head, 8);
//     node::insertathead(head, 7);
//     node::insertathead(head, 6);
//     node::insertathead(head, 5);
//     node::insertathead(head, 4);
//     node::insertathead(head, 3);
//     node::insertathead(head, 2);
//     node::insertathead(head, 1);

//     cout << "Original Linked List: ";
//     node::print(head);

//     int k = 3;
//     head = node::reverseKGroup(head, k);

//     cout << "Linked List reversed in groups of " << k << ": ";
//     node::print(head);

//     return 0;

// }


//   Check That the list is circular linked list or not 

// #include<iostream>
// using namespace std;

//  class node {

//         public:

//         int data;
//         node * next;

//         node (int data){
//             this->data= data;
//             this->next = nullptr;

//         }

        
//     static void insertathead(node *&head, int data) {
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }

//     static void print(node *head) {
//         node *temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }


//     // check for the last node is connected to the head or not

//     static bool isCircular(node * head){

//         if (head== nullptr)
//         {
//             return false;
//         }

//         node * temp = head->next;

//         while (temp!=nullptr && temp != head)
//         {
//             temp = temp->next;
//         }
        

//         if (temp== head)
//         {
//             return true;

//         }

//         else{
//             return false;
//         }
        
        
//     }


//     };


// int main() {
//     node* head = new node(10);
//     node::insertathead(head, 20);
//     node::insertathead(head, 30);
//     node::insertathead(head, 40);

//     // ❌ By default list is not circular
//     cout << "Is circular? " << (node::isCircular(head) ? "Yes" : "No") << endl;

//     // ✅ Now manually make it circular
//     head->next->next->next->next = head;  // last node points to head

//     cout << "After making circular: " << (node::isCircular(head) ? "Yes" : "No") << endl;

//     return 0;
// }