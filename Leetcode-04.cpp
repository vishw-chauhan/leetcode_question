//  Count The Number Of the Leaf Nodes 

// #include<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data){
//         this->data = data;
//         left = right = NULL;
//     }
// };

// Node* Buildtree(Node* root){
//     int data;
//     cout << "Enter data (-1 for NULL): ";
//     cin >> data;

//     if(data == -1)
//         return NULL;

//     root = new Node(data);

//     cout << "Enter left of " << data << endl;
//     root->left = Buildtree(root->left);

//     cout << "Enter right of " << data << endl;
//     root->right = Buildtree(root->right);

//     return root;
// }

// void CountLeaf(Node* root, int &count){
//     if(root == NULL)
//         return;

//     if(root->left == NULL && root->right == NULL)
//         count++;

//     CountLeaf(root->left, count);
//     CountLeaf(root->right, count);
// }

// int LeafNodeCount(Node* root){
//     int count = 0;
//     CountLeaf(root, count);
//     return count;
// }

// int main(){
//     Node* root = NULL;
//     root = Buildtree(root);

//     cout << "Leaf Nodes = " << LeafNodeCount(root);
//     return 0;
// }


// Find the dept of the binary tree 

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         left = right= NULL;
//     }


// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     int CalcDept(Node * root){

//         if (root==NULL)
//         {
//             return 0;
//         }

//       int left=  CalcDept(root->left);

//      int right=   CalcDept(root->right);

//         int ans ;

//         ans =1+ max(left,right);

//         return  ans;
        
//     }

// int main(){

//     Node * root = NULL;

//     root= Buildtree(root);

//    cout<< CalcDept(root);

// }


//  Check For The balanced Tree 

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         left = right= NULL;
//     }


// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     int Height(Node * root){

//         if (root==NULL)
//         {
//             return 0;
//         }

//         int left = Height(root->left);

//         int right = Height(root->right);

//         int ans = 1+ max(left, right);

//         return ans;
        
//     }

//     bool isBalanced(Node * root){

//         if (root==NULL)
//         {
//             return true;
//         }

//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);

//         bool diff = abs(Height(root->left)-Height(root->right))<=1;

//         if (left &&right && diff)
//         {
//              return true;
//         }
//         else{
//             return false;
//         }
        
//     }

//     int main(){


//           Node * root = NULL;

//          root= Buildtree(root);

//          cout<<isBalanced(root);

//     }



// Check That The two Tree will be identical or not 


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         left = right= NULL;
//     }


// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     bool isIdentical(Node* r1, Node * r2){

//         if (r1==NULL &&r2==NULL)
//         {
//             return true;
//         }
//         if (r1==NULL && r2!=NULL)
//         {
//             return false;
//         }
//         if (r1!=NULL && r2==NULL)
//         {
//             return false;
//         }

//         bool left = isIdentical(r1->left,r2->left);
//         bool right = isIdentical(r1->right,r2->right);

//         bool value = r1->data==r2->data;

//         if (left&&right&&value)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
        
        
//     }


        
    

//     int main(){


//           Node * root1 = NULL;

//          root1= Buildtree(root1);

//          cout<<" Enter The element of the second Tree"<<endl;

//          Node * root2 = NULL;
//          root2 = Buildtree(root2);

//          cout<<isIdentical(root1,root2);

         

//     }


// check That the sum of the left subtree will be equal to the right subtree


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         left = right= NULL;
//     }


// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     int sumtree(Node * root){

//         if (root==NULL)
//         {
//             return 0;
//         }

//         return root->data+sumtree(root->left)+ sumtree(root->right);
        
//     }

//     bool SumisEqual(Node * root){

//         if (root==NULL)
//         {
//             return true;
//         }
        

//         int left = sumtree(root->left);

//         int right = sumtree(root->right);


//         return left == right;


//     }

//     int main(){

//         Node * root = NULL;

//         root= Buildtree(root);

//         cout<<SumisEqual(root);
//     }


//  Zig Zig level order traver sal    

// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *left;
//     Node * right;

//     Node(int data){
//         this->data= data;
//         left = right= NULL;
//     }


// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     vector<int> ZigZagTraversal(Node * root){

//         vector<int> result;

//         if (root==NULL)
//         {
//             return result;
//         }

//         queue<Node *> q;
//         q.push(root);

//         bool lefttoright= true;

//         while (!q.empty())
//         {
//             int size= q.size();
//             vector<int > ans(size);
          

//             for (int i = 0; i < size; i++)
//             {

