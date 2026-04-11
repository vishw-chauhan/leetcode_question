// #include<iostream>
// using namespace std;
// int main (){

//     int n ;
//     cin>>n;
//    int  sum = 0;
//    int  mul = 1;
//    while(n!=0){

//     int digit = n%10;
//     mul = mul*digit;
//     sum = sum +digit;
//     n = n/10;  

//    }
//    cout<<mul<<endl;
//    cout<<sum;
// }


// #include <iostream>
// using namespace std;
// int main ()
// {
//     int num = 1;
//     switch (num)
//     {
//     case 0:
//         cout<<"it is o";
//         break;
//     case 1:
//          cout<<"it is one";
//            break;
    
//     default:
//     cout<<"it is default";
//         break;
//     }
// }



// #include <iostream>
// using namespace std;
// int main (){
//     int amount;
//     cout<<"Enter the total amount"<<endl;
//     cin>>amount;
//     int note100=0,note50=0,note20=0,note1=0;
//     int choice=1;
//     while (choice<=4)
//     {
//         switch (choice)
//         {
//         case 1:
//             note100= amount/100;
//             amount%=100;
//             break;
//         case 2:
//             note50=amount/50;
//             amount%=50;
//             break;  

//         case 3:
//             note20=amount/20;
//             amount%=20;
//             break;  
            
//         case 4:
//             note1=amount/1;
//             amount%=1;
//             break;      
        
//         }
//         choice++;
//     }

//     cout<<"Number of $100"<<"  "<<note100<<endl;
//     cout<<"Number of $50"<<"  "<<note50<<endl;
//     cout<<"Number of $20"<<"  "<<note20<<endl;
//     cout<<"Number of $1"<<"   "<<note1<<endl;
    
// }


// 

// #include <iostream>
// using namespace std;
// bool iseven(int num){
//     if (num&1)
//     {
//         return 0;
//     }
//     return 1;
    
// }
// int main (){
//     int a;
//     cin>>a;
//     if (iseven(a))
//     {
//         cout<<"This is even number"<<endl;

//     }
//     else{
//         cout<<"this is odd number"<<endl;
//     }
    

// }


// #include <iostream>
// using namespace std;
// int factorial(int num){
//     int fact= 1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact= fact*i;
//     }
//     return fact;
// }
// int ncr(int n , int r){

//     int num = factorial(n);
//     int dem = factorial(r)*factorial(n-r);
//     return num/dem;

// }
// int main(){

//     int n,r;
//     cin>>n>>r;
//     cout<<"The factoral of number"<<"  "<< ncr(n,r)<<endl;

// }


// #include <iostream>
// using namespace std;

// bool isprime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             return 0;
//         }
        
//     }
//     return 1;
    
// }
// int main(){

//     int n;
//     cin>>n;
//     if(isprime(n)){
//         cout<<"This is prime number"<<endl;

//     }
//     else{
//         cout<<"this is not prime number"<<endl;
//     }

// }

// Write a program for bineary search

// #include <iostream>
// using namespace std;

// int binearysearch(int arr[], int n, int size) {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2; // Calculate once per iteration

//         if (arr[mid] == n) {
//             return mid;
//         }
//         else if (arr[mid] > n) {
//             end = mid - 1;
//         }
//         else {
//             start = mid + 1;
//         }
//     }

//     return -1; // Not found
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int result = binearysearch(arr, 3, 5);

//     if (result != -1)
//         cout << "The value found at index: " << result;
//     else
//         cout << "Value not found";
// }

// In bineary search first occurance or last occurance of the element in repeated numbers

// #include <iostream>
// using namespace std;

// int firstOccur(int arr[], int key, int size) {

//     int start = 0, end = size - 1, ans = -1;

//     while (start <= end) {

//         int mid = start + (end - start) / 2;

//         if (arr[mid] == key) {
//             ans = mid;
//             end = mid - 1; // move left
//         } 
//         else if (arr[mid] > key) {
//             end = mid - 1;
//         } 
//         else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int lastOccur(int arr[], int key, int size) {

//     int start = 0, end = size - 1, ans = -1;

//     while (start <= end) {

//         int mid = start + (end - start) / 2;
        
//         if (arr[mid] == key) {
//             ans = mid;
//             start = mid + 1; // move right
//         } 
//         else if (arr[mid] > key) {
//             end = mid - 1;
//         } 
//         else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[7] = {1, 2, 3, 3, 3, 4, 4}; // sorted array

