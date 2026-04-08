// # include <iostream>
// # include <string>
// #include <cmath>
// using namespace std ;
// int binarytodecimal(string binary){
//     int decimal = 0;
//     int length = binary.length();
//     for(int i=0;i<length;i++){
//         if(binary[length-i-1]=='1'){
//             decimal = decimal+pow(2,i);
//         }else if (binary[length-i-1]!='0'){
//             cout<<"invalid character detected"<<binary[length-i-1]<<endl;
//             return -1;

//         }   
//     }
//     return decimal;
// }
// int main(){
//     string binaryinput;
//     cin>>binaryinput;
//     int result = binarytodecimal(binaryinput);
//     if (result!=-1){
//         cout<<"the decimal equivalent of the number is "<<result<<endl;
//     }
//     else{
//         cout<<"conversion falilded due to the inavalid input"<<endl;
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//      cin>>n;
//      int ans= 0;
//      while(n!=0){
//         if((n>INT32_MAX)||(n<INT32_MIN))
//         {
//             cout<<"invalid";
//         }
//           else{
//             int digit=n%10;
//             ans = (ans*10)+digit;
//             n= n/10;

//         }
       
        
//      }
//      cout<<ans;
// }


// #include <iostream>
// using namespace std;
// int main (){
//     int n ;
//     cin>>n;
//     int mask=0;
//      if (n==0)
//      {
//         cout<<"this will not allowed";
//      }
//     else{
//         int m = n;
//         while(m!=0){
//             mask= (mask<<1)|1;
//              m = m>>1;
//         }
//       int ans= (~n)& mask;
//       cout<<ans;

//     } 
// }


// #include <iostream>
// #include <math.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     for (int i = 0; i < 30; i++)
//     {
//         int ans= pow(2,i);
//         if (ans==n)
//         {
//             cout<<"true";
//             break;
//         }
//         else{
//             cout<<"false";
//             break;
//         }
        
//     }
    
// }



// #include <iostream>
// using namespace std;

//  int Ap(int n){
//     return (3*n+7);
//  }

//  int main (){
//   int n;
//   cin>>n;
//   int ans=Ap(n);
//   cout<<ans<<endl;


//  }


// #include <iostream>
// using namespace std;
// int countsetbits(int n){
//     int count = 0;
//     while (n)
//     {
//         count+=(n&1);
//         n>>=1;
//     }
//     return count;
// }
// int main(){
  
//    int a,b;
//    cout<<"Enter the value of A"<<endl;
//    cin>>a;
//    cout<<"Enter the value of B"<<endl;
//    cin>>b;
//    int result = a&b;
//    int setbits= countsetbits(result);
//    cout<<setbits<<endl;


// }


// #include <iostream>
// using namespace std;
// void fibnoii(int n){
//     int a=0;
//     int b=1;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     for ( int i = 3; i <= n; i++)
//     {
//         a=b;
//         b=a+b;
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }
    
// }

// int main(){
// int a;
// cin>>a;
// fibnoii(a);
  

// }

// Linear search program

// #include <iostream>
// using namespace std;

// bool linearsearch(int brr[],int key){
//     for (int i = 0; i <5; i++)
//     {
//         if (brr[i]==key)
//         {
//             return 1;
//         }
        
//     }
//     return 0;
    
// }
// int main(){
//     int arr[5]= {1,2,3,4,5};
//     int key;
//     cout<<"enter the search element"<<endl;
//     cin>>key;
//     bool found= linearsearch(arr,key);
//     if (found)
//     {
//         cout<<"the element is found"<<endl;

//     }
//     else{
//         cout<<"the element is not found";
//     }
    


// }

// Reversing an array

// #include <iostream>
// using namespace std;

// void printarray(int brr[],int n){
       
//    for (int  i = 0; i < 5; i++)
//    {
//       cout<<brr[i];
//    }
//    cout<<endl;
// }
    
// void reverse(int brr[]){
//     int start= 0;
//     int end= 5;
//     while (start<=end)
//     {  
//         swap(brr[start],brr[end]);
//         start++;
//         end--;
//     }
 
    
// }
// int main(){
//     int arr[50];
//     int n;
    
//     cout<<"Enter no.of elements"<<endl;
//     cin>>n;
//     cout<<"Enter the array elements "<<endl;
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     reverse(arr);
//     printarray(arr,5);
// }



// Swaping of alternate number inj array

// #include <iostream>
// using namespace std;

