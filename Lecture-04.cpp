// Binary Search Tree Implementation ;


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//       int data;
//       Node *left;
//       Node * right;

//       Node(int data){

//         this->data= data;
//         this->left= NULL;
//         this->right=NULL;
//       }
// };

// Node* BuildTree(Node* root) {
//     cout << "Enter The Element" << endl;
//     int data;
//     cin >> data;

//     // base case
//     if (data == -1) {
//         return NULL;
//     }

//     root = new Node(data);   

//     cout << "Enter The Left Element " << endl;
//     root->left = BuildTree(root->left);

//     cout << "Enter The Right Element " << endl;
//     root->right = BuildTree(root->right);

//     return root;
// }


// int main(){

//     Node* root = NULL;

//     root = BuildTree(root);

// }


// Level Order Traversal 

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node {

//     public:
//     int data;
//     Node* left;
//     Node * right ;

//     Node(int data){

//         this->data= data;
//         this->left = NULL;
//         this->right= NULL;
//     }


// };

// Node * Buildtree(Node * root){
//     cout<<" Enter The Element :"<<endl;
//     int data;
//     cin>>data;

//     root = new Node(data);

//     if (data==-1)
//     {
//         return NULL;
//     }

//     cout<<" Enter The left Element :"<<endl;
//     root->left= Buildtree(root->left);

//     cout<<" Enter The Right Element :"<<endl;
//     root->right= Buildtree(root->right);
    
// }

// void LevelOrderTraversal(Node * root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {  
//         Node * temp = q.front();
//         q.pop();
//         if (temp==NULL)
//         {
//             cout<<endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
            
//         }
//         else{

//             cout<<temp->data<<"  ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
            
            
//         }
        
        
//     }   

// }

// int main(){

//     Node * root = NULL;
//     root = Buildtree(root);

//     LevelOrderTraversal(root);

// }

//  Inorder Traversal , Pre Order Traversal , Post Order Traversal

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node * left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         this->left= NULL;
//         this->right=NULL;

//     }



// };

// Node * Buildtree(Node * root){

//     int data;
//     cout<<"Enter The data"<<endl;
//     cin>>data;

//     root= new Node(data);

//     if (data==-1)
//     {
//         return NULL;
//     }

//     cout<<"Enter The left Element "<<endl;
//     root->left= Buildtree(root->left);

//     cout<<" Enter The right Element "<<endl;
//     root->right= Buildtree(root->right);
    
// }

// void InorderTraversal(Node * root){

//     if (root==NULL)
//     {
//         return;
//     }

//     InorderTraversal(root->left);
//     cout<<root->data<<"  ";
//     InorderTraversal(root->right);
    
// }

// void PreorderTraversal(Node * root){

//     if (root==NULL)
//     {
//         return;
//     }

//      cout<<root->data<<"  ";
//     PreorderTraversal(root->left);
//     PreorderTraversal(root->right);
    
// }

// void PostorderTraversal(Node * root){

//     if (root==NULL)
//     {
//         return;
//     }

//     PostorderTraversal(root->left);
//     PostorderTraversal(root->right);
//      cout<<root->data<<"  ";
// }
// int main(){

//     Node * root = NULL;
//     root= Buildtree(root);
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

//     cout<<"Inorder Traversal   ";

//     InorderTraversal(root);
//     cout<<endl;

//     cout<<"Post Order Traversal   ";
//     PostorderTraversal(root);

//     cout<<endl;

//     cout<<"Pre Order Traversal   ";
//     PreorderTraversal(root);
  
// }


// Build Level Order tree

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node * left ;
//     Node * right;

//     Node(int data){
//         this->data=data;
//         this->left= NULL;
//         this->right= NULL;
//     }

// };

// Node * Buildfromlevelorder(Node * root){
//     queue<Node *> q;

//     cout<<"Enter The data "<<endl;
//     int data;
//     cin>>data;
//     root= new Node(data);
//     q.push(root);


//     while (!q.empty())
//     {
//         Node * temp = q.front();
//         q.pop();

//         cout<<"Enter The Left Data "<<endl;
//         int leftdata;
//         cin>>leftdata;

//         if (leftdata!=-1)
//         {
//             temp->left= new Node(leftdata);
//             q.push(temp->left);
//         }

//         cout<<"Enter The Right Element  "<<endl;
//         int rightdata;
//         cin>>rightdata;

//         if (rightdata!=-1)
//         {
//              temp->right= new Node(rightdata);
//              q.push(temp->right);
//         }
        
        
//     }
    
// }

// int main(){

//     Node * root = NULL;

//     root= Buildfromlevelorder(root);


// }


// Find The all Possible Path in the tree That have sume is equal to K ,  \\ Maximum sum of the non - Adjacent Nodes

// #include<iostream>
// #include<vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// Node* Buildtree() {

//     int data;
//     cout << "Enter the data (-1 for NULL): ";
//     cin >> data;

//     if (data == -1) {
//         return NULL;
//     }

//     Node* root = new Node(data);

//     cout << "Enter left of " << data << endl;
//     root->left = Buildtree();

//     cout << "Enter right of " << data << endl;
//     root->right = Buildtree();

//     return root;
// }

// void solve(Node* root,int k,int &count,vector<int>&path){

//     if (root==NULL)
//     {
//         return;
//     }

//     path.push_back(root->data);
//     solve(root->left,k,count,path);
//     solve(root->right,k,count,path);

//     int size= path.size();
//     int sum=0;

//     for (int i =size-1; i >=0 ; i--)
//     {
//         sum+=path[i];

//         if (sum==k)
//         {
//             count++;
//         }
  
//     }
//      path.pop_back();
    
// }

// int CountSum(Node * root,int k){

//     vector<int> path;
//     int count=0;

//     solve(root,k,count,path);
// }


// //  Maximum Of Sum Of the None Adjacent Nodes 

// pair<int,int> solve(Node* root){
//     if (root==NULL)
//     {
//         pair<int,int>p=make_pair(0,0);
//         return p;
//     }

//     pair<int,int> left = solve( root->left);
//     pair<int,int> right= solve(root->right);

//     pair<int,int> res;

//     res.first= root->data+left.second+right.second;

//     res.second= max(left.first,left.second)+ max(right.first,right.second);

//     return res;
    
// }

// int GetMax(Node * root){
//     pair<int ,int>p= solve(root);

//     return max(p.first,p.second);
// }


// int main() {
//     Node* root = NULL;
//     root = Buildtree();

//     cout<<CountSum(root,5);

//     cout<<GetMax(root);
// }


//  Make Or build the tree from the inorder or the preorder 

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         left = right = NULL;
//     }
// };

   // ------- Inorder Or preOrder traversal se convert kerna      -------------

// int findposition(int in[], int element, int n) {
//     for (int i = 0; i < n; i++) {
//         if (in[i] == element)
//             return i;
//     }
//     return -1;
// }

// Node* solve(int in[], int pre[], int &index,
//             int inorderstart, int inorderend, int n) {

//     if (index >= n || inorderstart > inorderend)
//         return NULL;

//     int element = pre[index++];
//     Node* root = new Node(element);

//     int pos = findposition(in, element, n);

//     root->left = solve(in, pre, index, inorderstart, pos - 1, n);
//     root->right = solve(in, pre, index, pos + 1, inorderend, n);

//     return root;
// }

// Node* Buildtree(int in[], int pre[], int n) {
//     int preorderindex = 0;
//     return solve(in, pre, preorderindex, 0, n - 1, n);
// }

// void PostorderTraversal(Node* root) {
//     if (root == NULL)
//         return;

//     PostorderTraversal(root->left);
//     PostorderTraversal(root->right);
//     cout << root->data << " ";
// }


//   --------  Inorder Ko PostOrder se Traversal Kerna  ------ 

// int findposition(int in[], int element, int n) {
//     for (int i = 0; i < n; i++) {
//         if (in[i] == element)
//             return i;
//     }
//     return -1;
// }

// Node* solve(int in[], int post[], int &index,
//             int inorderstart, int inorderend, int n) {

//     if (index < 0 || inorderstart > inorderend)
//         return NULL;

//     int element = post[index--];
//     Node* root = new Node(element);

//     int pos = findposition(in, element, n);

//     // IMPORTANT: right first, then left
//     root->right = solve(in, post, index, pos + 1, inorderend, n);
//     root->left  = solve(in, post, index, inorderstart, pos - 1, n);

//     return root;
// }

// Node* Buildtree(int in[], int post[], int n) {
//     int postorderindex = n - 1;
//     return solve(in, post, postorderindex, 0, n - 1, n);
// }

// void PreorderTraversal(Node* root) {
//     if (root == NULL)
//         return;

//     cout << root->data << " ";
//     PreorderTraversal(root->left);
//     PreorderTraversal(root->right);
// }


// int main() {
//     int in[]  = {4,8,2,5,1,6,3,7};
//     int pos[] = {8,4,5,2,6,7,3,1};

//     Node* root = Buildtree(in, pos, 8);

//     cout << "Pretorder Traversal: ";
//     PreorderTraversal(root);
// }

// ------- Binary Search Tree Implementton Using the Bst   --------


// #include<iostream>
// using namespace std;

// class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };

// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<=root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// void Inorder( Node* root){

//    if ( root==NULL)
//    {
//       return ;
//    }
   

//     Inorder(root->left);
//    cout<<root->data<<"   ";
//     Inorder(root->right);
// }


// void Preorder( Node* root){

//    if ( root==NULL)
//    {
//       return ;
//    }
   
//   cout<<root->data<<"   ";
//     Preorder(root->left);
 
//     Preorder(root->right);
// }



// void Postorder( Node* root){

//    if ( root==NULL)
//    {
//       return ;
//    }
   

//     Postorder(root->left);
  
//     Postorder(root->right);
//      cout<<root->data<<"   "; 
// }


// int main(){

   //  int arr[]={10,20,60,5,13,14};

   //  Node * root= NULL;

   //  for (int i = 0; i < 6; i++)
   //  {
   //      root= constructTree(root,arr[i]);
   //  }
    

//     Inorder(root);


// }


//  1 -  Find The Element in the Binary search tree using 2 methods.

         // Method 1 --- recursive Way


// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<=root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// // int FindElemet(Node* root,int val){

// //    if (root==NULL)
// //    {
// //       return -1;
// //    }
// //    if (root->data==val)
// //    {
// //       return true;
// //    }

// //    if (root->data>=val)
// //    {
// //        FindElemet(root->left,val);
// //    }
// //    else{

// //       FindElemet(root->right , val);
// //    }
   
// // }


//     //  Method 2 --- Iterative Way

    


// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
    

//    //  cout<<FindElemet(root,15);

// }


     
 
//  2 - Find The maximum and minimum Element in the Binary Search Tree


// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<=root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// // Find The maximum Element in the binary Tree  -- right part 

// int FindMAx(Node *root){
//    if (root->right==NULL)
//    {
//       return root->data;
//    }
//    FindMAx(root->right);
// }


// // Find The minimum Element In the Binary search Tree

// int Findmin(Node* root){
//    if (root->left==NULL)
//    {
//       return root->data;

//    }
   

//    Findmin(root->left);
// }


// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
    
//         cout<<FindMAx(root)<<endl;
  

//          cout<<Findmin(root);
// }



// 3  -  Find The Inorder Presessor And the Inorder Successor in BST .


// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<=root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// int Findprecessor(Node * root,int val){
 
//    if (root->data==val)
//    {
//       return root->left->data;
//    }
//    if (root->data>=val)
//    {
//       Findprecessor(root->left,val);
//    }
//    else{
//       Findprecessor(root->right,val);
//    }
// }


// int Findsuccessor(Node * root,int val){
 
//    if (root->data==val)
//    {
//       return root->right->data;
//    }
//    if (root->data>=val)
//    {
//       Findsuccessor(root->left,val);
//    }
//    else{
//       Findsuccessor(root->right,val);
//    }
// }


// void Inorder( Node* root){

//    if ( root==NULL)
//    {
//       return ;
//    }
   

//     Inorder(root->left);
//    cout<<root->data<<"   ";
//     Inorder(root->right);
// }




    
// }

// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
    
//     cout<<Findprecessor(root,20)<<endl;
//        cout<<Findsuccessor(root,20);    
// }



// 4 - Perform The deletion In the Binary Search Tree .




// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// Node * Findprecessor(Node * root){
//      Node* curr = root;
//     while (curr && curr->right != NULL) {
//         curr = curr->right;
//     }
//     return curr;
// }

// Node * DeletionBst(Node * root,int val1){

//    if (root==NULL)
//       return root;

//    if (val1 < root->data)
//    {
//       root->left = DeletionBst(root->left, val1);
//    }
//    else if (val1 > root->data)
//    {
//       root->right = DeletionBst(root->right, val1);
//    }
//    else
//    {
//       // 0 child
//       if (root->left==NULL && root->right==NULL)
//       {
//          delete root;
//          return NULL;
//       }

//       // 1 child (left)
//       if (root->left!=NULL && root->right==NULL)
//       {
//          Node * temp = root->left;
//          delete root;
//          return temp;
//       }

//       // 1 child (right)
//       if (root->right!=NULL && root->left==NULL)
//       {
//          Node * temp = root->right;
//          delete root;
//          return temp;
//       }

//       // 2 child
//       Node* temp = Findprecessor(root->left);
//       root->data = temp->data;
//       root->left = DeletionBst(root->left, temp->data);
//    }

//    return root;
// }


// void inorder(Node* root) {
//     if (root == NULL) return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
    
//     cout<<" Inorder Befor Deletion : ";
//     inorder(root);
    
//     root= DeletionBst(root,20);

//     cout<<endl<<" Inorder After The deletion ";
//     inorder ( root);
// }



// check That this is valid bst or Not 




// #include<iostream>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// bool IsValidBst( Node * root,long minvalue , long maxvalue){

//    if (root==NULL)
//    {
//        return true;
//    }

//   if (root->data<=minvalue || root->data>=maxvalue)
//   {
//     return false;
//   }

//   return IsValidBst(root->left,minvalue,root->data) && 
//          IsValidBst(root->right,root->data,maxvalue);
  
// }


// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
//     long maxvalue = INT8_MAX;
//     long minvalue = INT8_MIN;
//     cout<<IsValidBst(root,minvalue,maxvalue);
//    }



// 1 - Find The k th smallest and K th largest Element in the Bst --



// #include<iostream>
// #include<vector>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// int solve(Node * root, int &count ,int k ){
//    if (root==NULL)
//    {
//       return -1;
//    }

//    int left = solve(root->left,count,k);
//    if (left!=-1)
//    {
//       return left;
//    }
   
//    count++;

//    if (count==k)
//    {
//       return root->data;
//    }
   
//    return solve(root->right,count, k);

//   return count;
   
// }

// void solve(Node * root,vector<int>& v){
//    if ( root==NULL)
//    {
//       return ;
//    }
   
//    solve(root->left,v);
//    v.push_back(root->data);
//    solve(root->right,v);
// }


// int KlargestBSt(Node * root,int k){

//    vector<int> v;
//    solve(root,v);

//    int n = v.size();


//    return v[n-k];
// }





// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
 
//    int count =0;
//    cout<<"K smallest  "<<solve(root, count,3);

   
//    cout<<endl<<" K largest   "<<KlargestBSt(root,2);

//    }




// 2  - Lowest Common Anchestor (LCA) In the BST    ----




// #include<iostream>
// #include<vector>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

//  Node * LCA(Node * root,int n1, int n2){

//    if (root==NULL)
//    {
//        return NULL;
//    }
   

//    if (n1<root->data && n2 < root->data)
//    {
//     return LCA(root,n1 , n2);
//    }

//    if (n1>root->data && n2> root->data)
//    {
//        return LCA(root,n1 ,n2);
//    }
   
//     return root;
//  }





// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }
 
//    Node * temp = LCA(root,60,5);

//    cout<<temp->data;



//    }






// 3 -   IF there exist an pair im the BST that will be equal to the target ---



// #include<iostream>
// #include<vector>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// int solve(Node * root, int &count ,int k ){
//    if (root==NULL)
//    {
//       return -1;
//    }

//    int left = solve(root->left,count,k);
//    if (left!=-1)
//    {
//       return left;
//    }
   
//    count++;

//    if (count==k)
//    {
//       return root->data;
//    }
   
//    return solve(root->right,count, k);

//   return count;
   
// }

// void solve(Node * root,vector<int>& v){
//    if ( root==NULL)
//    {
//       return ;
//    }

//    solve(root->left,v);
//    v.push_back(root->data);
//    solve(root->right,v);
// }


// bool ExistPair(Node * root,int sum){

//    vector<int> v;
//    solve(root,v);

//    int j= v.size()-1;


//    int i=0 ;
   

//    while (i<j)
//    {
//       int currsum= v[i]+v[j];
//       if (currsum==sum)
//       {
//           return true;
//       }

//       else if (currsum<sum)
//       {
//          i++;
//       }
//       else{
//          j++;
//       }
      
//    }
   
//  return false ;


// }





// int main(){

   
//     int arr[]={10,20,60,5,13,14};

//     Node * root= NULL;

//     for (int i = 0; i < 6; i++)
//     {
//         root= constructTree(root,arr[i]);
//     }


//    cout<< ExistPair(root,30);
//    }




//  4  -  Convert the BSt to Flatten linked list iN the Sorted Form ---


// #include<iostream>
// #include<vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         left = right = NULL;
//     }
// };

// // Insert in BST
// Node* constructTree(Node* root, int val) {

//     if (root == NULL)
//         return new Node(val);

//     if (val < root->data)
//         root->left = constructTree(root->left, val);
//     else
//         root->right = constructTree(root->right, val);

//     return root;
// }

// // Inorder traversal
// void solve(Node* root, vector<int>& v) {
//     if (root == NULL)
//         return;

//     solve(root->left, v);
//     v.push_back(root->data);
//     solve(root->right, v);
// }

// // Convert BST to Sorted Linked List
// Node* convertLinkedList(Node* root) {

//     vector<int> v;
//     solve(root, v);

//     if (v.size() == 0)
//         return NULL;

//     Node* head = new Node(v[0]);
//     Node* curr = head;

//     for (int i = 1; i < v.size(); i++) {
//         Node* newNode = new Node(v[i]);
//         curr->right = newNode;   // link
//         curr = newNode;
//     }

//     return head;
// }

// // Print Linked List
// void printList(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " -> ";
//         head = head->right;
//     }
//     cout << "NULL";
// }

// int main() {

    // int arr[] = {10, 20, 60, 5, 13, 14};
    // Node* root = NULL;

    // for (int i = 0; i < 6; i++) {
    //     root = constructTree(root, arr[i]);
    // }

//     Node* head = convertLinkedList(root);
//     printList(head);
// }





// 5  - Check That This is balanced BST Or not    ----


//  #include<iostream>
// #include<algorithm>
// #include<cmath>

// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// int height(Node* root){

//     if (root == NULL){
//         return 0;
//     }

//     return 1 + max(height(root->left), height(root->right));
// }

// bool checkbalanced(Node* root){

//     if (root == NULL){
//         return true;
//     }

//     int left = height(root->left);
//     int right = height(root->right);

//     if (abs(left - right) <= 1 
//         && checkbalanced(root->left) 
//         && checkbalanced(root->right)){
//         return true;
//     }

//     return false;
// }

// int main(){

//     Node* root = new Node(10);
//     root->left = new Node(5);
//     root->right = new Node(20);

//     if(checkbalanced(root))
//         cout << "Balanced Tree";
//     else
//         cout << "Not Balanced Tree";

// }


//  6  - Convert The inorder BSt to  balaned BSt   ------




// #include<iostream>
// #include<vector>
// using namespace std;
//  class Node{

//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left= right= NULL;
//     }

// };


// Node * constructTree(Node *root,int val){

//     if (root==NULL)
//     {
//         return new Node(val);
//     }

//     if (val<root->data)
//     {
//         root->left= constructTree(root->left,val);
//     }

//     else{
//         root->right= constructTree(root->right,val);
//     }
    
//     return root;


// }

// void inorder(Node * root,vector<int> &v){

//     if (root==NULL)
//     {
//         return;
//     }

//     inorder(root->left,v);
//     v.push_back(root->data);
//     inorder(root->right,v);
    

// }


// Node * makebalanced(vector<int> &v,int start,int end){

// if (start>end)
// {
//     return NULL;
// }

    

// int mid = (start+end) /2;

// Node * root= new Node(v[mid]);

// root->left = makebalanced(v,start,mid-1);

// root->right= makebalanced(v,mid+1,end);

// return root;

// }

// Node * convertToBalanced(Node * root){
//     vector<int> v;

//     inorder(root,v);

//     return makebalanced(v,0,v.size()-1);
// }



// void inorder1(Node * root){

//     if (root==NULL)
//     {
//         return;
//     }

//     inorder1(root->left);
//     cout<<root->data;
//     inorder1(root->right);
    

// }


//  Function For convert the Preorder Traversal to BSt 
//  Approach 1- simple preorder take as array and construct the tree     Approach 2 - convert the sorted inorder and then construct the tree    Approach 3 --  take the mini or max value int the function 

// Node* solve(vector<int> &v, int minVal, int maxVal, int &i) {

//     if (i >= v.size())
//         return NULL;

//     if (v[i] < minVal || v[i] > maxVal)
//         return NULL;

//     Node* root = new Node(v[i++]);

//     root->left = solve(v, minVal, root->data, i);
//     root->right = solve(v, root->data, maxVal, i);

//     return root;
// }

// Node* Construct(vector<int> v) {
//    int min= INT8_MIN;
//    int max=INT8_MAX;
//     int i = 0;
//     return solve(v,min,max, i);
// }

// int main() {
    // int arr[] = {10, 20, 60, 5, 13, 14};
    // Node* root = NULL;

    // for(int i = 0; i < 6; i++) {
    //     root = constructTree(root, arr[i]);
    // }


//     convertToBalanced(root);

//     inorder1(root);

//     return 0;
// }