//     int first = firstOccur(arr, 3, 7);
//     int last = lastOccur(arr, 3, 7);

//     cout << "First occurrence of 3: " << first << endl;
//     cout << "Last occurrence of 3: " << last << endl;

//     return 0;
// }


// Find the peak element in an array using binary search method

// #include <iostream>
// using namespace std;

// int peakelement(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;

//     while (start < end) {
//         if (arr[mid] < arr[mid + 1]) {
//             start = mid + 1;
//         } else {
//             end = mid;
//         }
//         mid = start + (end - start) / 2;  // just update, don’t redeclare
//     }
//     return start; // returning index of peak
// }

// int main() {
//     int arr[5] = {1, 2, 3, 2, 1};

//     int result = peakelement(arr, 5);

//     cout << "The maximum element is: " << arr[result];
// }

// find the pivot element is the array using binary search method

// #include <iostream>
// using namespace std;

// int pivotelement(int arr[],int size){

//   int start=0;
//   int end = size-1;

//   int mid ;
  

//   while (start<end)
//   {
//      mid = start+(end-start)/2;
//       if (arr[mid]>=arr[0])
//       {
//          start = mid+1;
//       }
      
//       else{
//         end=mid;
//       }
//   }
//    return end;
// }
// int main(){

//   int arr[5]={7,9,1,2,3};

//   int result= pivotelement(arr,5);
//   cout<<" the pivot element index is "<<result;

//   cout << " the pivot element is "<<arr[result];

// }


// Search in the sorted array using the binary search


// #include <iostream>
// using namespace std;

// int pivotelement(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     int mid;

//     while (start < end) {

//         mid = start + (end - start) / 2;

//         if (arr[mid] >= arr[0]) {
//             start = mid + 1;

//         } else {
//             end = mid;
//         }
//     }
//     return start; // pivot index
// }

// int binarysearch(int arr[], int start, int end, int n) {

//     while (start <= end) {
//         int mid = start + (end - start) / 2;


//         if (arr[mid] == n) {
//             return mid;

//         } 
//         else if (arr[mid] > n) {
//             end = mid - 1;
//         } 
//         else {
//             start = mid + 1;
//         }
//     }
//     return -1; // Not found
// }

// int correctelement(int arr[], int n, int size) {

//     int pivot = pivotelement(arr, size);

//     if (n >= arr[pivot] && n <= arr[size - 1]) {
//         // search in right part
//         return binarysearch(arr, pivot, size - 1, n);
//     }
//      else {
//         // search in left part
        
//         return binarysearch(arr, 0, pivot - 1, n);
//     }
// }

// int main() {
//     int arr[5] = {7, 9, 1, 2, 3};
//     int size = 5;
//     int target = 2;

//     int result = correctelement(arr, target, size);

//     if (result != -1)
//         cout << "Element found at index: " << result << endl;
//     else
//         cout << "Element not found." << endl;

//     return 0;
// }


// Square root of the number using the binary search method 
// #include<iostream>
// using namespace std;

// long long int binarysearch(int n) {
//     int start = 0;
//     int end = n - 1;
//     long long int ans = -1;

//     while (start <= end) {
//         long long int mid = start + (end - start) / 2;
//         long long int square = mid * mid;

//         if (square == n) {
//             return mid;  // perfect square root
//         }
//         else if (square < n) {
//             ans = mid;       // store possible answer
//             start = mid + 1; // search right half
//         }
//         else {
//             end = mid - 1;   // search left half
//         }
//     }
//     return ans; // floor of sqrt(n)
// }

// double moreprecision(int n, int precision, int tempSol) {
//     double factor = 1;
//     double ans = tempSol;

//     for (int i = 0; i < precision; i++) {
//         factor = factor / 10;

//         // check decimals with factor
//         for (double j = ans; j * j <= n; j = j + factor) {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main() {
//     long long int intPart = binarysearch(26);
//     cout << "The square root (integer part) is: " << intPart << endl;

//     double preciseResult = moreprecision(26, 4, intPart);
//     cout << "The square root with precision is: " << preciseResult << endl;

//     return 0;
// }


// Selection sort algorithm

// #include <iostream>
// using namespace std;

//  void selectionsort(int arr[],int n ){


//      for (int i = 0; i <n-1 ; i++)
//     {
//         int minindex=i;
//         for (int j = i+1; j< n; j++)
//         {
//             if (arr[minindex]>arr[j])
//             {
//                 minindex=j;
//             }
            
//         }
//         swap(arr[i],arr[minindex]);
    
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    

    
// }