// void printarray(int brr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << brr[i] << endl;
//     }
// }

// void reverse(int brr[], int size) {
//     for (int i = 0; i < size; i += 2) {
//         if (i + 1 < size) {
//             swap(brr[i], brr[i + 1]);
//         }
//     }
// }

// int main() {
//     int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int odd[5] = {1, 2, 3, 4, 5};
    
//     reverse(even, 8);
//     printarray(even, 8);
    
//     reverse(odd, 5);
//     printarray(odd, 5);

//     return 0;
// }

// Find the unique number in the array

// #include <iostream>
// using namespace std;
// void uniquenum (int arrp[],int n){
//      int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         ans= ans^arrp[i];
//     }
//     cout<<ans<<endl;
// }
//  int main(){

//     int array[7]={1,3,2,1,2,3,4};
//     uniquenum(array,7);
//      return 0;
//  }


// Write program for occurance of number of times element is unique

// #include <iostream>
// using namespace std;
// int main(){
//     int array[6]={1,2,3,2,3,3};
//     int count[10]={0};
//     for (int  i = 0; i < 6; i++)
//     {
//         count[array[i]]++;

//     }
        
    
//     bool isUnique = true;
//     for (int i = 0; i < 100; i++) {
//         if (count[i] == 0) 
//           continue;

//         for (int j = i + 1; j < 100; j++) {
//             if (count[j] == count[i]) {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (!isUnique) break;
//     }

//     if (isUnique)
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;
//     }
    

//  find the duplicate number in array optimized solution

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,4};
//     int ans=0;
    
//     for (int  i = 0; i < 10; i++)
//     {
        
//         ans= ans^arr[i];
//     }
//     for (int  i = 0; i < 10; i++)
//     {
//         ans= ans^i;


//     }
    
//     cout<<ans<<endl;
    
// }


//  Those element appearing the two times


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 3, 2, 4, 5, 3, 6, 1};

//     for (int i = 0; i < 9; i++)
//     {
//         int count = 0;
//         bool alreadychecked= false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 alreadychecked= true;
//                 break;
//             } 
//         }
//        if (alreadychecked)
//        {
//         continue;
//        }
       
//        for (int j= 0; j < 9; j++)
//        {
//         if (arr[i]==arr[j])
//         {
//             count++;
//         }
        
//        }
//       if (count==2)
//       {
//         cout<<arr[i]<<endl;
//       }
       
//     }
    
// }


// Intersection of two array 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int brr[]={9,55,66,2,3,5,8};

//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 0; j < 7; j++)
//         {
//            if (arr[i]==brr[j])
//            {
//             cout<<arr[i]<<endl;
//             arr[i]==INT8_MIN;
//             break;
//            }
           
//         }
        
//     }
    
// }

// Optimised solution of intersection of array .   When elements are stored in increasing order,    Future Question

// #include <iostream>
// using namespace std;
// int main(){

// int arr[]={1,2,3,4,5,6,7};
// int brr[]={9,55,66,2,3,5,8};

// for (int i = 0; i < 7; i++)
// {
    
// }



// }

// Write a program for sorting the 0 and 1 in an array

// #include <iostream>
// using namespace std;

// void printarray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void sortedarray(int arr[], int n) {
//     int left = 0;
//     int right = n - 1;

//     while (left < right) {
//         while (arr[left] == 0 && left < right) {
//             left++;
//         }

//         while (arr[right] == 1 && left < right) {
//             right--;
//         }

//         if (left < right) {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// }

// int main() {
//     int arr[8] = {1, 0, 1, 0, 1, 0, 1, 0};
//     sortedarray(arr, 8);
//     printarray(arr, 8);
// }


// Book allocation probelem using the binary search method

// #include <iostream>
// using namespace std;

// bool ispossiblesolution(int arr[], int n, int m, int mid)
//  {

//     int studentcount = 1;

//     int pagesum = 0;

//     for (int i = 0; i < n; i++) {

//         if (pagesum + arr[i] <= mid) 
//         {
//             pagesum += arr[i];
//         }
//         else
//          {
//             studentcount++;

//             if (studentcount > m || arr[i] > mid)
//              {
//                 return false;
//             }
//             pagesum = arr[i]; // reset to current book
//         }
//     }
//     return true;
// }

// int alloctebooks(int arr[], int n, int m) 
// {
//     int start = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//      {
//         sum += arr[i];
//     }

//     int end = sum;
//     int ans = -1;