//                   Node *firstnode= q.front();
//                    q.pop();
//                 int index = lefttoright?i:size-i-1;

//                 ans[index]=firstnode->data;

//                 if (firstnode->left)
//                 {
//                     q.push(firstnode->left);
//                 }

//                 if (firstnode->right)
//                 {
//                     q.push(firstnode->right);
//                 }
                
                
//             }
            
//                lefttoright= !lefttoright;

//                for (auto i:ans)
//                {
//                    result.push_back(i);
//                }
               
//         }
        
//         return result;
//     }

    


//     int main(){

//         Node * root = NULL;

//         root= Buildtree(root);

//         vector<int> ans= ZigZagTraversal(root);

//         for (int i = 0; i <ans.size(); i++)
//         {
//             cout<<ans[i]<<endl;
//         }
        

        
//     }


// Boundary Traversal In the Binary tree


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

// // Build Tree
// Node* Buildtree(Node* root) {
//     int data;
//     cin >> data;

//     if (data == -1)
//         return NULL;

//     root = new Node(data);

//     root->left = Buildtree(root->left);
//     root->right = Buildtree(root->right);

//     return root;
// }

// // Left Boundary (excluding leaf)
// void LeftTraversal(Node* root, vector<int>& ans) {
//     if (root == NULL || (root->left == NULL && root->right == NULL))
//         return;

//     ans.push_back(root->data);

//     if (root->left)
//         LeftTraversal(root->left, ans);
//     else
//         LeftTraversal(root->right, ans);
// }

// // Leaf Nodes
// void LeafTraversal(Node* root, vector<int>& ans) {
//     if (root == NULL)
//         return;

//     if (root->left == NULL && root->right == NULL) {
//         ans.push_back(root->data);
//         return;
//     }

//     LeafTraversal(root->left, ans);
//     LeafTraversal(root->right, ans);
// }

// // Right Boundary (excluding leaf, bottom-up)
// void RightTraversal(Node* root, vector<int>& ans) {
//     if (root == NULL || (root->left == NULL && root->right == NULL))
//         return;

//     if (root->right)
//         RightTraversal(root->right, ans);
//     else
//         RightTraversal(root->left, ans);

//     ans.push_back(root->data);
// }

// // Boundary Traversal
// vector<int> BoundaryTraversal(Node* root) {

//     vector<int> ans;
//     if (root == NULL)
//         return ans;

//     // Root
//     ans.push_back(root->data);

//     // Left Boundary
//     LeftTraversal(root->left, ans);

//     // Leaf Nodes
//     LeafTraversal(root->left, ans);
//     LeafTraversal(root->right, ans);

//     // Right Boundary
//     RightTraversal(root->right, ans);

//     return ans;
// }

// int main() {
//     Node* root = NULL;

//     // Input example:
//     // 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
//     root = Buildtree(root);

//     vector<int> result = BoundaryTraversal(root);

//     for (int x : result) {
//         cout << x << " ";
//     }

//     return 0;
// }


// Top vieew Of the Binary Tree

// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left=right=NULL;
//     }

// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }


// void Topview(Node * root){

//     if (root==NULL)
//     {
//         return;
//     }

//     map<int,int> mp;
//     queue<pair<Node*,int>> q;

//     q.push({root,0});

//     while (!q.empty())
//     {
//         auto temp = q.front();
//         q.pop();

//         Node* node= temp.first;
//         int hd= temp.second;

//         if (mp.find(hd)==mp.end())
//         {
//             mp[hd]=node->data;
//         }

//         if (node->left)
//         {
//             q.push({node->left,hd-1});
//         }
//         if (node->right)
//         {
//             q.push({node->right,hd+1});
//         }
        
        
//     }

//     for(auto i:mp){
//         cout<<i.second<<"  "; 
//     }
    
    
// }

// int main(){

//     Node * root= NULL;
//     root= Buildtree(root);

//     Topview(root);


// }


//  Bottom View of the Tree

// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left=right=NULL;
//     }

// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     void Bottomview(Node* root){

//         if (root==NULL)
//         {
//             return;
//         }

//         map<int ,int> mp;
//         queue<pair<Node*,int>> q;

//         q.push({root,0});

//         while (!q.empty())
//         {
//             auto temp =q.front();
//             q.pop();

//             Node* node= temp.first;
//             int hd= temp.second;

//             mp[hd]=node->data;

//             if (node->left)
//             {
//                 q.push({node->left,hd-1});
//             }
//             if (node->right)
//             {
//                 q.push({node->right,hd+1});
//             }
            