// int main(){

//     int arr[6]={5,7,1,3,9,4};

//     selectionsort(arr,6); 
    
// }

// Bubble sort 

// #include <iostream>
// using namespace std;

// void bubblesort(int arr[],int n){

//     for (int  i = 1; i < n; i++)
//     {
//         // this loop for thr rounds
//          bool swapper= false;
//         for (int j = 0; j < n-i; j++)
//         {
//             // This loop for thr swaping of elements

//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                  swapper = true;
//             }
            
//         }
//         if (swapper==false)
//         {
//             break;
//         }
        
//     }

//     // this loop for the printing

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
    
// }

// int main(){

//     int arr[10]={3,7,9,34,2,8,5,1,5,7};

//     bubblesort(arr,10);
// }



// Insertion sort

// #include <iostream>
// using namespace std;

// void insertionsort(int arr[],int n){

//     for (int i = 1; i < n; i++)
//     {  

//         int temp = arr[i];
//         int j = i-1;
//         for (; j >=0; j--)
//         {
//              if (arr[j]>temp)
//              {
//                 arr[j+1]= arr[j];
//              }
//              else{
//                 break;
//              }
//         }
//          arr[j+1]= temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//        cout<<arr[i]<<endl;
//     }
    
    
// }
// int main(){

//     int arr[6]={6,3,1,5,4,2};

//     insertionsort(arr,6);
// }


   //   Stl In one shot

   // #include <iostream>
   // #include <array>
   // #include <vector>
   // #include <list>

   // #include <queue>

   // using namespace std;

   // int main(){

      // array<int,2> a ={1,2};

      // vector<int> v={1,2,3,4};

      // cout<<v[0];

      // cout<<a[0];
      // cout<<a.size();

      // list <int> l;

      // l.push_back(1);
      // l.push_front(2);

      // for(int i: l){
      //    cout<<i;


      // }
      // // max- heap
      // priority_queue<int> p;

      // // Min - Heap

      // priority_queue<int,vector<int>,greater<int>>mini ;

      // mini.push(1);
      // mini.push(2);
      // mini.push(3);
      // mini.push(4);

   
   //    for (int  i = 0; i < 4; i++)
   //    {
   //       cout<<mini.top();
   //       mini.pop();
   //    }
   //    cout<<endl;
   // }


   // Map data structure

   // #include <iostream>
   // using namespace std;

   // #include <map>
   // int main(){

   //    map<int,string> m ;

   //    m[1]="love";

   //    m[2]="babbar";

   //    for(auto i:m){

   //       cout<<i.first<<i.second;
   //    }



   // }


   // creating the 2d array 

   // #include<iostream>
   // using namespace std;
   // int main(){
   //    int arr[3][4];

   //    // taking row wise input

   //    for (int i = 0; i < 3; i++)
   //    {
   //       for (int j = 0; j < 4; j++)
   //       {
   //          cin>>arr[i][j];
   //       }
         
   //    }


   //    // taking the column wise input

   //    for (int i = 0; i < 4; i++)
   //    {
   //    for (int j = 0; j < 3; j++)
   //    {
   //       cin>>arr[j][i];
   //    }
      
   //    }

   //    // print the 2-D array

   //    for (int i = 0; i < 3; i++)
   //    {
   //       for (int j = 0; j < 4; j++)
   //       {
   //          cout<<arr[i][j]<<" ";
   //       }
   //       cout<<endl;
         
   //    }
       
   // }