//     while (start <= end)
//      {
//         int mid = start + (end - start) / 2;

//         if (ispossiblesolution(arr, n, m, mid)) {
//             ans = mid;
//             end = mid - 1;
//         }
//         else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[4] = {10, 20, 30, 40};

//     int result = alloctebooks(arr, 4, 2);

//     cout <<" that minimum divided number is : "<< result;
// }

// Painter's partion problem

// #include <iostream>
// using namespace std;

// bool ispossible(int arr[],int n,int m, int mid){

//     int paintercount = 1;
//     int areasum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (areasum+arr[i]<=mid)
//         {
//             areasum+=arr[i];
//         }
//         else
//         {
//             paintercount++;
//             if ( paintercount>m || arr[i]>mid)

//             {
//                  return false;
//             }
//             areasum =arr[i];   
//         } 
         
//     }
//      return true;
// }

// int partions(int arr[],int n,int m){

//     int start =0;
    
 
    

//     int sum = 0;
//     for (int  i = 0; i < n; i++)
//     {
//         sum+=arr[i];
//     }
//     int end = sum;
    
//     int ans = -1;
//     while (start<=end)
//     {

//            int mid = start+(end-start)/2;

//         if (ispossible(arr,n,m,mid))
//         {
//             ans = mid;
//             end = mid -1;
//         }
//           else
//           {
//             start = mid +1;

//           }
//             mid = start+(end -start)/2;
          
//     }
//      return ans ;
// }
// int main(){

//     int arr[4]= {5,5,5,5};

//     int result = partions(arr,4,2);

//     cout<<" the maximum area to allocate is :"<< result;


// }


// Aggresive cow problem :

// #include <algorithm>
// #include <iostream>
// using namespace std;

// bool ispossible(int arr[],int n , int mid ){

//  int cowcount = 1;
//  int cowpos = arr[0];

// for (int i = 0; i < n; i++) 
//  {
//      if (arr[i]-cowpos>= mid)
//      {
//         cowcount++;
//         if (cowcount==n)
//         {
//             return true;
//         }
//          cowpos= arr[i];
//      }
     
//  }
//   return false;

// }

// int aggresivecow(int arr[],int n ){

//     sort(arr, arr + n); 

//     int start= 0;
//     int maxi =-1;

//   for (int i = 0; i < n; i++) 
//     {
//         maxi = max(maxi,arr[i]);

//     }
//    int end = arr[n-1] - arr[0]; 
//     int ans = -1;

//     int mid = start+(end-start)/2;

//     while (start<=end)
//     {
//         if (ispossible(arr,n,mid))
//         {
//              ans = mid ;
//               start = mid +1 ; 
//         }

//         else{
//             end = mid -1;
//         }

//           mid = start+(end-start)/2;
//     }
//       return ans ;
// }



// int main(){
  
//     int arr[5]= {4,2,1,3,6};

//     int result = aggresivecow(arr,2);

//     cout << " the largest minimum space is :"<< result;


// }


// REverse an array by using the diffren tmethod 

// #include <iostream>
// using namespace std;

// void reversearray(int arr[], int n)
// {

//     int start= 0;

//         int end = n-1;
   
//         while(start<end)
//      {

        
//             int temp = arr[start];
//             arr[start]= arr[end];
//             arr[end]=temp;
//            start++;
//             end--;
//      }

//      for (int i = 0; i < n ; i++)
//      {
//         cout<<arr[i]<<endl;
//      }
     
     
// }

// int main(){

//     int arr [4]= { 2,5,3,1};

//     reversearray(arr,4);


// }
// Solve the same question using the vector

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reversearray(vector<int> a) {
//     int start = 0, end = a.size() - 1;
//     while (start < end) {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
//     return a;
// }

// int main() {
//     vector<int> a;
//     a.push_back(2);
//     a.push_back(7);
//     a.push_back(1);
//     a.push_back(4);
//     a.push_back(0);
//     a.push_back(3);

//     vector<int> ans = reversearray(a);

//     // Print reversed array
//     for (int x : ans) {
//         cout << x << " ";
//     }
//     return 0;
// }


// Merge sortd array


// #include<iostream>
// using namespace std;

// void mergesort(int arr1[],int n,int arr2[], int m,int arr3[]){

// int i=0;
// int j=0;
// int k =0;

// while (i<n&&j<m)
// {
//     if (arr1[i]<arr2[j])
//     {
//         arr3[k]=arr1[i];
//         i++;
//         k++;
//     }
//     else{
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }
// }