//         }

//         for (auto i :mp)
//         {
//             cout<<i.second<<"  ";
//         }
        
        
        
//     }
// int main(){
//     Node* root= NULL;
//     root= Buildtree(root);

//     Bottomview(root);
// }


// Left View Of the tree

// #include<iostream>
// #include<map>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data= data;
//         left=right=NULL;
//     }

// };

//     Node * Buildtree( Node * root){

//         int data;
//         cout<<"Enter Data"<<endl;
//         cin>>data;

//         if (data==-1)
//         {
//             return NULL;
//         }

//         root= new Node(data);

//         cout<<"Enter The left of "<<data<<endl;
//         root->left= Buildtree(root->left);

//         cout<<"Enter The right of "<<data<<endl;
//         root->right= Buildtree(root->right);

//         return root;
        
//     }

//     void Leftview( Node * root){
//         if (root==NULL)
//         {
//             return;
//         }
//         queue<Node*> q;
//         q.push(root);

//         while (!q.empty())
//         {   int n = q.size();
          


//             for (int i = 1; i <=n; i++)
//             {

//              Node* temp = q.front();
//               q.pop();

//                 if (i==1)
//                 {
//                     cout<<temp->data<<"  ";
//                 }

  
//                 if (temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if (temp->right)
//                 {
//                     q.push(temp->right);
//                 }
                
                
                
//             }
            
//         }
        
//     }

    
//     void Rightview( Node * root){
//         if (root==NULL)
//         {
//             return;
//         }
//         queue<Node*> q;
//         q.push(root);

//         while (!q.empty())
//         {   int n = q.size();
          


//             for (int i = 1; i <=n; i++)
//             {

//              Node* temp = q.front();
//               q.pop();

//                 if (i==n)
//                 {
//                     cout<<temp->data<<"  ";
//                 }

  
//                 if (temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if (temp->right)
//                 {
//                     q.push(temp->right);
//                 }
                
                
                
//             }
            
//         }
        
//     }


//     int main(){

//         Node * root=NULL;
//         root= Buildtree(root);
//          // Left View
//         Leftview(root);

//         // Right View

//         Rightview(root);
//     }


// Find The longest path that have maximum sum of the node 

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

// Node * Buildtree(Node* root){

//     int data;
//     cout<<"Enter Data"<<endl;
//     cin>>data;
//     if (data==-1)
//     {
//         return NULL;
//     }

//          root= new Node(data);

//  cout<<"Enter the left of "<<data<<" "<<endl;
//  root->left = Buildtree(root->left);
//  cout<<"Enter The right of"<<data<<endl;
//  root-> right= Buildtree(root->right);

//  return root;
    
// }
// void solve(Node* root,int len,int &maxlen,int sum,int &maxsum){
//     if (root==NULL)
//     {
//         if (len>=maxlen)
//         {
//             maxlen=len;
//             maxsum= sum;
//         }else if (len==maxlen)
//         {
//             maxsum= max(sum,maxsum);
//         }
//        return;
          
//     }

//     sum=sum+root->data;

//     solve(root->left,len+1,maxlen,sum,maxsum);
//     solve(root->right ,len+1,maxlen,sum,maxsum);
    
// }

// int MaxSumOfPath(Node * root){

//     int len=0;
//     int maxlen=0;
//     int sum = 0;
//     int maxsum = INT8_MIN;

//     solve(root,len,maxlen,sum,maxsum);

//     return maxsum;
// }

// // Lowest Common Ancestor of the binary tree

// Node * LCA(Node * root,int n1,int n2){
//     if (root==NULL)
//     {
//         return NULL;
//     }
//     if (root->data==n1 || root->data==n2)
//     {
//         return root;
//     }

//    Node *leftans= LCA(root->left,n1,n2);
//    Node * rightans=  LCA(root->right,n1,n2);

//    if (leftans!=NULL && rightans!=NULL)
//    {
//          return root;
//    }

//    else if (leftans!=NULL && rightans==NULL)
//    {
//            return leftans;
//    }
//    else if (rightans!=NULL && leftans==NULL)
//    {
//           return rightans;
//    }
   
   
//    else {
//      return NULL;
//    }
    


    
// }

// int main(){

//     Node* root= NULL;
//     root= Buildtree(root);

//   cout<<MaxSumOfPath(root)<<endl;


//   Node* result = LCA(root,3,4);
//   cout<<result->data;
// }