//  find the largest sum in the row wise and return the index
   
   // #include<iostream>
   // using namespace std;

   // int findlargestindex(int arr[3][4],int n ,int m){

   //    int sum = 0;
   //    int maxi = 0;
   //    int index=0;

   //    for (int i = 0; i < n; i++)
   //    {
   //       for (int j = 0; j < m; j++)
   //       {
   //          sum = sum+ arr[i][j];
   //       }
         
   //       if (sum>maxi)
   //       {
   //          maxi=sum;
   //          index= i;
   //       }
         
   //    }

   //    cout<<"The  sum of the largest row is :"<<maxi<<endl;
   //    return index;
      
   // }
   // int main(){
   //    int arr[3][4];

   //    // taking row wise input

   //    for (int i = 0; i < 3; i++)
   //    {
   //       for (int j = 0; j < 4; j++)
   //       {
   //          cin>>arr[i][j];
   //       }
         
   //    }

   //    int ans = findlargestindex(arr,3,4);
   //    cout<<" the index is :"<<ans ;

   // }

   //   Pointers 

   // #include<iostream>
   // using namespace std;
   // int main(){


   //    int n = 5;

   //    int *ptr = &n;

   //    cout<<endl;
   
   //    cout<<*ptr<<endl;

   //    *ptr = *ptr*2;
   //    cout<<*ptr<<endl;

   //    int i=3;

   //    int *p = &i;

   //    cout<<(*p)++<<endl;
   //    cout<<*p<<endl;
   //    cout<<++(*p);
   // }


   // #include<iostream>
   // using namespace std;
   // int main(){

   //    int arr[10]={1,2,3};

   //    int *ptr= arr;
   //    cout<<*ptr<<endl;

   //     cout<<*ptr+1<<endl;

   //      cout<<*(ptr+2)<<endl;
   // }


   // Charcter array

   // #include<iostream> 
   // using namespace std;
   // int main(){
   //            // That shown an error
   //   //  char ch [5]="abcde";

   //   char ch[6] ="abde";

   //   char *p = &ch[1];
   //   cout<<*p<<endl;

   //   cout<<p<<endl;

   // }

   // function In pointer
// #include <iostream>
// using namespace std;

// void printfunction(int *p) {
//     cout << "Pointer address: " << p << endl;   // prints the memory address
//     cout << "Value: " << *p << endl;           // prints the value stored
// }

// void update(int *p){

//   * p= *p+1;

//    cout<<"Inside "<<  p;
// }

// int getsum(int *arr,int n){
// int sum =0;
//    for (int i = 0; i < n; i++)
//    {  
//       sum += arr[i];  
//    }

 //  cout<<"The sum Is "<<"  "<<sum<<endl;
   // return sum;   
// }

// int main() {
   //  int value = 5;
   //  int *p = &value;

   //  printfunction(p);       // passing pointer
   //  printfunction(&value);  // passing address of variable

   //  cout<<"before"<<*p<<endl;

   //  update(&value);

   //  cout<<"After"<<*p;

//    int arr[9]={1,2,3,4,4,5,6,7,8};

//   int result =  getsum(arr+2,8);

//   cout<<result;

//  return 0;

    
// }

// Double pointer 

// #include<iostream>
//  using namespace std ;
//  int main(){

//    int value = 5;

//    int *ptr = &value;

//    int **ptr2 = &ptr;

//    int ***ptr3 = &ptr2;

//    cout<<value<<endl;

//     cout<<&value<<endl;

//      cout<<ptr<<endl;
//       cout<<*ptr<<endl;
//        cout<<*ptr2<<endl;
//         cout<<**ptr2<<endl;
//          cout<<**ptr3<<endl;
//  }


// #include<iostream>
// using namespace std;

// void update(int **p){

//    // kya kuch hoga??   NO

//   // p = p+1;

//    // kya kuch hoga ??  Yes
//   // *p = *p +1;

// // Kya kuch hoga ?? Yes

//   **p = **p +1;
// }
// int main(){

//    int i = 5;
//    int *p = &i;

//    int **p2 = &p;

//    cout<<"Before"<<endl;

//    cout<<i<<endl;
//    cout<<p<<endl;
//    cout<<p2<<endl;

//    update(p2);
//     cout<<"After"<<endl;

    
//    cout<<i<<endl;
//    cout<<p<<endl;
//    cout<<**p2<<endl;
// }

//  #include<iostream>
//  using namespace std ; 

//  void update(int &n){// In which the value passe dby referance in which we allocate another name of the same value or adderes

//    n++;
//  }
//  int main (){

//    int n = 5; 
// //    int &j = i;

// //    cout <<i <<endl ;
// //    i ++;
// //    cout<<i<<endl;
// //   j++;
// //    cout<<i<<endl;
// cout<<n<<endl;
//        update(n);

//        cout<<n;


//  }

// int arr[n]:-  That type of size declaration is dangerous 

// so we  declare in the heap using new keyword  as: - new char;  :-  This return the address,,::  After that we use in pointer because pointer hold the address

// like this :- char* ptr = new char;
 
// // heap allocation 
// #include<iostream>
// using namespace std;

// int grtsum(int *p, int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += p[i];
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cout << "Enter the size: ";
//     cin >> n;   // ✅ read input before allocation

//     int *p = new int[n];   // allocate array dynamically

//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> p[i];
//     }

//     int result = grtsum(p, n);

//     cout << "The sum is: " << result << endl;

//     delete[] p;  // ✅ free heap memory
//     return 0;
// }