// // First array ke abche hue ppart ko copy kerna 

// while (i<n)
// {
//     arr3[k]=arr1[i];
//     i++;
//     k++;
// }


// // second array ke bache hue part ko copy kerna

// while (j<m)
// {
//     arr3[k]=arr2[j];
//     j++;
//     k++;
// }







// }


// void print(int ans[],int k){

//     for (int  i = 0; i <k; i++)
//     {
//         cout<<ans[i]<<endl;
//     }
    
// }
// int main(){

//     int arr1[3]={1,3,5};

//     int arr2[5]={2,4,6,7,9};

//     int arr3[8]={0};

//     mergesort(arr1,3,arr2,5,arr3);

//     print(arr3,8);

//}


// Moving of the non zero on one side in the array

// #include <iostream>
// using namespace std;

// void movezero(int arr[], int n){

//     int startnozero= 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]!=0)
//         {
//             swap(arr[i],arr[startnozero]);

//             startnozero++;
//         }


 
    
// }

// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
//  int main(){


//     int arr[5]={0,1,2,0,1};

//     movezero(arr,5);

//     printArray(arr,5);





//     return 0;
//  }



//  Rotate the array k number of index

// #include<iostream>

// using namespace std ;

// void rotatearray(int arr[],int k ){


//  int temp[6]={0};
//     for (int i = 0; i < 6; i++)
//     {

      
        
//        temp[(i+k)%6]=arr[i];

//     }
    
//     // Copy back to arr
//     for (int i = 0; i < 6; i++) {
//         arr[i] = temp[i];
//     }
    
// }

// void print(int arr[],int n){
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

    

// }
// int main(){

//     int arr[6]={1,2,3,4,5,6};

//     rotatearray(arr,2);
//     print(arr,6);

//     return 0;


// }

//   Check the array is rotated or shorted or not ?

// #include<iostream>
// using namespace std;

// bool sortorrotate(int arr[], int n) {
//     int count = 0;

//     // Count how many times order is broken
//     for (int i = 1; i < n; i++) {
//         if (arr[i-1] > arr[i]) {
//             count++;
//         }
//     }

//     // Also check between last and first element (rotation point)
//     if (arr[n-1] > arr[0]) {
//         // No extra count needed here
//     } else {
//         count++;
//     }

//     // If count > 1 → not sorted/rotated
//     return count <= 1;
// }

// int main() {
//     int arr1[5] = {1, 2, 3, 4, 5};
//     cout << "result is " << sortorrotate(arr1, 5) << endl;

//     int arr2[5] = {2, 3, 4, 5, 1};
//     cout << "result is " << sortorrotate(arr2, 5) << endl;

//     int arr3[5] = {3, 5, 1, 4, 6};
//     cout << "result is " << sortorrotate(arr3, 5) << endl;

//     return 0;
// }



// sum of the array paritcular elements are stored in decimal form 



// #include<iostream>
// using namespace std;

// char lowecase(char a){

//     if (a>='a'  && a<='z')
//     {
//         return a;
//     }
//     else{

//         char temp = a+'a'-'A';
//         return temp;
//     }
    
// }

// int length(char arr[]){
//     int count = 0;
//     int i = 0;
//     while (arr[i] != '\0'){
//         count++;
//         i++;
//     }
//     return count;
// }

// void reverse(char arr[], char brr[], int n){
//     int start = 0;
//     int end = n - 1;
//     while (start < n){
//         brr[start] = arr[end];
//         start++;
//         end--;
//     }
//     brr[n] = '\0';
// }

// bool Plaindrome(char arr[], char brr[], int n){
//     for (int i = 0; i < n; i++){
//         if (lowecase(arr[i]) !=lowecase( brr[i])){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     char arr[10];
//     char brr[10];

//     cout << "Enter string: ";
//     cin >> arr;

//     int len = length(arr);

//     reverse(arr, brr, len);

//     int result = Plaindrome(arr, brr, len);
//     cout << result; // 1 = Palindrome, 0 = Not Palindrome

//     return 0;
// }


// Write a program to check wheater the is palindrome or not after removing the all special charcters

// #include<iostream>
// using namespace std;

// bool valid(char ch){

//     if ((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')  || (ch>='0')&&(ch<='9') )
//     {
//         return 1;
//     }
//      return 0;
// }

// char lowecase(char a){

//     if ((a>='a'  && a<='z')||(a>='0'  && a<='9'))
//     {
//         return a;
//     }
//     else{

//         char temp = a+'a'-'A';
//         return temp;
//     }
    
// }


// bool Plaindrome( string s){
//    // Faltu character hata do

//    string temp;

//    for (int i = 0; i < s.length(); i++)
//    {
//     if (valid(s[i]))
//     {
//         temp.push_back(s[i]);
//     }
    
//    }

//    // Lowecase me kerdo

//    for (int i = 0; i < s.length(); i++)
//    {
//        temp[i]=  lowecase(s[i]);
//    }

//     // Step 2: Check palindrome
//     int start = 0, end = temp.length() - 1;
//     while (start < end) {
//         if (temp[start] != temp[end]) {
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
   
   
   
    
// }





// int main(){

//  bool result = Plaindrome("noon");
//  cout<<result;


// }

// Rverse the word in the string

// #include <iostream>
// #include <stack>
// using namespace std;

// string reverseWords(string s) {
//     stack<string> st;
//     string word, result;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == ' ') {
//             if (!word.empty()) {
//                 st.push(word);
//                 word.clear();
//             }
//         } else {
//             word.push_back(s[i]);
//         }
//     }

//     // push the last word
//     if (!word.empty()) {
//         st.push(word);
//     }

//     // pop words from stack to reverse order
//     while (!st.empty()) {
//         result += st.top();
//         st.pop();
//         if (!st.empty()) result += " ";
//     }

//     return result;
// }

// int main() {
//     string str = "I love coding";
//     cout << "Original: " << str << endl;
//     cout << "Reversed: " << reverseWords(str) << endl;
//     return 0;
// }


// Max Occurance of character


// #include<iostream>
// using namespace std;

// char maxocurancechar(string s) {
//     int arr[26] = {0};  // count array for 26 letters

//     // Count frequency of characters
//     for (int i = 0; i < s.length(); i++) {
//         char ch = s[i];
//         int number = 0;

//         if (ch >= 'a' && ch <= 'z') {
//             number = ch - 'a';
//         } else if (ch >= 'A' && ch <= 'Z') {
//             number = ch - 'A';
//         }

//         arr[number]++;
//     }

//     // Find maximum occurrence
//     int maxi = -1, ans = -1;
//     for (int i = 0; i < 26; i++) {   // ✅ should loop over 26, not string length
//         if (maxi < arr[i]) {
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     char finalans = 'a' + ans;   // returning lowercase
//     return finalans;
// }

// int main() {
//     string s;
//     cin >> s;

//     cout << "Most frequent character: " << maxocurancechar(s);
// }


// Add the other character in the place of the string

// #include<iostream>
// using namespace std;

// string addon(string s) {
//     string temp = "";
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == ' ') {       // ✅ use single quotes for character
//             temp += "@40";       // ✅ append string instead of push_back
//         }
//         else {
//             temp.push_back(s[i]);
//         }
//     }
//     return temp;
// }

// int main() {
//     cout << addon("this is my name");
// }


//  remove the substring from the string

// #include<iostream>
// using namespace std;

// string removesubstring(string s){

//     string target = "part";
//     while (s.length()!=0 && s.find(target)<s.length()){

//         s.erase(s.find(target),target.length());

//     }
//   return s;
// }
// int main(){

//     cout<< " The reomove string is "<<removesubstring("sdafparthjfpartzhjfpart");

// }

// Printing the 2-D array like a wave 

// #include <iostream>
// using namespace std;

// void printlikewave(int arr[3][4], int n, int m) {
//     for (int col = 0; col < m; col++) {
//         if (col & 1) {
//             // bottom to top
//             for (int row = n - 1; row >= 0; row--) {
//                 cout << arr[row][col] << "  ";
//             }
//         } else {
//             // top to bottom
//             for (int row = 0; row < n; row++) {
//                 cout << arr[row][col] << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[3][4];

//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[j][i];
//         }
//     }

//     printlikewave(arr, 3, 4);
// }


// Spiral priniting of the 2 - D array

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> spiralprint(int arr[][4], int n, int m) {
//     vector<int> ans;
//     int startingrow = 0, endingrow = n - 1;
//     int startingcol = 0, endingcol = m - 1;
//     int count = 0, totalelement = n * m;

//     while (count < totalelement) {
//         // printing starting row
//         for (int i = startingcol; i <= endingcol && count < totalelement; i++) {
//             ans.push_back(arr[startingrow][i]);
//             count++;
//         }
//         startingrow++;

//         // printing ending column
//         for (int i = startingrow; i <= endingrow && count < totalelement; i++) {
//             ans.push_back(arr[i][endingcol]);
//             count++;
//         }
//         endingcol--;

//         // printing ending row
//         for (int i = endingcol; i >= startingcol && count < totalelement; i--) {
//             ans.push_back(arr[endingrow][i]);
//             count++;
//         }
//         endingrow--;

//         // printing starting column
//         for (int i = endingrow; i >= startingrow && count < totalelement; i--) {
//             ans.push_back(arr[i][startingcol]);
//             count++;
//         }
//         startingcol++;
//     }
//     return ans;
// }

// int main() {
//     int arr[3][4];

//     cout << "Enter 12 elements: \n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     vector<int> finalans = spiralprint(arr, 3, 4);

//     cout << "Spiral Order: ";
//     for (int i = 0; i < finalans.size(); i++) {
//         cout << finalans[i] << " ";
//     }
//     cout << endl;
// }


// rotate the 2-D matric by 90 deg
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> rotate(int arr[][3], int n, int m) {
//     vector<vector<int>> ans(m, vector<int>(n)); // rotated matrix

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             ans[j][n - 1 - i] = arr[i][j];
//         }
//     }
//     return ans;
// }

// int main() {
//     int arr[3][3];

//     cout << "Enter 9 elements: \n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     vector<vector<int>> finalans = rotate(arr, 3, 3);

//     cout << "Matrix after 90 degree rotation:\n";
//     for (int i = 0; i < finalans.size(); i++) {
//         for (int j = 0; j < finalans[i].size(); j++) {
//             cout << finalans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }



// searching the  element in the 2- D array by the binary search

// #include<iostream>
// using namespace std;

// bool binary(int arr[][3],int target,int n, int m){


//     int start= 0;
//     int end = (n*m)-1;

//     while (start<=end)

//     {
//          int mid = start+(end-start)/2;
//         if (target==arr[mid / m][mid % m]
// )
//         {
//             return true;
//         }
//         else if (target>arr[mid / m][mid % m]
// )
//         {
//             start= mid+1;
//         }

//         else{
//             end= mid-1;
//         }
       
        
        
//     }
//     return false;
    
// }
// int main(){


//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   
// bool result= binary(arr,4,3,3);
// cout<<result;

// }


// when the elements are stored in the form as every next element in row is increasing in same as columns

// #include<iostream>
// using namespace std;


//     bool standard(int arr[][3],int target,int n,int m)
//     {

//         int row= n;
//         int col = m;

//         int rowindex= 0;
//         int colindex= col-1;

//         while (rowindex<row &&colindex>=0)
//         {

//             int element =arr[rowindex][colindex];
//             if (element== target)
//             {
//                 return 1;

//             }

//             else if (element >target)
//             {
//                colindex--;
//             }

//             else{

//                 rowindex++;
//             }
            
            
//         }
//         return 0;

//     }

// int main(){


//    int arr[3][3] = {{1,4,7}, {2,4,8}, {3,6,9}};


//     cout<<standard(arr,4,3,3)<< endl;

//      cout<<standard(arr,10,3,3);

    
// }



// count the number of elements are prime less then  the number n;

// #include<iostream>
// using namespace std;

// int countprime(int n){
  
//      if (n <= 2) return 0;
//           bool arr[n+1];  
//      for (int i = 0; i <= n; i++) arr[i] = true;

//       arr[0] = arr[1] = false;  

//       int count = 0;

// for (int i = 2; i <n; i++)
// {
//     if (arr[i])
//     {
//         count++;
//     }

//     for (int j = 2*i; j < n; j+=i)
//     {
//         arr[j]=false;
//     }
    
    
// }
//   return count;

// }
// int main(){

    
//    int result= countprime(20);

//    cout<<result;

// }

// find the x^n%m  in that

// #include<iostream>
// using namespace std;

// int find(int x ,int n,int m){

//   long long res= 1;

//   long long base= x%m;

//     while (n>0)
//     {
//         if (n&1)
//         {

//             // odd

//             res= (res*base)%m;
//         }
//         // even

//         base= (base*base)%m;

//         n>>=1;
//     }

//     return (int) res;

    
// }

// int main(){

//     int result= find(5,9,7);

//     cout<<result;


// }